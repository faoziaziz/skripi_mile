`timescale 1ns/1ps

module rv32i_core (
    input  wire        clk,
    input  wire        reset,

    // Instruction memory interface
    output wire [31:0] imem_addr,
    input  wire [31:0] imem_rdata,

    // Data memory interface
    output reg         dmem_valid,
    output reg         dmem_write,
    output reg  [31:0] dmem_addr,
    output reg  [31:0] dmem_wdata,
    output reg  [3:0]  dmem_wstrb,

    input  wire [31:0] dmem_rdata,
    input  wire         dmem_ready
);

    // ============================================================
    // Program Counter
    // ============================================================

    reg [31:0] pc;

    assign imem_addr = pc;


    // ============================================================
    // Register File
    // x0 is always zero
    // ============================================================

    reg [31:0] regs [0:31];

    wire [4:0] rs1 = imem_rdata[19:15];
    wire [4:0] rs2 = imem_rdata[24:20];
    wire [4:0] rd  = imem_rdata[11:7];

    wire [31:0] rs1_data =
        (rs1 == 5'd0) ? 32'd0 : regs[rs1];

    wire [31:0] rs2_data =
        (rs2 == 5'd0) ? 32'd0 : regs[rs2];


    // ============================================================
    // Instruction fields
    // ============================================================

    wire [6:0] opcode = imem_rdata[6:0];
    wire [2:0] funct3 = imem_rdata[14:12];
    wire [6:0] funct7 = imem_rdata[31:25];


    // ============================================================
    // Immediate generation
    // ============================================================

    wire [31:0] imm_I =
        {{20{imem_rdata[31]}},
         imem_rdata[31:20]};

    wire [31:0] imm_S =
        {{20{imem_rdata[31]}},
         imem_rdata[31:25],
         imem_rdata[11:7]};

    wire [31:0] imm_B =
        {{19{imem_rdata[31]}},
         imem_rdata[31],
         imem_rdata[7],
         imem_rdata[30:25],
         imem_rdata[11:8],
         1'b0};

    wire [31:0] imm_U =
        {imem_rdata[31:12], 12'b0};

    wire [31:0] imm_J =
        {{11{imem_rdata[31]}},
         imem_rdata[31],
         imem_rdata[19:12],
         imem_rdata[20],
         imem_rdata[30:21],
         1'b0};


    // ============================================================
    // Opcodes
    // ============================================================

    localparam OPCODE_LUI    = 7'b0110111;
    localparam OPCODE_AUIPC  = 7'b0010111;
    localparam OPCODE_JAL    = 7'b1101111;
    localparam OPCODE_JALR   = 7'b1100111;
    localparam OPCODE_BRANCH = 7'b1100011;
    localparam OPCODE_LOAD   = 7'b0000011;
    localparam OPCODE_STORE  = 7'b0100011;
    localparam OPCODE_OP_IMM = 7'b0010011;
    localparam OPCODE_OP     = 7'b0110011;


    // ============================================================
    // ALU
    // ============================================================

    reg [31:0] alu_result;

    always @(*) begin

        alu_result = 32'd0;

        case (opcode)

            // ----------------------------------------------------
            // ADDI
            // ----------------------------------------------------

            OPCODE_OP_IMM: begin

                case (funct3)

                    3'b000: begin
                        alu_result = rs1_data + imm_I;
                    end

                    // ANDI
                    3'b111: begin
                        alu_result = rs1_data & imm_I;
                    end

                    // ORI
                    3'b110: begin
                        alu_result = rs1_data | imm_I;
                    end

                    // XORI
                    3'b100: begin
                        alu_result = rs1_data ^ imm_I;
                    end

                    default: begin
                        alu_result = 32'd0;
                    end

                endcase
            end


            // ----------------------------------------------------
            // ADD / SUB / AND / OR / XOR
            // ----------------------------------------------------

            OPCODE_OP: begin

                case (funct3)

                    3'b000: begin

                        if (funct7 == 7'b0100000)
                            alu_result = rs1_data - rs2_data;
                        else
                            alu_result = rs1_data + rs2_data;

                    end

                    3'b111:
                        alu_result = rs1_data & rs2_data;

                    3'b110:
                        alu_result = rs1_data | rs2_data;

                    3'b100:
                        alu_result = rs1_data ^ rs2_data;

                    default:
                        alu_result = 32'd0;

                endcase
            end


            // ----------------------------------------------------
            // LUI
            // ----------------------------------------------------

            OPCODE_LUI: begin
                alu_result = imm_U;
            end


            // ----------------------------------------------------
            // AUIPC
            // ----------------------------------------------------

            OPCODE_AUIPC: begin
                alu_result = pc + imm_U;
            end


            // ----------------------------------------------------
            // LOAD
            // ----------------------------------------------------

            OPCODE_LOAD: begin
                alu_result = rs1_data + imm_I;
            end


            // ----------------------------------------------------
            // STORE
            // ----------------------------------------------------

            OPCODE_STORE: begin
                alu_result = rs1_data + imm_S;
            end


            default: begin
                alu_result = 32'd0;
            end

        endcase

    end


    // ============================================================
    // Sequential CPU
    // ============================================================

    integer i;

    always @(posedge clk) begin

        if (reset) begin

            pc <= 32'h00000000;

            dmem_valid <= 1'b0;
            dmem_write <= 1'b0;
            dmem_addr  <= 32'd0;
            dmem_wdata <= 32'd0;
            dmem_wstrb <= 4'b0000;

            for (i = 0; i < 32; i = i + 1)
                regs[i] <= 32'd0;

        end

        else begin

            // x0 must always remain zero
            regs[0] <= 32'd0;

            // Default memory signals
            dmem_valid <= 1'b0;
            dmem_write <= 1'b0;
            dmem_wstrb <= 4'b0000;


            case (opcode)

                // =================================================
                // LUI
                // =================================================

                OPCODE_LUI: begin

                    if (rd != 0)
                        regs[rd] <= imm_U;

                    pc <= pc + 32'd4;

                end


                // =================================================
                // AUIPC
                // =================================================

                OPCODE_AUIPC: begin

                    if (rd != 0)
                        regs[rd] <= pc + imm_U;

                    pc <= pc + 32'd4;

                end


                // =================================================
                // OP-IMM
                // =================================================

                OPCODE_OP_IMM: begin

                    if (rd != 0)
                        regs[rd] <= alu_result;

                    pc <= pc + 32'd4;

                end


                // =================================================
                // OP
                // =================================================

                OPCODE_OP: begin

                    if (rd != 0)
                        regs[rd] <= alu_result;

                    pc <= pc + 32'd4;

                end


                // =================================================
                // LOAD
                // =================================================

                OPCODE_LOAD: begin

                    dmem_valid <= 1'b1;
                    dmem_write <= 1'b0;
                    dmem_addr  <= alu_result;

                    if (dmem_ready) begin

                        if (rd != 0)
                            regs[rd] <= dmem_rdata;

                        pc <= pc + 32'd4;

                    end

                end


                // =================================================
                // STORE
                // =================================================

                OPCODE_STORE: begin

                    dmem_valid <= 1'b1;
                    dmem_write <= 1'b1;
                    dmem_addr  <= alu_result;
                    dmem_wdata <= rs2_data;
                    dmem_wstrb <= 4'b1111;

                    if (dmem_ready) begin
                        pc <= pc + 32'd4;
                    end

                end


                // =================================================
                // BEQ / BNE
                // =================================================

                OPCODE_BRANCH: begin

                    case (funct3)

                        // BEQ
                        3'b000: begin

                            if (rs1_data == rs2_data)
                                pc <= pc + imm_B;
                            else
                                pc <= pc + 32'd4;

                        end

                        // BNE
                        3'b001: begin

                            if (rs1_data != rs2_data)
                                pc <= pc + imm_B;
                            else
                                pc <= pc + 32'd4;

                        end

                        default:
                            pc <= pc + 32'd4;

                    endcase

                end


                // =================================================
                // JAL
                // =================================================

                OPCODE_JAL: begin

                    if (rd != 0)
                        regs[rd] <= pc + 32'd4;

                    pc <= pc + imm_J;

                end


                // =================================================
                // JALR
                // =================================================

                OPCODE_JALR: begin

                    if (rd != 0)
                        regs[rd] <= pc + 32'd4;

                    pc <= (rs1_data + imm_I) & 32'hFFFFFFFE;

                end


                // =================================================
                // Unknown instruction
                // =================================================

                default: begin

                    pc <= pc + 32'd4;

                end

            endcase

        end

    end

endmodule

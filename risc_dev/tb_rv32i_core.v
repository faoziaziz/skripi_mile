`timescale 1ns/1ps

module tb_rv32i_core;

    reg clk;
    reg reset;

    wire [31:0] imem_addr;
    reg  [31:0] imem_rdata;

    wire        dmem_valid;
    wire        dmem_write;
    wire [31:0] dmem_addr;
    wire [31:0] dmem_wdata;
    wire [3:0]  dmem_wstrb;

    reg [31:0] dmem_rdata;
    reg        dmem_ready;


    // ============================================================
    // CPU
    // ============================================================

    rv32i_core dut (

        .clk(clk),
        .reset(reset),

        .imem_addr(imem_addr),
        .imem_rdata(imem_rdata),

        .dmem_valid(dmem_valid),
        .dmem_write(dmem_write),
        .dmem_addr(dmem_addr),
        .dmem_wdata(dmem_wdata),
        .dmem_wstrb(dmem_wstrb),

        .dmem_rdata(dmem_rdata),
        .dmem_ready(dmem_ready)

    );


    // ============================================================
    // Clock
    // ============================================================

    always #5 clk = ~clk;


    // ============================================================
    // Instruction Memory
    // ============================================================

    always @(*) begin

        case (imem_addr)

            // ADDI x1, x0, 10
            32'h00000000:
                imem_rdata = 32'h00A00093;

            // ADDI x2, x0, 20
            32'h00000004:
                imem_rdata = 32'h01400113;

            // ADD x3, x1, x2
            32'h00000008:
                imem_rdata = 32'h002081B3;

            // SUB x4, x3, x1
            32'h0000000C:
                imem_rdata = 32'h40118233;

            // AND x5, x1, x2
            32'h00000010:
                imem_rdata = 32'h0020F2B3;

            // OR x6, x1, x2
            32'h00000014:
                imem_rdata = 32'h0020E333;

            // XOR x7, x1, x2
            32'h00000018:
                imem_rdata = 32'h0020C3B3;

            // Infinite loop:
            // BEQ x0, x0, 0
            32'h0000001C:
                imem_rdata = 32'h00000063;

            default:
                imem_rdata = 32'h00000013; // NOP = ADDI x0,x0,0

        endcase

    end


    // ============================================================
    // Simple Data Memory
    // ============================================================

    assign dmem_rdata = 32'h00000000;
    assign dmem_ready = 1'b1;


    // ============================================================
    // Simulation
    // ============================================================

    initial begin

        $dumpfile("rv32i_core.vcd");
        $dumpvars(0, tb_rv32i_core);

        clk = 1'b0;
        reset = 1'b1;

        #20;

        reset = 1'b0;

        #200;

        $display("----------------------------------");
        $display("RV32I simulation finished");
        $display("----------------------------------");

        $display("x1 = %d", dut.regs[1]);
        $display("x2 = %d", dut.regs[2]);
        $display("x3 = %d", dut.regs[3]);
        $display("x4 = %d", dut.regs[4]);
        $display("x5 = %d", dut.regs[5]);
        $display("x6 = %d", dut.regs[6]);
        $display("x7 = %d", dut.regs[7]);

        $finish;

    end

endmodule

`timescale 1ns/1ps

module axi_lite_regs #(
    parameter ADDR_WIDTH = 6,
    parameter DATA_WIDTH = 32
)(
    input  wire                  aclk,
    input  wire                  aresetn,

    // AXI-Lite Write Address Channel
    input  wire [ADDR_WIDTH-1:0] s_axi_awaddr,
    input  wire                  s_axi_awvalid,
    output reg                   s_axi_awready,

    // AXI-Lite Write Data Channel
    input  wire [DATA_WIDTH-1:0] s_axi_wdata,
    input  wire [DATA_WIDTH/8-1:0] s_axi_wstrb,
    input  wire                  s_axi_wvalid,
    output reg                   s_axi_wready,

    // AXI-Lite Write Response Channel
    output reg [1:0]              s_axi_bresp,
    output reg                    s_axi_bvalid,
    input  wire                   s_axi_bready,

    // AXI-Lite Read Address Channel
    input  wire [ADDR_WIDTH-1:0] s_axi_araddr,
    input  wire                  s_axi_arvalid,
    output reg                   s_axi_arready,

    // AXI-Lite Read Data Channel
    output reg [DATA_WIDTH-1:0]  s_axi_rdata,
    output reg [1:0]              s_axi_rresp,
    output reg                    s_axi_rvalid,
    input  wire                   s_axi_rready
);

    reg [DATA_WIDTH-1:0] reg0;
    reg [DATA_WIDTH-1:0] reg1;
    reg [DATA_WIDTH-1:0] reg2;
    reg [DATA_WIDTH-1:0] reg3;

    reg [ADDR_WIDTH-1:0] awaddr_reg;
    reg                  awaddr_valid;

    reg [DATA_WIDTH-1:0] wdata_reg;
    reg [DATA_WIDTH/8-1:0] wstrb_reg;
    reg                  wdata_valid;


    // =========================================================
    // Write address + write data
    // =========================================================

    always @(posedge aclk) begin
        if (!aresetn) begin
            s_axi_awready <= 1'b0;
            s_axi_wready  <= 1'b0;

            awaddr_reg    <= '0;
            awaddr_valid  <= 1'b0;

            wdata_reg     <= '0;
            wstrb_reg     <= '0;
            wdata_valid   <= 1'b0;

            s_axi_bvalid  <= 1'b0;
            s_axi_bresp   <= 2'b00;

            reg0 <= 32'h00000000;
            reg1 <= 32'h00000000;
            reg2 <= 32'h00000000;
            reg3 <= 32'h00000000;
        end
        else begin

            // Accept write address
            if (!awaddr_valid && !s_axi_bvalid) begin
                s_axi_awready <= 1'b1;

                if (s_axi_awvalid) begin
                    awaddr_reg   <= s_axi_awaddr;
                    awaddr_valid <= 1'b1;
                    s_axi_awready <= 1'b0;
                end
            end
            else begin
                s_axi_awready <= 1'b0;
            end


            // Accept write data
            if (!wdata_valid && !s_axi_bvalid) begin
                s_axi_wready <= 1'b1;

                if (s_axi_wvalid) begin
                    wdata_reg    <= s_axi_wdata;
                    wstrb_reg    <= s_axi_wstrb;
                    wdata_valid  <= 1'b1;
                    s_axi_wready <= 1'b0;
                end
            end
            else begin
                s_axi_wready <= 1'b0;
            end


            // Perform write when address + data are available
            if (awaddr_valid && wdata_valid && !s_axi_bvalid) begin

                case (awaddr_reg[5:2])

                    4'h0: begin
                        if (wstrb_reg[0]) reg0[7:0]   <= wdata_reg[7:0];
                        if (wstrb_reg[1]) reg0[15:8]  <= wdata_reg[15:8];
                        if (wstrb_reg[2]) reg0[23:16] <= wdata_reg[23:16];
                        if (wstrb_reg[3]) reg0[31:24] <= wdata_reg[31:24];
                    end

                    4'h1: begin
                        if (wstrb_reg[0]) reg1[7:0]   <= wdata_reg[7:0];
                        if (wstrb_reg[1]) reg1[15:8]  <= wdata_reg[15:8];
                        if (wstrb_reg[2]) reg1[23:16] <= wdata_reg[23:16];
                        if (wstrb_reg[3]) reg1[31:24] <= wdata_reg[31:24];
                    end

                    4'h2: begin
                        if (wstrb_reg[0]) reg2[7:0]   <= wdata_reg[7:0];
                        if (wstrb_reg[1]) reg2[15:8]  <= wdata_reg[15:8];
                        if (wstrb_reg[2]) reg2[23:16] <= wdata_reg[23:16];
                        if (wstrb_reg[3]) reg2[31:24] <= wdata_reg[31:24];
                    end

                    4'h3: begin
                        if (wstrb_reg[0]) reg3[7:0]   <= wdata_reg[7:0];
                        if (wstrb_reg[1]) reg3[15:8]  <= wdata_reg[15:8];
                        if (wstrb_reg[2]) reg3[23:16] <= wdata_reg[23:16];
                        if (wstrb_reg[3]) reg3[31:24] <= wdata_reg[31:24];
                    end

                    default: begin
                    end

                endcase

                // Write response = OKAY
                s_axi_bresp  <= 2'b00;
                s_axi_bvalid <= 1'b1;

                awaddr_valid <= 1'b0;
                wdata_valid  <= 1'b0;
            end


            // Complete write response
            if (s_axi_bvalid && s_axi_bready) begin
                s_axi_bvalid <= 1'b0;
            end

        end
    end


    // =========================================================
    // Read channel
    // =========================================================

    always @(posedge aclk) begin
        if (!aresetn) begin
            s_axi_arready <= 1'b0;
            s_axi_rvalid  <= 1'b0;
            s_axi_rdata   <= '0;
            s_axi_rresp   <= 2'b00;
        end
        else begin

            if (!s_axi_rvalid) begin
                s_axi_arready <= 1'b1;

                if (s_axi_arvalid) begin

                    case (s_axi_araddr[5:2])

                        4'h0:
                            s_axi_rdata <= reg0;

                        4'h1:
                            s_axi_rdata <= reg1;

                        4'h2:
                            s_axi_rdata <= reg2;

                        4'h3:
                            s_axi_rdata <= reg3;

                        default:
                            s_axi_rdata <= 32'h00000000;

                    endcase

                    s_axi_rresp  <= 2'b00;
                    s_axi_rvalid <= 1'b1;
                    s_axi_arready <= 1'b0;
                end
            end
            else begin
                s_axi_arready <= 1'b0;
            end


            if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
            end

        end
    end

endmodule

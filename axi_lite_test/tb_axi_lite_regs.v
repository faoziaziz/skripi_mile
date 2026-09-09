`timescale 1ns/1ps

module tb_axi_lite_regs;

    reg         aclk;
    reg         aresetn;

    reg  [5:0]  s_axi_awaddr;
    reg         s_axi_awvalid;
    wire        s_axi_awready;

    reg  [31:0] s_axi_wdata;
    reg  [3:0]  s_axi_wstrb;
    reg         s_axi_wvalid;
    wire        s_axi_wready;

    wire [1:0]  s_axi_bresp;
    wire        s_axi_bvalid;
    reg         s_axi_bready;

    reg  [5:0]  s_axi_araddr;
    reg         s_axi_arvalid;
    wire        s_axi_arready;

    wire [31:0] s_axi_rdata;
    wire [1:0]  s_axi_rresp;
    wire        s_axi_rvalid;
    reg         s_axi_rready;


    // =========================================================
    // DUT
    // =========================================================

    axi_lite_regs dut (
        .aclk           (aclk),
        .aresetn        (aresetn),

        .s_axi_awaddr   (s_axi_awaddr),
        .s_axi_awvalid  (s_axi_awvalid),
        .s_axi_awready  (s_axi_awready),

        .s_axi_wdata    (s_axi_wdata),
        .s_axi_wstrb    (s_axi_wstrb),
        .s_axi_wvalid   (s_axi_wvalid),
        .s_axi_wready   (s_axi_wready),

        .s_axi_bresp    (s_axi_bresp),
        .s_axi_bvalid   (s_axi_bvalid),
        .s_axi_bready   (s_axi_bready),

        .s_axi_araddr   (s_axi_araddr),
        .s_axi_arvalid  (s_axi_arvalid),
        .s_axi_arready  (s_axi_arready),

        .s_axi_rdata    (s_axi_rdata),
        .s_axi_rresp    (s_axi_rresp),
        .s_axi_rvalid   (s_axi_rvalid),
        .s_axi_rready   (s_axi_rready)
    );


    // =========================================================
    // Clock
    // 100 MHz
    // =========================================================

    initial begin
        aclk = 0;

        forever #5 aclk = ~aclk;
    end


    // =========================================================
    // AXI-Lite WRITE TASK
    // =========================================================

    task axi_write;

        input [5:0]  addr;
        input [31:0] data;

        begin

            $display("");
            $display("======================================");
            $display("AXI WRITE");
            $display("ADDR = 0x%08h", addr);
            $display("DATA = 0x%08h", data);
            $display("======================================");

            // Address
            @(posedge aclk);

            s_axi_awaddr  <= addr;
            s_axi_awvalid <= 1'b1;

            // Data
            s_axi_wdata   <= data;
            s_axi_wstrb   <= 4'b1111;
            s_axi_wvalid  <= 1'b1;

            // Wait address handshake
            wait (s_axi_awready == 1'b1);

            @(posedge aclk);

            s_axi_awvalid <= 1'b0;

            // Wait data handshake
            wait (s_axi_wready == 1'b1);

            @(posedge aclk);

            s_axi_wvalid <= 1'b0;

            // Wait write response
            s_axi_bready <= 1'b1;

            wait (s_axi_bvalid == 1'b1);

            @(posedge aclk);

            if (s_axi_bresp == 2'b00)
                $display("WRITE RESPONSE: OKAY");
            else
                $display("WRITE RESPONSE ERROR: %b", s_axi_bresp);

            s_axi_bready <= 1'b0;

        end

    endtask


    // =========================================================
    // AXI-Lite READ TASK
    // =========================================================

    task axi_read;

        input [5:0] addr;
        reg [31:0] data;

        begin

            $display("");
            $display("======================================");
            $display("AXI READ");
            $display("ADDR = 0x%08h", addr);
            $display("======================================");

            @(posedge aclk);

            s_axi_araddr  <= addr;
            s_axi_arvalid <= 1'b1;

            wait (s_axi_arready == 1'b1);

            @(posedge aclk);

            s_axi_arvalid <= 1'b0;

            s_axi_rready <= 1'b1;

            wait (s_axi_rvalid == 1'b1);

            data = s_axi_rdata;

            @(posedge aclk);

            $display("READ DATA = 0x%08h", data);

            if (s_axi_rresp == 2'b00)
                $display("READ RESPONSE: OKAY");
            else
                $display("READ RESPONSE ERROR: %b", s_axi_rresp);

            s_axi_rready <= 1'b0;

        end

    endtask


    // =========================================================
    // Main Test
    // =========================================================

    initial begin

        // Initial values
        aresetn = 1'b0;

        s_axi_awaddr  = 0;
        s_axi_awvalid = 0;

        s_axi_wdata   = 0;
        s_axi_wstrb   = 0;
        s_axi_wvalid  = 0;

        s_axi_bready  = 0;

        s_axi_araddr  = 0;
        s_axi_arvalid = 0;

        s_axi_rready  = 0;


        // Reset
        $display("");
        $display("######################################");
        $display("# AXI-LITE REGISTER TEST");
        $display("######################################");

        repeat (5) @(posedge aclk);

        aresetn = 1'b1;

        $display("RESET RELEASED");


        // =====================================================
        // REG0
        // =====================================================

        axi_write(6'h00, 32'h12345678);
        axi_read (6'h00);


        // =====================================================
        // REG1
        // =====================================================

        axi_write(6'h04, 32'hDEADBEEF);
        axi_read (6'h04);


        // =====================================================
        // REG2
        // =====================================================

        axi_write(6'h08, 32'hCAFEBABE);
        axi_read (6'h08);


        // =====================================================
        // REG3
        // =====================================================

        axi_write(6'h0C, 32'hA5A5A5A5);
        axi_read (6'h0C);


        // =====================================================
        // Finish
        // =====================================================

        repeat (5) @(posedge aclk);

        $display("");
        $display("######################################");
        $display("# TEST FINISHED");
        $display("######################################");

        $finish;

    end


    // =========================================================
    // VCD waveform
    // =========================================================

    initial begin
        $dumpfile("axi_lite_regs.vcd");
        $dumpvars(0, tb_axi_lite_regs);
    end

endmodule

`timescale 1ns/1ps

module tb_fft8;

    reg clk;
    reg reset;
    reg start;

    reg signed [15:0] x0;
    reg signed [15:0] x1;
    reg signed [15:0] x2;
    reg signed [15:0] x3;
    reg signed [15:0] x4;
    reg signed [15:0] x5;
    reg signed [15:0] x6;
    reg signed [15:0] x7;

    wire signed [31:0] y0_re;
    wire signed [31:0] y1_re;
    wire signed [31:0] y2_re;
    wire signed [31:0] y3_re;
    wire signed [31:0] y4_re;
    wire signed [31:0] y5_re;
    wire signed [31:0] y6_re;
    wire signed [31:0] y7_re;

    wire signed [31:0] y0_im;
    wire signed [31:0] y1_im;
    wire signed [31:0] y2_im;
    wire signed [31:0] y3_im;
    wire signed [31:0] y4_im;
    wire signed [31:0] y5_im;
    wire signed [31:0] y6_im;
    wire signed [31:0] y7_im;

    wire done;


    // =========================================================
    // DUT
    // =========================================================

    fft8 dut (
        .clk(clk),
        .reset(reset),
        .start(start),

        .x0(x0),
        .x1(x1),
        .x2(x2),
        .x3(x3),
        .x4(x4),
        .x5(x5),
        .x6(x6),
        .x7(x7),

        .y0_re(y0_re),
        .y1_re(y1_re),
        .y2_re(y2_re),
        .y3_re(y3_re),
        .y4_re(y4_re),
        .y5_re(y5_re),
        .y6_re(y6_re),
        .y7_re(y7_re),

        .y0_im(y0_im),
        .y1_im(y1_im),
        .y2_im(y2_im),
        .y3_im(y3_im),
        .y4_im(y4_im),
        .y5_im(y5_im),
        .y6_im(y6_im),
        .y7_im(y7_im),

        .done(done)
    );


    // =========================================================
    // Clock
    // =========================================================

    always #5 clk = ~clk;


    // =========================================================
    // Simulation
    // =========================================================

    initial begin

        $dumpfile("fft8.vcd");
        $dumpvars(0, tb_fft8);

        clk   = 1'b0;
        reset = 1'b1;
        start = 1'b0;

        // Impulse input
        x0 = 16'sd1;
        x1 = 16'sd0;
        x2 = 16'sd0;
        x3 = 16'sd0;
        x4 = 16'sd0;
        x5 = 16'sd0;
        x6 = 16'sd0;
        x7 = 16'sd0;

        // Reset
        #20;

        reset = 1'b0;

        // Start FFT
        #10;
        start = 1'b1;

        #10;
        start = 1'b0;

        // Wait
        #100;

        $display("");
        $display("======================================");
        $display("             FFT-8 TEST");
        $display("======================================");

        $display("X[0] = %0d + j(%0d)", y0_re, y0_im);
        $display("X[1] = %0d + j(%0d)", y1_re, y1_im);
        $display("X[2] = %0d + j(%0d)", y2_re, y2_im);
        $display("X[3] = %0d + j(%0d)", y3_re, y3_im);
        $display("X[4] = %0d + j(%0d)", y4_re, y4_im);
        $display("X[5] = %0d + j(%0d)", y5_re, y5_im);
        $display("X[6] = %0d + j(%0d)", y6_re, y6_im);
        $display("X[7] = %0d + j(%0d)", y7_re, y7_im);

        $display("======================================");

        $finish;

    end

endmodule

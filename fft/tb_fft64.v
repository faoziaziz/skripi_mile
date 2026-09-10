`timescale 1ns/1ps

module tb_fft64;

    parameter DATA_W = 32;

    // ============================================================
    // Clock / reset
    // ============================================================

    reg clk;
    reg rst;
    reg start;

    // ============================================================
    // FFT input
    // ============================================================

    reg signed [DATA_W-1:0] in_real [0:63];
    reg signed [DATA_W-1:0] in_imag [0:63];

    // ============================================================
    // FFT output
    // ============================================================

    wire signed [DATA_W-1:0] out_real [0:63];
    wire signed [DATA_W-1:0] out_imag [0:63];

    wire done;


    // ============================================================
    // DUT
    // ============================================================

    fft64_radix2 #(
        .DATA_W(DATA_W),
        .TW_W(16)
    ) dut (

        .clk(clk),
        .rst(rst),
        .start(start),

        .in_real(in_real),
        .in_imag(in_imag),

        .out_real(out_real),
        .out_imag(out_imag),

        .done(done)

    );


    // ============================================================
    // Clock
    //
    // 10 ns period = 100 MHz
    // ============================================================

    initial begin

        clk = 1'b0;

        forever #5 clk = ~clk;

    end


    // ============================================================
    // Generate test signal
    //
    // 64-point sine wave
    //
    // FFT bin = 4
    //
    // x[n] = 12000 sin(2*pi*4*n/64)
    // ============================================================

    integer n;

    real pi;
    real angle;
    real sample;

    initial begin

        pi = 3.14159265358979323846;

        for (n = 0; n < 64; n = n + 1) begin

            angle  = 2.0 * pi * 4.0 * n / 64.0;
            sample = 12000.0 * $sin(angle);

            in_real[n] = $rtoi(sample);
            in_imag[n] = 0;

        end

    end


    // ============================================================
    // Test sequence
    // ============================================================

    initial begin

        // VCD
        $dumpfile("fft64.vcd");
        $dumpvars(0, tb_fft64);

        // Initial values
        rst   = 1'b1;
        start = 1'b0;

        // Reset
        #20;

        rst = 1'b0;

        #20;

        // Start FFT
        $display("");
        $display("==============================================");
        $display("64-POINT RADIX-2 FFT");
        $display("==============================================");

        $display("");
        $display("INPUT SIGNAL:");
        $display("x[n] = 12000*sin(2*pi*4*n/64)");
        $display("Expected FFT peaks: bin 4 and bin 60");
        $display("");

        for (n = 0; n < 64; n = n + 1) begin

            $display(
                "input[%2d] = %8d + j%8d",
                n,
                in_real[n],
                in_imag[n]
            );

        end

        // --------------------------------------------------------
        // Start pulse
        // --------------------------------------------------------

        @(posedge clk);

        start <= 1'b1;

        @(posedge clk);

        start <= 1'b0;

        $display("");
        $display("FFT STARTED...");
        $display("");

        // --------------------------------------------------------
        // Wait for FFT
        // --------------------------------------------------------

        wait(done == 1'b1);

        @(posedge clk);

        // --------------------------------------------------------
        // Print output
        // --------------------------------------------------------

        $display("");
        $display("==============================================");
        $display("FFT RESULT");
        $display("==============================================");

        for (n = 0; n < 64; n = n + 1) begin

            $display(
                "X[%2d] = %12d + j%12d",
                n,
                out_real[n],
                out_imag[n]
            );

        end

        $display("");
        $display("==============================================");
        $display("EXPECTED:");
        $display("Large peak around bin 4");
        $display("Large peak around bin 60");
        $display("==============================================");
        $display("");

        #20;

        $finish;

    end

endmodule

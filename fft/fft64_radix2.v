`timescale 1ns/1ps

module fft64_radix2 #(
    parameter DATA_W = 32,
    parameter TW_W   = 16
)(
    input  wire clk,
    input  wire rst,
    input  wire start,

    input  wire signed [DATA_W-1:0] in_real [0:63],
    input  wire signed [DATA_W-1:0] in_imag [0:63],

    output reg signed [DATA_W-1:0] out_real [0:63],
    output reg signed [DATA_W-1:0] out_imag [0:63],

    output reg done
);

    // ============================================================
    // FFT DATA MEMORY
    // ============================================================

    reg signed [DATA_W-1:0] real_mem [0:63];
    reg signed [DATA_W-1:0] imag_mem [0:63];


    // ============================================================
    // TWIDDLE FACTORS
    //
    // W64^k = cos(2*pi*k/64) - j*sin(2*pi*k/64)
    //
    // Format Q1.15
    // ============================================================

    reg signed [TW_W-1:0] tw_real [0:31];
    reg signed [TW_W-1:0] tw_imag [0:31];

    initial begin

        tw_real[0]  =  32767;
        tw_imag[0]  =      0;

        tw_real[1]  =  32610;
        tw_imag[1]  =  -3212;

        tw_real[2]  =  32138;
        tw_imag[2]  =  -6393;

        tw_real[3]  =  31357;
        tw_imag[3]  =  -9512;

        tw_real[4]  =  30273;
        tw_imag[4]  = -12539;

        tw_real[5]  =  28898;
        tw_imag[5]  = -15446;

        tw_real[6]  =  27245;
        tw_imag[6]  = -18204;

        tw_real[7]  =  25329;
        tw_imag[7]  = -20854;

        tw_real[8]  =  23170;
        tw_imag[8]  = -23170;

        tw_real[9]  =  20854;
        tw_imag[9]  = -25329;

        tw_real[10] =  18204;
        tw_imag[10] = -27245;

        tw_real[11] =  15446;
        tw_imag[11] = -28898;

        tw_real[12] =  12539;
        tw_imag[12] = -30273;

        tw_real[13] =   9512;
        tw_imag[13] = -31357;

        tw_real[14] =   6393;
        tw_imag[14] = -32138;

        tw_real[15] =   3212;
        tw_imag[15] = -32610;

        tw_real[16] =      0;
        tw_imag[16] = -32768;

        tw_real[17] =  -3212;
        tw_imag[17] = -32610;

        tw_real[18] =  -6393;
        tw_imag[18] = -32138;

        tw_real[19] =  -9512;
        tw_imag[19] = -31357;

        tw_real[20] = -12539;
        tw_imag[20] = -30273;

        tw_real[21] = -15446;
        tw_imag[21] = -28898;

        tw_real[22] = -18204;
        tw_imag[22] = -27245;

        tw_real[23] = -20854;
        tw_imag[23] = -25329;

        tw_real[24] = -23170;
        tw_imag[24] = -23170;

        tw_real[25] = -25329;
        tw_imag[25] = -20854;

        tw_real[26] = -27245;
        tw_imag[26] = -18204;

        tw_real[27] = -28898;
        tw_imag[27] = -15446;

        tw_real[28] = -30273;
        tw_imag[28] = -12539;

        tw_real[29] = -31357;
        tw_imag[29] =  -9512;

        tw_real[30] = -32138;
        tw_imag[30] =  -6393;

        tw_real[31] = -32610;
        tw_imag[31] =  -3212;

    end


    // ============================================================
    // BIT REVERSAL
    //
    // 64 point -> 6 bit address
    // ============================================================

    function [5:0] bit_reverse;
        input [5:0] x;

        begin
            bit_reverse[5] = x[0];
            bit_reverse[4] = x[1];
            bit_reverse[3] = x[2];
            bit_reverse[2] = x[3];
            bit_reverse[1] = x[4];
            bit_reverse[0] = x[5];
        end

    endfunction


    // ============================================================
    // FFT STAGE TASK
    //
    // stage 0:
    //   butterfly size = 2
    //
    // stage 1:
    //   butterfly size = 4
    //
    // ...
    //
    // stage 5:
    //   butterfly size = 64
    // ============================================================

    task automatic do_stage;

        input integer stage_number;

        integer half_size;
        integer step_size;
        integer tw_step;

        integer group;
        integer k;

        integer i0;
        integer i1;
        integer tw_idx;

        reg signed [DATA_W-1:0] ar;
        reg signed [DATA_W-1:0] ai;

        reg signed [DATA_W-1:0] br;
        reg signed [DATA_W-1:0] bi;

        reg signed [TW_W-1:0] wr;
        reg signed [TW_W-1:0] wi;

        // Product width:
        // DATA_W + TW_W = 48 bit for 32x16

        reg signed [DATA_W+TW_W-1:0] p_rr;
        reg signed [DATA_W+TW_W-1:0] p_ii;
        reg signed [DATA_W+TW_W-1:0] p_ri;
        reg signed [DATA_W+TW_W-1:0] p_ir;

        reg signed [DATA_W+TW_W-1:0] temp_real;
        reg signed [DATA_W+TW_W-1:0] temp_imag;

        // Explicitly reduced back to DATA_W
        reg signed [DATA_W-1:0] vr;
        reg signed [DATA_W-1:0] vi;

        reg signed [DATA_W-1:0] sum_real;
        reg signed [DATA_W-1:0] sum_imag;

        reg signed [DATA_W-1:0] diff_real;
        reg signed [DATA_W-1:0] diff_imag;

        begin

            // ----------------------------------------------------
            // FFT parameters
            // ----------------------------------------------------

            half_size = 1 << stage_number;
            step_size = half_size << 1;
            tw_step   = 64 / step_size;


            // ----------------------------------------------------
            // 32 butterflies per stage
            // ----------------------------------------------------

            for (group = 0;
                 group < (64 / step_size);
                 group = group + 1) begin

                for (k = 0;
                     k < half_size;
                     k = k + 1) begin

                    // Butterfly input addresses

                    i0 = group * step_size + k;
                    i1 = i0 + half_size;

                    // Twiddle index

                    tw_idx = k * tw_step;


                    // ------------------------------------------------
                    // Read input
                    // ------------------------------------------------

                    ar = real_mem[i0];
                    ai = imag_mem[i0];

                    br = real_mem[i1];
                    bi = imag_mem[i1];


                    // ------------------------------------------------
                    // Read twiddle
                    // ------------------------------------------------

                    wr = tw_real[tw_idx];
                    wi = tw_imag[tw_idx];


                    // ------------------------------------------------
                    // Complex multiplication
                    //
                    // (br + jbi)(wr + jwi)
                    //
                    // real = br*wr - bi*wi
                    // imag = br*wi + bi*wr
                    // ------------------------------------------------

                    p_rr = br * wr;
                    p_ii = bi * wi;

                    p_ri = br * wi;
                    p_ir = bi * wr;

                    temp_real = (p_rr - p_ii) >>> 15;
                    temp_imag = (p_ri + p_ir) >>> 15;


                    // ------------------------------------------------
                    // Explicit 32-bit conversion
                    //
                    // Prevents Verilator width warnings.
                    // ------------------------------------------------

                    vr = temp_real[DATA_W-1:0];
                    vi = temp_imag[DATA_W-1:0];


                    // ------------------------------------------------
                    // Radix-2 butterfly
                    //
                    // X0 = A + B
                    // X1 = A - B
                    // ------------------------------------------------

                    sum_real  = ar + vr;
                    sum_imag  = ai + vi;

                    diff_real = ar - vr;
                    diff_imag = ai - vi;


                    // ------------------------------------------------
                    // Write butterfly result
                    // ------------------------------------------------

                    real_mem[i0] <= sum_real;
                    imag_mem[i0] <= sum_imag;

                    real_mem[i1] <= diff_real;
                    imag_mem[i1] <= diff_imag;

                end

            end

        end

    endtask


    // ============================================================
    // FSM
    // ============================================================

    localparam STATE_IDLE   = 4'd0;
    localparam STATE_LOAD   = 4'd1;
    localparam STATE_STAGE0 = 4'd2;
    localparam STATE_STAGE1 = 4'd3;
    localparam STATE_STAGE2 = 4'd4;
    localparam STATE_STAGE3 = 4'd5;
    localparam STATE_STAGE4 = 4'd6;
    localparam STATE_STAGE5 = 4'd7;
    localparam STATE_OUTPUT = 4'd8;
    localparam STATE_DONE   = 4'd9;

    reg [3:0] state;

    integer n;

    reg [5:0] load_index;


    // ============================================================
    // MAIN FSM
    // ============================================================

    always @(posedge clk) begin

        if (rst) begin

            state <= STATE_IDLE;
            done  <= 1'b0;

            load_index <= 6'd0;

            for (n = 0; n < 64; n = n + 1) begin

                real_mem[n] <= '0;
                imag_mem[n] <= '0;

                out_real[n] <= '0;
                out_imag[n] <= '0;

            end

        end
        else begin

            case (state)

                // ==================================================
                // IDLE
                // ==================================================

                STATE_IDLE: begin

                    done <= 1'b0;

                    if (start) begin
                        state <= STATE_LOAD;
                    end

                end


                // ==================================================
                // LOAD
                //
                // Input -> bit reversed memory
                // ==================================================

                STATE_LOAD: begin

    for (n = 0; n < 64; n = n + 1) begin

        real_mem[bit_reverse(n[5:0])]
            <= in_real[n];

        imag_mem[bit_reverse(n[5:0])]
            <= in_imag[n];

    end

    state <= STATE_STAGE0;

end


                // ==================================================
                // STAGE 0
                // ==================================================

                STATE_STAGE0: begin

                    do_stage(0);

                    state <= STATE_STAGE1;

                end


                // ==================================================
                // STAGE 1
                // ==================================================

                STATE_STAGE1: begin

                    do_stage(1);

                    state <= STATE_STAGE2;

                end


                // ==================================================
                // STAGE 2
                // ==================================================

                STATE_STAGE2: begin

                    do_stage(2);

                    state <= STATE_STAGE3;

                end


                // ==================================================
                // STAGE 3
                // ==================================================

                STATE_STAGE3: begin

                    do_stage(3);

                    state <= STATE_STAGE4;

                end


                // ==================================================
                // STAGE 4
                // ==================================================

                STATE_STAGE4: begin

                    do_stage(4);

                    state <= STATE_STAGE5;

                end


                // ==================================================
                // STAGE 5
                // ==================================================

                STATE_STAGE5: begin

                    do_stage(5);

                    state <= STATE_OUTPUT;

                end


                // ==================================================
                // OUTPUT
                //
                // Separate state is important:
                //
                // STAGE5 writes real_mem/imag_mem using NBA.
                // Therefore output must be copied on the NEXT clock.
                // ==================================================

                STATE_OUTPUT: begin

                    for (n = 0; n < 64; n = n + 1) begin

                        out_real[n] <= real_mem[n];
                        out_imag[n] <= imag_mem[n];

                    end

                    state <= STATE_DONE;

                end


                // ==================================================
                // DONE
                // ==================================================

                STATE_DONE: begin

                    done <= 1'b1;

                    state <= STATE_IDLE;

                end


                // ==================================================
                // DEFAULT
                // ==================================================

                default: begin

                    state <= STATE_IDLE;
                    done  <= 1'b0;

                end

            endcase

        end

    end

endmodule

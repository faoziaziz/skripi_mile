`timescale 1ns/1ps

module fft8 (
    input  wire clk,
    input  wire reset,
    input  wire start,

    input  wire signed [15:0] x0,
    input  wire signed [15:0] x1,
    input  wire signed [15:0] x2,
    input  wire signed [15:0] x3,
    input  wire signed [15:0] x4,
    input  wire signed [15:0] x5,
    input  wire signed [15:0] x6,
    input  wire signed [15:0] x7,

    output reg signed [31:0] y0_re,
    output reg signed [31:0] y1_re,
    output reg signed [31:0] y2_re,
    output reg signed [31:0] y3_re,
    output reg signed [31:0] y4_re,
    output reg signed [31:0] y5_re,
    output reg signed [31:0] y6_re,
    output reg signed [31:0] y7_re,

    output reg signed [31:0] y0_im,
    output reg signed [31:0] y1_im,
    output reg signed [31:0] y2_im,
    output reg signed [31:0] y3_im,
    output reg signed [31:0] y4_im,
    output reg signed [31:0] y5_im,
    output reg signed [31:0] y6_im,
    output reg signed [31:0] y7_im,

    output reg done
);

    // =========================================================
    // FSM
    // =========================================================

    localparam IDLE   = 3'd0;
    localparam LOAD   = 3'd1;
    localparam STAGE1 = 3'd2;
    localparam STAGE2 = 3'd3;
    localparam STAGE3 = 3'd4;
    localparam OUTPUT = 3'd5;

    reg [2:0] state;


    // =========================================================
    // FFT stage memories
    // =========================================================

    reg signed [31:0] s0_re [0:7];
    reg signed [31:0] s0_im [0:7];

    reg signed [31:0] s1_re [0:7];
    reg signed [31:0] s1_im [0:7];

    reg signed [31:0] s2_re [0:7];
    reg signed [31:0] s2_im [0:7];

    reg signed [31:0] s3_re [0:7];
    reg signed [31:0] s3_im [0:7];


    // =========================================================
    // Twiddle factors Q1.15
    // =========================================================

    localparam signed [15:0] W1_RE = 16'sd23170;
    localparam signed [15:0] W1_IM = -16'sd23170;

    localparam signed [15:0] W2_RE = 16'sd0;
    localparam signed [15:0] W2_IM = -16'sd32767;

    localparam signed [15:0] W3_RE = -16'sd23170;
    localparam signed [15:0] W3_IM = -16'sd23170;


    // =========================================================
    // Temporary multiplication variables
    // =========================================================

    reg signed [63:0] mult_re;
    reg signed [63:0] mult_im;

    reg signed [31:0] tw_re;
    reg signed [31:0] tw_im;


    integer i;


    // =========================================================
    // Main FSM
    // =========================================================

    always @(posedge clk) begin

        if (reset) begin

            state <= IDLE;
            done  <= 1'b0;

            y0_re <= 0;
            y1_re <= 0;
            y2_re <= 0;
            y3_re <= 0;
            y4_re <= 0;
            y5_re <= 0;
            y6_re <= 0;
            y7_re <= 0;

            y0_im <= 0;
            y1_im <= 0;
            y2_im <= 0;
            y3_im <= 0;
            y4_im <= 0;
            y5_im <= 0;
            y6_im <= 0;
            y7_im <= 0;

            for (i = 0; i < 8; i = i + 1) begin

                s0_re[i] <= 0;
                s0_im[i] <= 0;

                s1_re[i] <= 0;
                s1_im[i] <= 0;

                s2_re[i] <= 0;
                s2_im[i] <= 0;

                s3_re[i] <= 0;
                s3_im[i] <= 0;

            end

        end else begin

            done <= 1'b0;

            case (state)

                // =================================================
                // IDLE
                // =================================================

                IDLE: begin

                    if (start)
                        state <= LOAD;

                end


                // =================================================
                // LOAD + BIT REVERSE
                //
                // Natural input:
                //
                // x0 x1 x2 x3 x4 x5 x6 x7
                //
                // Bit reversed:
                //
                // x0 x4 x2 x6 x1 x5 x3 x7
                // =================================================

                LOAD: begin

                    s0_re[0] <= {{16{x0[15]}}, x0};
s0_re[1] <= {{16{x4[15]}}, x4};
s0_re[2] <= {{16{x2[15]}}, x2};
s0_re[3] <= {{16{x6[15]}}, x6};
s0_re[4] <= {{16{x1[15]}}, x1};
s0_re[5] <= {{16{x5[15]}}, x5};
s0_re[6] <= {{16{x3[15]}}, x3};
s0_re[7] <= {{16{x7[15]}}, x7};

                    s0_im[0] <= 0;
                    s0_im[1] <= 0;
                    s0_im[2] <= 0;
                    s0_im[3] <= 0;
                    s0_im[4] <= 0;
                    s0_im[5] <= 0;
                    s0_im[6] <= 0;
                    s0_im[7] <= 0;

                    state <= STAGE1;

                end


                // =================================================
                // STAGE 1
                //
                // 2-point butterflies
                // =================================================

                STAGE1: begin

                    // butterfly 0
                    s1_re[0] <= s0_re[0] + s0_re[1];
                    s1_im[0] <= s0_im[0] + s0_im[1];

                    s1_re[1] <= s0_re[0] - s0_re[1];
                    s1_im[1] <= s0_im[0] - s0_im[1];


                    // butterfly 1
                    s1_re[2] <= s0_re[2] + s0_re[3];
                    s1_im[2] <= s0_im[2] + s0_im[3];

                    s1_re[3] <= s0_re[2] - s0_re[3];
                    s1_im[3] <= s0_im[2] - s0_im[3];


                    // butterfly 2
                    s1_re[4] <= s0_re[4] + s0_re[5];
                    s1_im[4] <= s0_im[4] + s0_im[5];

                    s1_re[5] <= s0_re[4] - s0_re[5];
                    s1_im[5] <= s0_im[4] - s0_im[5];


                    // butterfly 3
                    s1_re[6] <= s0_re[6] + s0_re[7];
                    s1_im[6] <= s0_im[6] + s0_im[7];

                    s1_re[7] <= s0_re[6] - s0_re[7];
                    s1_im[7] <= s0_im[6] - s0_im[7];

                    state <= STAGE2;

                end


                // =================================================
                // STAGE 2
                //
                // 4-point butterflies
                // =================================================

                STAGE2: begin

                    // ---------------------------------------------
                    // First 4-point FFT
                    // ---------------------------------------------

                    // k = 0
                    s2_re[0] <= s1_re[0] + s1_re[2];
                    s2_im[0] <= s1_im[0] + s1_im[2];

                    s2_re[2] <= s1_re[0] - s1_re[2];
                    s2_im[2] <= s1_im[0] - s1_im[2];


                    // k = 1
                    // Multiply by -j
                    s2_re[1] <= s1_re[1] + s1_im[3];
                    s2_im[1] <= s1_im[1] - s1_re[3];

                    s2_re[3] <= s1_re[1] - s1_im[3];
                    s2_im[3] <= s1_im[1] + s1_re[3];


                    // ---------------------------------------------
                    // Second 4-point FFT
                    // ---------------------------------------------

                    s2_re[4] <= s1_re[4] + s1_re[6];
                    s2_im[4] <= s1_im[4] + s1_im[6];

                    s2_re[6] <= s1_re[4] - s1_re[6];
                    s2_im[6] <= s1_im[4] - s1_im[6];


                    s2_re[5] <= s1_re[5] + s1_im[7];
                    s2_im[5] <= s1_im[5] - s1_re[7];

                    s2_re[7] <= s1_re[5] - s1_im[7];
                    s2_im[7] <= s1_im[5] + s1_re[7];

                    state <= STAGE3;

                end


                // =================================================
                // STAGE 3
                //
                // 8-point FFT
                // =================================================

                STAGE3: begin

                    // ---------------------------------------------
                    // k = 0
                    // W8^0 = 1
                    // ---------------------------------------------

                    s3_re[0] <= s2_re[0] + s2_re[4];
                    s3_im[0] <= s2_im[0] + s2_im[4];

                    s3_re[4] <= s2_re[0] - s2_re[4];
                    s3_im[4] <= s2_im[0] - s2_im[4];


                    // ---------------------------------------------
                    // k = 1
                    // W8^1 = 0.707 - j0.707
                    // ---------------------------------------------

                    mult_re =
                        (s2_re[5] * W1_RE) -
                        (s2_im[5] * W1_IM);

                    mult_im =
                        (s2_re[5] * W1_IM) +
                        (s2_im[5] * W1_RE);

                   tw_re = $signed(mult_re[46:15]);
tw_im = $signed(mult_im[46:15]);

                    s3_re[1] <= s2_re[1] + tw_re;
                    s3_im[1] <= s2_im[1] + tw_im;

                    s3_re[5] <= s2_re[1] - tw_re;
                    s3_im[5] <= s2_im[1] - tw_im;


                    // ---------------------------------------------
                    // k = 2
                    // W8^2 = -j
                    // ---------------------------------------------

                    tw_re = s2_im[6];
                    tw_im = -s2_re[6];

                    s3_re[2] <= s2_re[2] + tw_re;
                    s3_im[2] <= s2_im[2] + tw_im;

                    s3_re[6] <= s2_re[2] - tw_re;
                    s3_im[6] <= s2_im[2] - tw_im;


                    // ---------------------------------------------
                    // k = 3
                    // W8^3 = -0.707 - j0.707
                    // ---------------------------------------------

                    mult_re =
                        (s2_re[7] * W3_RE) -
                        (s2_im[7] * W3_IM);

                    mult_im =
                        (s2_re[7] * W3_IM) +
                        (s2_im[7] * W3_RE);

                   tw_re = $signed(mult_re[46:15]);
tw_im = $signed(mult_im[46:15]);

                    s3_re[3] <= s2_re[3] + tw_re;
                    s3_im[3] <= s2_im[3] + tw_im;

                    s3_re[7] <= s2_re[3] - tw_re;
                    s3_im[7] <= s2_im[3] - tw_im;

                    state <= OUTPUT;

                end


                // =================================================
                // OUTPUT
                // =================================================

                OUTPUT: begin

                    y0_re <= s3_re[0];
                    y1_re <= s3_re[1];
                    y2_re <= s3_re[2];
                    y3_re <= s3_re[3];
                    y4_re <= s3_re[4];
                    y5_re <= s3_re[5];
                    y6_re <= s3_re[6];
                    y7_re <= s3_re[7];

                    y0_im <= s3_im[0];
                    y1_im <= s3_im[1];
                    y2_im <= s3_im[2];
                    y3_im <= s3_im[3];
                    y4_im <= s3_im[4];
                    y5_im <= s3_im[5];
                    y6_im <= s3_im[6];
                    y7_im <= s3_im[7];

                    done <= 1'b1;

                    state <= IDLE;

                end


                default: begin
                    state <= IDLE;
                end

            endcase

        end

    end

endmodule

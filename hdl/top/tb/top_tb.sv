// top_tb.sv -- Verilator-compatible testbench for top module
// Compiled with: verilator --binary -sv --top-module top_tb --timing

`timescale 1ns / 1ps

module top_tb;

    logic       clk;
    logic       rst_n;
    logic [3:0] led;

    top dut (
        .clk   (clk),
        .rst_n (rst_n),
        .led   (led)
    );

    // 100 MHz clock (10 ns period)
    initial clk = 1'b0;
    always #5 clk = ~clk;

    // Waveform dump (active when compiled with --trace)
    initial begin
        $dumpfile("top_tb.vcd");
        $dumpvars(0, top_tb);
    end

    // Stimulus
    initial begin
        $display("=== top_tb: simulation start ===");

        // Assert reset
        rst_n = 1'b0;
        repeat (10) @(posedge clk);

        // Release reset
        rst_n = 1'b1;
        $display("[%0t] Reset released", $time);

        // Verify LED state after reset
        @(posedge clk);
        assert (led == 4'b0001)
            else $error("[%0t] Expected led=0001 after reset, got %b", $time, led);

        // Run for a number of cycles
        repeat (200) @(posedge clk);

        $display("[%0t] LED state: %b", $time, led);
        $display("=== top_tb: simulation end ===");
        $finish;
    end

    // Timeout watchdog
    initial begin
        #10_000_000;
        $display("ERROR: simulation timed out");
        $finish;
    end

endmodule

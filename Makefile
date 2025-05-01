sources = virtual_taps/virtual_tap_bridge.sv \
					virtual_taps/virtual_taps.sv\
					virtual_taps/virtual_tb.sv\
					single_tap/tap_top.sv

top = virtual_tb


# sources = clk_gen/top.sv clk_gen/top_tb.sv
# top = top_tb

all:
	make verilate
	make simulate


verilate:
	verilator --trace --binary ${sources} --top-module ${top}

simulate:
	./obj_dir/V${top}


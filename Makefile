rtl_sources = rtl/virtual_tap_bridge.sv\
	    				rtl/virtual_taps.sv\
			    		rtl/tap_top.sv 

tb_sources =	tb/virtual_tb.sv

top_module = virtual_tb


sources = ${rtl_sources} ${tb_sources} 

all:
	make verilate
	make simulate

verilate:
	verilator --trace --binary ${sources} --top-module ${top_module}

simulate:
	./obj_dir/V${top_module}

wave:
	gtkwave wave.vcd &
	

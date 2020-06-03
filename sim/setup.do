force -freeze sim:/afe_fpga_a_tb/uut/BeamOffLength 12'h300 0
force -freeze sim:/afe_fpga_a_tb/uut/BeamOnLength 12'h300 0
force -freeze sim:/afe_fpga_a_tb/uut/ADCSmplCntReg 10'd80 0
#set StdArithNoWarnings 1
#set NumericStdNoWarnings 1
run 3.1 us
force -freeze sim:/afe_fpga_a_tb/uut/TrigReq 0 0

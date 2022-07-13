onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -group {Negative Signals} -color Gray30 -itemcolor Gray30 /afe_fpga_a_tb/uut/SerDesInN
add wave -noupdate -group {Negative Signals} -color Blue -itemcolor Blue /afe_fpga_a_tb/ClkB_N
add wave -noupdate -group {Negative Signals} -color Blue -itemcolor Blue /afe_fpga_a_tb/VXO_N
add wave -noupdate -group {Negative Signals} -color Gray30 -itemcolor Gray30 /afe_fpga_a_tb/uut/AFEDat0_N
add wave -noupdate -group {Negative Signals} -color Gray30 -itemcolor Gray30 /afe_fpga_a_tb/uut/AFEDat1_N
add wave -noupdate -group {Input uC} /afe_fpga_a_tb/CpldRst
add wave -noupdate -group {Input uC} /afe_fpga_a_tb/CpldCS
add wave -noupdate -group {Input uC} /afe_fpga_a_tb/uCRd
add wave -noupdate -group {Input uC} /afe_fpga_a_tb/uCWr
add wave -noupdate -group {Input uC} /afe_fpga_a_tb/uCA
add wave -noupdate -group {Input uC} /afe_fpga_a_tb/GA
add wave -noupdate -group {Input uC} /afe_fpga_a_tb/uCD
add wave -noupdate -group {Input Clocks} -color Orange -itemcolor Orange /afe_fpga_a_tb/ClkB_P
add wave -noupdate -group {Input Clocks} -color Orange -itemcolor Orange /afe_fpga_a_tb/VXO_P
add wave -noupdate -group {TB AFE Sim} /afe_fpga_a_tb/AFEPDn
add wave -noupdate -group {TB AFE Sim} /afe_fpga_a_tb/AFECS
add wave -noupdate -group {TB AFE Sim} /afe_fpga_a_tb/AFEClk_P
add wave -noupdate -group {TB AFE Sim} /afe_fpga_a_tb/AFEClk_N
add wave -noupdate -group {TB AFE Sim} /afe_fpga_a_tb/AFESClk
add wave -noupdate -group {TB AFE Sim} /afe_fpga_a_tb/AFESDI
add wave -noupdate -group {TB AFE Sim} /afe_fpga_a_tb/AFERst
add wave -noupdate -group {Input AFE Data} /afe_fpga_a_tb/AFESDO
add wave -noupdate -group {Input AFE Data} /afe_fpga_a_tb/AFEDCO_P
add wave -noupdate -group {Input AFE Data} /afe_fpga_a_tb/SyncClock
add wave -noupdate -group {Input AFE Data} /afe_fpga_a_tb/AFEDCO_N
add wave -noupdate -group {Input AFE Data} /afe_fpga_a_tb/AFEFR_P
add wave -noupdate -group {Input AFE Data} /afe_fpga_a_tb/AFEFR_N
add wave -noupdate -group {Input AFE Data} /afe_fpga_a_tb/AFEDat0_P
add wave -noupdate -group {Input AFE Data} /afe_fpga_a_tb/AFEDat0_N
add wave -noupdate -group {Input AFE Data} /afe_fpga_a_tb/AFEDat1_P
add wave -noupdate -group {Input AFE Data} /afe_fpga_a_tb/AFEDat1_N
add wave -noupdate -group {Input AFE Data} /afe_fpga_a_tb/uut/AFEDat0_P
add wave -noupdate -group {Input AFE Data} /afe_fpga_a_tb/uut/AFEDat1_P
add wave -noupdate -group {Input AFE Data} /afe_fpga_a_tb/uut/SerDesInP
add wave -noupdate -group {Input AFE Data} /afe_fpga_a_tb/uut/SerdesRst
add wave -noupdate -group TB_Trigger_FM_Transmit /afe_fpga_a_tb/TxReq
add wave -noupdate -group TB_Trigger_FM_Transmit -radix decimal /afe_fpga_a_tb/uBunchWidth
add wave -noupdate -group TB_Trigger_FM_Transmit /afe_fpga_a_tb/Clk53
add wave -noupdate -group TB_Trigger_FM_Transmit /afe_fpga_a_tb/startTriggers
add wave -noupdate -expand -group AFE_Pipeline -color Orange -itemcolor Orange /afe_fpga_a_tb/uut/RxOutClk
add wave -noupdate -expand -group AFE_Pipeline /afe_fpga_a_tb/uut/FrDat
add wave -noupdate -expand -group AFE_Pipeline -subitemconfig {/afe_fpga_a_tb/uut/Ins(0) -expand} /afe_fpga_a_tb/uut/Ins
add wave -noupdate -expand -group AFE_Pipeline -subitemconfig {/afe_fpga_a_tb/uut/Mids(0) -expand} /afe_fpga_a_tb/uut/Mids
add wave -noupdate -expand -group AFE_Pipeline /afe_fpga_a_tb/uut/Outs
add wave -noupdate -expand -group AFE_Pipeline /afe_fpga_a_tb/uut/PipeWrt
add wave -noupdate -color Orange -itemcolor Orange /afe_fpga_a_tb/uut/SysClk
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/SlfTrgEn
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/Input_Seqs(0)(0)
add wave -noupdate -expand -group Input_Buffering -subitemconfig {/afe_fpga_a_tb/uut/Input_Seqs(0) -expand} /afe_fpga_a_tb/uut/Input_Seqs
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/Diff_Reg
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/SlfTrgEdge
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/Ins(0)(0)
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/Outs(0)(0)
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/Mids(0)(0)
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/TmgSrcSel
add wave -noupdate -expand -group Input_Buffering -expand /afe_fpga_a_tb/uut/RxOut
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/BeamOnLength
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/BeamOffLength
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/Rx1Dat
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/BeamOn
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/TrigReq
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/TrigReqD
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/GateWidth
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/uBunchOffset
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/GateReq
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/DoneDly
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/ADCSmplGate
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/ADCSmplCntr
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/ADCSmplCntReg
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/Ped_Reg
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/Buff_Wrt_Ptr
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/AFE_Wrt
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/MaskReg
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/Buff_In
add wave -noupdate /afe_fpga_a_tb/uut/GenOnePerAFE(1)/Pipeline/U0/native_mem_module/mem_module/line__3384/memory
add wave -noupdate /afe_fpga_a_tb/uut/GenOnePerAFE(0)/Pipeline/U0/native_mem_module/mem_module/line__3384/memory
add wave -noupdate -label AFE_buff_0_0 /afe_fpga_a_tb/uut/Gen_FIFOs_Per_AFE(0)/Gen_FIFOs_Per_Chan(0)/AFEBuff/U0/native_mem_module/mem_module/line__3384/memory
add wave -noupdate -label AFE_Buff_0_1 /afe_fpga_a_tb/uut/Gen_FIFOs_Per_AFE(0)/Gen_FIFOs_Per_Chan(1)/AFEBuff/U0/native_mem_module/mem_module/line__3384/memory
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {25709375 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 389
configure wave -valuecolwidth 204
configure wave -justifyvalue left
configure wave -signalnamewidth 0
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ns
update
WaveRestoreZoom {18304410 ps} {30615558 ps}

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
add wave -noupdate -expand -group AFE_Pipeline /afe_fpga_a_tb/uut/Ins
add wave -noupdate -expand -group AFE_Pipeline /afe_fpga_a_tb/uut/Mids
add wave -noupdate -expand -group AFE_Pipeline /afe_fpga_a_tb/uut/Outs
add wave -noupdate -expand -group AFE_Pipeline /afe_fpga_a_tb/uut/PipeWrt
add wave -noupdate -color Orange -itemcolor Orange /afe_fpga_a_tb/uut/SysClk
add wave -noupdate -group Old_Off_Beam_Logic /afe_fpga_a_tb/uut/BeamOffLength
add wave -noupdate -group Old_Off_Beam_Logic /afe_fpga_a_tb/uut/Rx1Dat
add wave -noupdate -group Old_Off_Beam_Logic /afe_fpga_a_tb/uut/GateWidth
add wave -noupdate -group Old_Off_Beam_Logic /afe_fpga_a_tb/uut/uBunchOffset
add wave -noupdate -group Old_Off_Beam_Logic /afe_fpga_a_tb/uut/GateReq
add wave -noupdate -group Old_Off_Beam_Logic /afe_fpga_a_tb/uut/DoneDly
add wave -noupdate -group Old_Off_Beam_Logic /afe_fpga_a_tb/uut/ADCSmplGate
add wave -noupdate -group Old_Off_Beam_Logic /afe_fpga_a_tb/uut/ADCSmplCntr
add wave -noupdate -group Old_Off_Beam_Logic /afe_fpga_a_tb/uut/ADCSmplCntReg
add wave -noupdate -group Old_Off_Beam_Logic /afe_fpga_a_tb/uut/Ped_Reg
add wave -noupdate -group Old_Off_Beam_Logic /afe_fpga_a_tb/uut/Buff_Wrt_Ptr
add wave -noupdate -group Old_Off_Beam_Logic /afe_fpga_a_tb/uut/AFE_Wrt
add wave -noupdate -group Old_Off_Beam_Logic /afe_fpga_a_tb/uut/MaskReg
add wave -noupdate -group Old_Off_Beam_Logic /afe_fpga_a_tb/uut/Buff_In
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/SlfTrgEn
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/Input_Seqs(0)(0)
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/Input_Seqs
add wave -noupdate -expand -group Input_Buffering -radix sfixed /afe_fpga_a_tb/uut/Diff_Reg
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/IntTrgThresh
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/SlfTrgEdge
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/Ins(0)(0)
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/Outs(0)(0)
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/Mids(0)(0)
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/TmgSrcSel
add wave -noupdate -expand -group Input_Buffering /afe_fpga_a_tb/uut/RxOut
add wave -noupdate -expand -group OnBeam_Readout -color Orange -itemcolor Orange /afe_fpga_a_tb/uut/SysClk
add wave -noupdate -expand -group OnBeam_Readout -color Orange -itemcolor Orange /afe_fpga_a_tb/uut/RxOutClk
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeamTrigReq
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeamTrigAck
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/MaskReg
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeamLength
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeamGateWidth
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeamuBunchOffset
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeamDoneDelay
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeam_out
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeam_rd_en
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeam_rd_or
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeam_clr_en
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeam_wr_en
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeam_full
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeam_overflow
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeam_empty
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeam_rd_undercount
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeam_wr_overcount
add wave -noupdate -expand -group OnBeam_Readout -radix sfixed /afe_fpga_a_tb/uut/IntTrgThresh
add wave -noupdate -expand -group OnBeam_Readout -radix sfixed /afe_fpga_a_tb/uut/Diff_Reg(0)(0)
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeamPulseFound
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/OnBeam
add wave -noupdate -expand -group OnBeam_Readout /afe_fpga_a_tb/uut/CombinedOnBeamOverflow
add wave -noupdate /afe_fpga_a_tb/uut/DDRAddrOut
add wave -noupdate /afe_fpga_a_tb/uut/DDRAddrRd
add wave -noupdate /afe_fpga_a_tb/uut/DDRAddrFull
add wave -noupdate /afe_fpga_a_tb/uut/DDRAddrEmpty
add wave -noupdate /afe_fpga_a_tb/uut/ClearChannelReq
add wave -noupdate /afe_fpga_a_tb/uut/ClearChannelActive
add wave -noupdate /afe_fpga_a_tb/uut/ClearChannelCounter
add wave -noupdate -expand -group uBunchBuff /afe_fpga_a_tb/uut/uBunchOffset
add wave -noupdate -expand -group uBunchBuff /afe_fpga_a_tb/uut/OnBeamuBunchOffset
add wave -noupdate -expand -group uBunchBuff /afe_fpga_a_tb/uut/uBunchBuffOut
add wave -noupdate -expand -group uBunchBuff /afe_fpga_a_tb/uut/uBunchBuffDat
add wave -noupdate -expand -group uBunchBuff /afe_fpga_a_tb/uut/SaveduBunch
add wave -noupdate -expand -group uBunchBuff /afe_fpga_a_tb/uut/uBunch
add wave -noupdate -expand -group uBunchBuff /afe_fpga_a_tb/uut/uBunchGuard
add wave -noupdate -expand -group uBunchBuff /afe_fpga_a_tb/uut/uBunchWrt
add wave -noupdate -expand -group uBunchBuff /afe_fpga_a_tb/uut/uBunchRd
add wave -noupdate -expand -group uBunchBuff /afe_fpga_a_tb/uut/uBunchBuffEmpty
add wave -noupdate -expand -group uBunchBuff /afe_fpga_a_tb/uut/uBunchBuffFull
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EventWdCnt
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/MaxEvBuffSize
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvBuffStatFIFO_Full
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvBuffStatFIFO_Empty
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvenWrtDone
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvBuffStat_rden
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvBuffStatFIFO_Out
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvBuffStatFIFO_In
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvOvf
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/Dev_Sel
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/NextEvAddr
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/Even_Odd
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/Event_Builder
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/ReadoutChannelCounter
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/NumReadoutChannels
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/ControllerNo
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/PortNo
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/AFE_Num
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/Chan_Num
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvBuffWrtIndex
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvWdCnt
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvBuffWrt
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvBuffRd
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvBuffEmpty
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvBuffFull
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvBuffDat
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvBufffOut
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EvBuffWdsUsed
add wave -noupdate -expand -group EvBuff /afe_fpga_a_tb/uut/EventBuff/U0/gconvfifo/inst_conv_fifo/gen_ss/fgss/memory
add wave -noupdate -expand -group DDR /afe_fpga_a_tb/uut/DDR_Write_Seq
add wave -noupdate -expand -group DDR /afe_fpga_a_tb/uut/DDRHoldoff
add wave -noupdate -expand -group DDR /afe_fpga_a_tb/uut/DDRAddrOut
add wave -noupdate -expand -group DDR /afe_fpga_a_tb/uut/DDRAddrRd
add wave -noupdate -expand -group DDR /afe_fpga_a_tb/uut/DDRAddrFull
add wave -noupdate -expand -group DDR /afe_fpga_a_tb/uut/DDRAddrEmpty
add wave -noupdate -expand -group DDR /afe_fpga_a_tb/uut/NextEvAddr
add wave -noupdate -expand -group DDR /afe_fpga_a_tb/uut/DDRRd_Mux
add wave -noupdate -expand -group DDR /afe_fpga_a_tb/uut/DDR_Reset
add wave -noupdate -expand -group DDR /afe_fpga_a_tb/uut/DDR_Rd_Cnt
add wave -noupdate -expand -group DDR /afe_fpga_a_tb/uut/DDRWrtSeqStat
add wave -noupdate -expand -group DDR /afe_fpga_a_tb/uut/DDRWrtCount
add wave -noupdate -expand -group DDR /afe_fpga_a_tb/uut/DDR_Read_Seq
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDCKE
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDWE
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDClk_P
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDClk_N
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDD
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDRzq
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDA
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/AFESDI
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/AFESDO
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDRdDat
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDWrtDat
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDWrtAd
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDWrtAdStage
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDRdAD
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDRdPtr
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDwr_en
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDrd_en
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDCalDn
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDRdCmdEn
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SD_RstO
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDwr_full
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDwr_empty
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDwr_error
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDrd_full
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDrd_empty
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDrd_overflow
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDrd_error
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDwr_underrun
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDwr_count
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDWrtCmd
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDRdCmd
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDcmd_empty
add wave -noupdate -expand -group {Mig Signals} /afe_fpga_a_tb/uut/SDcmd_full
add wave -noupdate /afe_fpga_a_tb/uut/GenOnePerAFE(1)/Pipeline/U0/native_mem_module/mem_module/line__3384/memory
add wave -noupdate /afe_fpga_a_tb/uut/GenOnePerAFE(0)/Pipeline/U0/native_mem_module/mem_module/line__3384/memory
add wave -noupdate -label AFE_buff_0_0 /afe_fpga_a_tb/uut/Gen_FIFOs_Per_AFE(0)/Gen_FIFOs_Per_Chan(0)/AFEBuff/U0/native_mem_module/mem_module/line__3384/memory
add wave -noupdate -label AFE_Buff_0_1 /afe_fpga_a_tb/uut/Gen_FIFOs_Per_AFE(0)/Gen_FIFOs_Per_Chan(1)/AFEBuff/U0/native_mem_module/mem_module/line__3384/memory
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {28770925 ps} 0}
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
WaveRestoreZoom {0 ps} {105 us}

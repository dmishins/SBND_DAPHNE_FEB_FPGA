

 
 
 




window new WaveWindow  -name  "Waves for BMG Example Design"
waveform  using  "Waves for BMG Example Design"

      waveform add -signals /DP_Ram_1kx16_tb/status
      waveform add -signals /DP_Ram_1kx16_tb/DP_Ram_1kx16_synth_inst/bmg_port/CLKA
      waveform add -signals /DP_Ram_1kx16_tb/DP_Ram_1kx16_synth_inst/bmg_port/ADDRA
      waveform add -signals /DP_Ram_1kx16_tb/DP_Ram_1kx16_synth_inst/bmg_port/DINA
      waveform add -signals /DP_Ram_1kx16_tb/DP_Ram_1kx16_synth_inst/bmg_port/WEA
      waveform add -signals /DP_Ram_1kx16_tb/DP_Ram_1kx16_synth_inst/bmg_port/CLKB
      waveform add -signals /DP_Ram_1kx16_tb/DP_Ram_1kx16_synth_inst/bmg_port/ADDRB
      waveform add -signals /DP_Ram_1kx16_tb/DP_Ram_1kx16_synth_inst/bmg_port/DOUTB

console submit -using simulator -wait no "run"

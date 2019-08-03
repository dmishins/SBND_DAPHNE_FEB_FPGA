##
## Core Generator Run Script, generator for Project Navigator checkversion command
##

proc findRtfPath { relativePath } {
   set xilenv ""
   if { [info exists ::env(XILINX) ] } {
      if { [info exists ::env(MYXILINX)] } {
         set xilenv [join [list $::env(MYXILINX) $::env(XILINX)] $::xilinx::path_sep ]
      } else {
         set xilenv $::env(XILINX)
      }
   }
   foreach path [ split $xilenv $::xilinx::path_sep ] {
      set fullPath [ file join $path $relativePath ]
      if { [ file exists $fullPath ] } {
         return $fullPath
      }
   }
   return ""
}

source [ findRtfPath "data/projnav/scripts/dpm_cgUtils.tcl" ]

set result [ run_cg_vcheck {/media/dmishins/MISHINS/FROM14CPU/Desktop/AFEDM/ipcore_dir/CMD_Fifo.xco /media/dmishins/MISHINS/FROM14CPU/Desktop/AFEDM/ipcore_dir/LPDDR_Ctrl.xco /media/dmishins/MISHINS/FROM14CPU/Desktop/AFEDM/ipcore_dir/AFE_DP_Pipeline.xco /media/dmishins/MISHINS/FROM14CPU/Desktop/AFEDM/ipcore_dir/DAC_Ram.xco /media/dmishins/MISHINS/FROM14CPU/Desktop/AFEDM/ipcore_dir/SysPLL.xco /media/dmishins/MISHINS/FROM14CPU/Desktop/AFEDM/ipcore_dir/Hist_Ram.xco /media/dmishins/MISHINS/FROM14CPU/Desktop/AFEDM/ipcore_dir/LVDSTxBuff.xco /media/dmishins/MISHINS/FROM14CPU/Desktop/AFEDM/ipcore_dir/SCFIFO_32x256.xco /media/dmishins/MISHINS/FROM14CPU/Desktop/AFEDM/ipcore_dir/DP_Ram_1kx16.xco /media/dmishins/MISHINS/FROM14CPU/Desktop/AFEDM/ipcore_dir/SCFIFO_1kx16.xco /media/dmishins/MISHINS/FROM14CPU/Desktop/AFEDM/ipcore_dir/FIFO_DC_32x1.xco /media/dmishins/MISHINS/FROM14CPU/Desktop/AFEDM/ipcore_dir/AFE_FRONT_Pipeline.xco} xc6slx25-3csg324 ]

if { $result == 0 } {
   puts "Core Generator checkversion command completed successfully."
} elseif { $result == 1 } {
   puts "Core Generator checkversion command failed."
} elseif { $result == 3 || $result == 4 } {
   # convert 'version check' result to real return range, bypassing any messages.
   set result [ expr $result - 3 ]
} else {
   puts "Core Generator checkversion cancelled."
}
exit $result

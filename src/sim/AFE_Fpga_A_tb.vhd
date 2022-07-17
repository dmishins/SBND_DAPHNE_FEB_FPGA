--------------------------------------------------------------------------------
-- Company: Fermilab
-- Engineer: Sten Hansen
--
-- Create Date:   17:58:32 11/11/2014
-- Design Name:   AFE_Fpga_A
-- Module Name:   C:/Experiments/mu2e/SiPMFE/FPGA/AFE_Fpga_A/AFE_Fpga_A_tb.vhd
-- Project Name:  AFE_Fpga_A
-- Target Device: XC6LX25-3csg324 
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: FEB_Fpga_A
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.

--------------------------------------------------------------------------------

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use work.Proj_defs.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
USE ieee.numeric_std.ALL;
 
library unisim;
use unisim.vcomponents.all;
 
ENTITY AFE_Fpga_A_tb IS
END AFE_Fpga_A_tb;
 
ARCHITECTURE behavior OF AFE_Fpga_A_tb IS 

-- Component Declaration for the Unit Under Test (UUT)

COMPONENT FEB_Fpga_A
 PORT(
-- 159.3 MHz VXO clock
	VXO_P,VXO_N,ClkB_P,ClkB_N,
-- microcontroller strobes
	CpldRst, CpldCS, uCRd, uCWr : in std_logic;
-- microcontroller data, address buses
	uCA : in AddrPins;
	uCD : inout std_logic_vector(15 downto 0);
-- Geographic address pins
	GA : in std_logic_vector(1 downto 0);
-- SDRAM pins
	SDCKE,LDM,UDM,RAS,CAS,SDWE : out std_logic;
	SDClk_P,SDClk_N : out  std_logic;
	SDD : inout std_logic_vector(15 downto 0);
	UDQS,LDQS,SDRzq : inout std_logic;
	SDA : out std_logic_vector(13 downto 0);
	BA : out std_logic_vector(1 downto 0);
-- AFE serial control lines
	AFEPDn : buffer std_logic_vector(1 downto 0);
	AFECS : buffer std_logic_vector(1 downto 0);
	AFESClk,AFESDI,AFERst : buffer std_logic;
	AFESDO : in std_logic;
-- AFE clock, framing lines
	AFEDCO_P,AFEDCO_N,AFEFR_P,AFEFR_N  : in std_logic_vector(1 downto 0);
-- AFE Data lines
	AFEDat0_P,AFEDat0_N,AFEDat1_P,AFEDat1_N : in std_logic_vector(7 downto 0);
-- AFE Input clock
	AFEClk_P,AFEClk_N : out std_logic_vector(1 downto 0);
-- Analog Mux address lines
	MuxEn : buffer std_logic_vector(3 downto 0); 
	Muxad : buffer std_logic_vector(1 downto 0);
-- LED pulser/Flash Gate
	Pulse : out std_logic;
-- LED/Flash Gate select line
	PulseSel : buffer std_logic;
-- Serial DAC control lines
	DACCS : buffer std_logic_vector(2 downto 0);
	DACClk,DACDat,DACLd : buffer std_logic;
-- Temperature sensor lines
	Temp : inout std_logic_vector(3 downto 0);
-- Chip dependent I/O functions
	A7,LVDSTX : buffer std_logic;
	GPI0_N,GPI0_P,GPI1 : in std_logic;
-- Debug port
	Debug : buffer std_logic_vector(10 downto 1));

END COMPONENT;

-----------------------Memory Simulator

   constant  C3_MEMCLK_PERIOD : integer    := 6250;
   constant C3_RST_ACT_LOW : integer := 0;
   constant C3_INPUT_CLK_TYPE : string := "DIFFERENTIAL";
   constant C3_CLK_PERIOD_NS   : real := 6277.0 / 1000.0;
   constant C3_TCYC_SYS        : real := C3_CLK_PERIOD_NS/2.0;
   constant C3_TCYC_SYS_DIV2   : time := C3_TCYC_SYS * 1 ns;
   constant C3_NUM_DQ_PINS        : integer := 16;
   constant C3_MEM_ADDR_WIDTH     : integer := 14;
   constant C3_MEM_BANKADDR_WIDTH : integer := 2;
   constant C3_MEM_ADDR_ORDER     : string := "BANK_ROW_COLUMN"; 
	constant C3_P0_MASK_SIZE : integer      := 4;
   constant C3_P0_DATA_PORT_SIZE : integer := 32;  
   constant C3_P1_MASK_SIZE   : integer    := 4;
   constant C3_P1_DATA_PORT_SIZE  : integer := 32;
   constant C3_CALIB_SOFT_IP      : string := "TRUE";
   constant C3_SIMULATION      : string := "TRUE";
   
    --
--	 	SDCKE,LDM,UDM,RAS,CAS,SDWE : out std_logic;
--		SDClk_P,SDClk_N : out  std_logic;
--		SDD : inout std_logic_vector(15 downto 0);
--		UDQS,LDQS,SDRzq : inout std_logic;
--		SDA : out std_logic_vector(13 downto 0);
--		BA : out std_logic_vector(1 downto 0);

    component lpddr_model_c3 is
    port (
      Clk     : in    std_logic;
      Clk_n   : in    std_logic;
      Cke     : in    std_logic;
      Cs_n    : in    std_logic;
      Ras_n   : in    std_logic;
      Cas_n   : in    std_logic;
      We_n    : in    std_logic;
      Dm      : inout std_logic_vector((C3_NUM_DQ_PINS/16) downto 0);
      Ba      : in    std_logic_vector((C3_MEM_BANKADDR_WIDTH - 1) downto 0);
      Addr    : in    std_logic_vector((C3_MEM_ADDR_WIDTH  - 1) downto 0);
      Dq      : inout std_logic_vector((C3_NUM_DQ_PINS - 1) downto 0);
      Dqs     : inout std_logic_vector((C3_NUM_DQ_PINS/16) downto 0)
      );
  end component;


-- ========================================================================== --
-- Signal Declarations                                                        --
-- ========================================================================== --


 			-- Clocks
   signal  c3_sys_clk     : std_logic := '0';
   signal  c3_sys_clk_p   : std_logic;
   signal  c3_sys_clk_n   : std_logic;
-- System Reset
   signal  c3_sys_rst   : std_logic := '0';
   signal  c3_sys_rst_i     : std_logic;
	signal RASn,CASn,SDWEn : std_logic;



-- Design-Top Port Map   
   signal mcb3_dram_a : std_logic_vector(C3_MEM_ADDR_WIDTH-1 downto 0);
   signal mcb3_dram_ba : std_logic_vector(C3_MEM_BANKADDR_WIDTH-1 downto 0);  

   signal  mcb3_dram_ck : std_logic;  
   signal  mcb3_dram_ck_n : std_logic;  
   signal  mcb3_dram_dq : std_logic_vector(C3_NUM_DQ_PINS-1 downto 0);   
   signal  mcb3_dram_dqs   : std_logic;    
   signal  mcb3_dram_dm    : std_logic;   
   signal  mcb3_dram_ras_n : std_logic;   
   signal  mcb3_dram_cas_n : std_logic;   
   signal  mcb3_dram_we_n  : std_logic;    
   signal  mcb3_dram_cke   : std_logic;   
       signal  calib_done                        : std_logic;  
   signal  error                             : std_logic;  


      signal  mcb3_dram_udqs   : std_logic;
   signal mcb3_dram_dqs_vector : std_logic_vector(1 downto 0);
      signal   mcb3_dram_udm :std_logic;     -- for X16 parts
   signal mcb3_dram_dm_vector : std_logic_vector(1 downto 0);
   
   
   signal mcb3_command               : std_logic_vector(2 downto 0);
   signal mcb3_enable1                : std_logic;
   signal mcb3_enable2              : std_logic;
   

   signal  rzq3     : std_logic;
	
	
	
	
------ DONE MEMORY SIMULATOR
--Inputs
	signal ClkB_P,ClkB_N : std_logic := '0';
   signal VXO_P : std_logic := '0';
   signal VXO_N : std_logic := '0';
   signal CpldRst : std_logic := '0';
   signal CpldCS : std_logic := '0';
   signal uCRd : std_logic := '0';
   signal uCWr : std_logic := '0';
   signal uCA : std_logic_vector(11 downto 0) := (others => '0');
   signal GA : std_logic_vector(1 downto 0) := (others => '0');
   signal AFESDO : std_logic := '0';
   signal AFEDCO_P : std_logic_vector(1 downto 0) := (others => '0');
   signal SyncClock : std_logic := '0';
   signal AFEDCO_N : std_logic_vector(1 downto 0) := (others => '0');
   signal AFEFR_P : std_logic_vector(1 downto 0) := (others => '0');
   signal AFEFR_N : std_logic_vector(1 downto 0) := (others => '0');
   signal AFEDat0_P : std_logic_vector(7 downto 0) := (others => '0');
   signal AFEDat0_N : std_logic_vector(7 downto 0) := (others => '0');
   signal AFEDat1_P : std_logic_vector(7 downto 0) := (others => '0');
   signal AFEDat1_N : std_logic_vector(7 downto 0) := (others => '0');
   signal GPI1,GPI0_N,GPI0_P : std_logic;
   signal A7 : std_logic;

	--BiDirs
   signal uCD : std_logic_vector(15 downto 0);
   signal SDD : std_logic_vector(15 downto 0);
   signal UDQS,LDQS,SDRzq,Trig : std_logic;
   signal Temp : std_logic_vector(3 downto 0);
 
 	--Outputs
   signal SDCKE,LDM,UDM,RAS,CAS,SDWE,SDClk_P,SDClk_N : std_logic;
   signal SDA : std_logic_vector(13 downto 0);
   signal BA : std_logic_vector(1 downto 0);
   signal AFEPDn,AFECS,AFEClk_P,AFEClk_N : std_logic_vector(1 downto 0);
   signal AFESClk,AFESDI,AFERst : std_logic;
   signal MuxEn : std_logic_vector(3 downto 0);
   signal Muxad : std_logic_vector(1 downto 0);
   signal Pulse,PulseSel : std_logic;
   signal DACCS : std_logic_vector(2 downto 0);
   signal DACClk,DACDat,DACLd : std_logic;
   signal Debug : std_logic_vector(10 downto 1);

-- user defined types

Type Seed_Array is Array(0 to 7) of std_logic_vector(23 downto 0);
    constant Seed0 : Seed_Array := (X"47A95B",X"246865",X"F73B46",X"7EC0C4",
											   X"A7D4F3",X"CAF367",X"96A262",X"34B491");
    constant Seed1 : Seed_Array := (X"4B759A",X"F44C29",X"16CAF2",X"30761F",
											   X"D22371",X"599FDE",X"629A5E",X"E4911B");

Constant FM_size : Integer := 48;
Type Word_FM_array is Array(0 to FM_size - 1) of std_logic_vector(15 downto 0);
Constant FM_Words : Word_FM_array := (x"8002",x"8002",x"957D",x"AEF0",
                                      x"9210",x"9A98",x"A654",x"9654",
												  x"9122",x"9344",x"9566",x"9788",
                                      x"ABCC",x"ADEE",x"9F00",x"8003",
												  x"1DED",x"8004",x"3AA9",x"8787",
												  x"1122",x"3344",x"5566",x"7788",
                                      x"09AA",x"0BCC",x"3DEE",x"FF00",
												  x"1DED",x"8004",x"3AA9",x"8787",
												  x"1122",x"3344",x"5566",x"7788",
                                      x"09AA",x"3DEE",x"FF00",x"8004",
												  x"1DED",x"2BCB",x"3AA9",x"8787",
                                      x"6565",x"4343",x"2121",x"8004");

Type TxReg_Array is Array(0 to 7) of std_logic_vector(11 downto 0);	
signal TxReg0,TxReg1 : TxReg_Array;

signal PULSECNT : std_logic_vector(2 downto 0):= (others => '0');
signal COUNT : std_logic_vector(7 downto 0):= (others => '0');

Type DDR_Tap_Array is Array(0 to 7) of std_logic_vector(3 downto 0);
signal DDR_Tap0,DDR_Tap1 : DDR_Tap_Array;

Type DDR_LSFR_Array is Array(0 to 7) of std_logic_vector(23 downto 0);
signal DDR_LSFR0,DDR_LSFR1 : DDR_LSFR_Array;

   -- Clock period definitions
	constant VXO_period : time := 6.25 ns; -- 6.277 ns;

signal iAFEFR : std_logic_vector(11 downto 0);
signal AFEDCODL : std_logic_vector(1 downto 0);

signal Gap_Count : std_logic_vector(3 downto 0);
signal BusTimer : std_logic_vector(4 downto 0);

signal IntDQSClk,iDQS,IntDCOClk,IntClr : std_logic;
signal BurstCount : std_logic_vector(3 downto 0);
signal DDR_LSFR : std_logic_vector(23 downto 0);
signal DDR_Tap : std_logic_vector(3 downto 0);
Type DDR_Rx is (Idle,WaitCS0,WaitCS1,WaitCS2,WaitCS3,EnableDQS,DisableDQS);
signal DDR_Rx_State : DDR_Rx;

signal BitCount : std_logic_vector(3 downto 0);
signal RdReg,FMTxData : std_logic_vector(15 downto 0);
signal FMWord : std_logic_vector(23 downto 0);
signal PresentAD : AddrPtr;
signal ResetHi,TxEn,Clk80,Clk53,TxReq,TxAck : std_logic;
signal uBunchWidth : std_logic_vector(15 downto 0);
signal Tx1_Out : TxOutRec;

Type FM_State is (Idle, SetEnable, WaitEn, ClrEn);
signal Tx_State : FM_State;

signal FM_Index : integer range 0 to FM_size;

signal uuCA : std_logic_vector(11 downto 0);

signal startTriggers: std_logic;
component FM_Tx is
	generic (Pwidth : positive);
		 port(clock,reset,Enable : in std_logic;
				Data : in std_logic_vector(Pwidth - 1 downto 0);
				Tx_Out : buffer TxOutRec);
end component;

BEGIN

--Instantiate Memory Model


-- ========================================================================== --
-- Memory model instances                                                     -- 
-- ========================================================================== --
	 RASn <= RAS;--not RAS;
	 CASn <= CAS;--not CAS;
	 SDWEn <= SDWE;--not SDWE;
	 
    mcb3_command <= (RASn & CASn & SDWEn);

    process(SDClk_P)
    begin
      if (rising_edge(SDClk_P)) then
        if (c3_sys_rst = '0') then
          mcb3_enable1   <= '0';
          mcb3_enable2 <= '0';
        elsif (mcb3_command = "100") then
          mcb3_enable2 <= '0';
        elsif (mcb3_command = "101") then
          mcb3_enable2 <= '1';
        else
          mcb3_enable2 <= mcb3_enable2;
        end if;
        mcb3_enable1     <= mcb3_enable2;
      end if;
    end process;

-----------------------------------------------------------------------------
--read
-----------------------------------------------------------------------------
    mcb3_dram_dqs_vector(1 downto 0)               <= (UDQS & LDQS)
                                                           when (mcb3_enable2 = '0' and mcb3_enable1 = '0')
							   else "ZZ";

-----------------------------------------------------------------------------
--write
-----------------------------------------------------------------------------
    mcb3_dram_dqs          <= mcb3_dram_dqs_vector(0)
                              when ( mcb3_enable1 = '1') else 'Z';

    mcb3_dram_udqs          <= mcb3_dram_dqs_vector(1)
                              when (mcb3_enable1 = '1') else 'Z';

   
   --	 	SDCKE,LDM,UDM,RAS,CAS,SDWE : out std_logic;
--		SDClk_P,SDClk_N : out  std_logic;
--		SDD : inout std_logic_vector(15 downto 0);
--		UDQS,LDQS,SDRzq : inout std_logic;
--		SDA : out std_logic_vector(13 downto 0);
--		BA : out std_logic_vector(1 downto 0);

 SDRzq <='L';
   --rzq_pulldown3 : PULLDOWN port map(O => SDRzq);
mcb3_dram_dm_vector <= (UDM & LDM);
     u_mem_c3 : lpddr_model_c3 port map(
        Clk        => SDClk_P,
        Clk_n      => SDClk_N,
        Cke       => SDCKE,
        Cs_n      => '0',
        Ras_n     => RASn,
        Cas_n     => CASn,
        We_n      => SDWEn,
        Dm        => mcb3_dram_dm_vector ,
        Ba        => BA,
        Addr      => SDA,
        Dq        => SDD,
        Dqs       => mcb3_dram_dqs_vector
      );



--END MEMORY MODEL


-- Instantiate the Unit Under Test (UUT)
   uut: FEB_Fpga_A PORT MAP (
   VXO_P => VXO_P, VXO_N => VXO_N, 
	ClkB_P => ClkB_P, ClkB_N => ClkB_N,
   CpldRst => CpldRst,CpldCS => CpldCS,
   uCRd => uCRd,uCWr => uCWr, uCA => uCA,
   uCD => uCD, GA => GA, SDCKE => SDCKE,
   LDM => LDM, UDM => UDM,
   RAS => RAS, CAS => CAS,
   SDWE => SDWE, SDClk_P => SDClk_P,
   SDClk_N => SDClk_N,  SDD => SDD,
   UDQS => UDQS, LDQS => LDQS,
   SDRzq => SDRzq, SDA => SDA,
   BA => BA, AFEPDn => AFEPDn,
   AFECS => AFECS, AFESClk => AFESClk,
   AFESDI => AFESDI, AFERst => AFERst, AFESDO => AFESDO,
   AFEDCO_P => AFEDCO_P, AFEDCO_N => AFEDCO_N,
   AFEFR_P => AFEFR_P, AFEFR_N => AFEFR_N,
   AFEDat0_P => AFEDat0_P, AFEDat0_N => AFEDat0_N,
   AFEDat1_P => AFEDat1_P, AFEDat1_N => AFEDat1_N,
   AFEClk_P => AFEClk_P, AFEClk_N => AFEClk_N,
   MuxEn => MuxEn, Muxad => Muxad,
   Pulse => Pulse, PulseSel => PulseSel,
   DACCS => DACCS, DACClk => DACClk,
   DACDat => DACDat, DACLd => DACLd,
   Temp => Temp, A7 => A7,Debug => Debug,
	GPI1 => GPI1,GPI0_N => GPI0_N ,GPI0_P => GPI0_P);

FMTx1 : FM_Tx 
	generic map (Pwidth => 24) --was 16
	 port map(clock => Clk80,
				reset => ResetHi,
				Enable => TxEn,
				Data => FMWord,
				Tx_Out => Tx1_Out);
GPI0_P <= Tx1_Out.FM;
GPI0_N <= not Tx1_Out.FM;

Initproc : process
	begin
	 CpldRst <= '0'; Gap_Count <= X"0";
	 ResetHi <= '1';
	wait for 100 ns;
	 CpldRst <= '1';
	 ResetHi <= '0';
	 wait;
end process;

--ExtTrig : process
--	begin
--	 GPI0_P <= '0'; 
--	 GPI0_N <= '1'; 
--	wait for 3 us;
--	 GPI0_P <= '1';
--	 GPI0_N <= '0'; 
--	wait for 50 ns;
--	 GPI0_P <= '0'; 
--	 GPI0_N <= '1'; 
--	wait for 13.2 us;
--	 GPI0_P <= '1';
--	 GPI0_N <= '0'; 
--	wait for 50 ns;
--	 GPI0_P <= '0'; 
--	 GPI0_N <= '1'; 
--	wait for 15.71 us;
--	 GPI0_P <= '1';
--	 GPI0_N <= '0'; 
--	wait for 50 ns;
--	 GPI0_P <= '0'; 
--	 GPI0_N <= '1'; 
--	wait for 13.39 us;
--	 GPI0_P <= '1';
--	 GPI0_N <= '0'; 
--	wait for 50 ns;
--	 GPI0_P <= '0'; 
--	 GPI0_N <= '1'; 
--	 wait;
--end process;
--
--ExtGate : process
--	begin
--	 GPI1 <= '0'; 
--	wait for 1 us;
--	 GPI1 <= '1';
--	wait for 14 us;
--	 GPI1 <= '0'; 
--	wait for 1 us;
--	 GPI1 <= '1';
--	wait for 50 us;
--	 GPI1 <= '0'; 
--	 wait;
--end process;

-- The DCO frequency is 480 MHz, 160 * 3, the width is 6.25ns/6
 AFEDCO_process : process
  begin
	AFEDCO_P <= "00";
	AFEDCO_N <= "11";
		wait for VXO_Period/6;
	AFEDCO_P <= "11";
	AFEDCO_N <= "00";
		wait for VXO_Period/6;
	AFEDCO_P <= "00";
	AFEDCO_N <= "11";
		wait for VXO_Period/6;
	AFEDCO_P <= "11";
	AFEDCO_N <= "00";
		wait for VXO_Period/6;
	AFEDCO_P <= "00";
	AFEDCO_N <= "11";
		wait for VXO_Period/6;
	AFEDCO_P <= "11";
	AFEDCO_N <= "00";
		wait for VXO_Period/6;
	SyncClock <= not SyncClock;
   end process;

VXO_process : process
 begin
	VXO_P <= '0';
	VXO_N <= '1';
	ClkB_P <= '0';
	ClkB_N <= '1';
 wait for VXO_period/2;
	VXO_P <= '1';
	VXO_N <= '0';
	ClkB_P <= '1';
	ClkB_N <= '0';
 wait for VXO_period/2;
end process;


--GPI0_process : process
-- begin
--	GPI0_P <= '0';
--	GPI0_N <= '1';
---- wait for 19.9 ns;
--   wait for 2us;
--	GPI0_P <= '1';
--	GPI0_N <= '0';
---- wait for 19.9 ns;
--	wait for 50 ns;
--	GPI0_P <= '0';
--	GPI0_N <= '1';
-- wait;	
--end process;

Clk80_process : process
 begin
  Clk80 <= '0';
  wait for 6.25 ns;
  Clk80 <= '1';
  wait for 6.25 ns;
end process;

RF_process : process
 begin
  Clk53 <= '0';
  wait for 9.4159 ns;
  Clk53 <= '1';
  wait for 9.4159 ns;
end process;

startTrig: process
begin
startTriggers <= '0';

wait for 2000 ns;
startTriggers <= '1';
wait;
end process;

uBunchWidthproc : process (Clk53,CpldRst)

	begin

		if CpldRst = '0' then 
			uBunchWidth <= (others => '0');
			TxReq <= '0';
		
		elsif (rising_edge(Clk53) and (startTriggers = '1'))

		then
			
		if uBunchWidth /= 580 then uBunchWidth <= uBunchWidth + 1;
		else uBunchWidth <= (others => '0');
		end if;

		if uBunchWidth = 580 then TxReq <= '1';
		elsif TxAck = '1' then TxReq <= '0';
		else TxReq <= TxReq;
		end if;

	end if;
	
end process;

FMTx : Process(Clk80,CpldRst)

 begin

if CpldRst = '0' then

FM_Index <= 0; TxAck <= '0';
TxEn <= '0'; 
FMWord <= X"112345"; -- Set bit 20 to indicate beam on heartbeats
Tx_State <= Idle; 

elsif rising_edge(Clk80)

then

if Tx_State = ClrEn then 
	FMWord(23 downto 20) <= X"3";
	FMWord(19 downto 0) <= FMWord(19 downto 0) + 1;
else FMWord <= FMWord;
end if;

-- Idle, SetEnables, WaitEn0, ClrEn0, WaitEn1, ClrEn1
TxAck <= TxReq;
	
Case Tx_State is
		When Idle =>
		  if TxAck = '1' 
			then Tx_State <= SetEnable;
		  else Tx_State <= Idle;
		  end if;
		 When SetEnable => Tx_State <= WaitEn;
		 When WaitEn =>
			If Tx1_Out.Done = '1' 
				then Tx_State <= ClrEn;
			else Tx_State <= WaitEn;
			end if;
		 when ClrEn => Tx_State <= Idle;
end case;

if TxEn = '0' and Tx_State = SetEnable
 then TxEn <= '1';
elsif Tx_State = ClrEn 
 then TxEn <= '0';
else TxEn <= TxEn;
end if;

end if; --CpldRst

end process FMTx;


gen8 : for i in 0 to 7 generate

-- Stimulus process
stim_proc: process(CpldRst,AFEClk_P(0))

begin		

if CpldRst = '0' then

 DDR_Tap0(i) <= "0000";  
 DDR_Tap1(i) <= "0000";  
 DDR_LSFR0(i) <= Seed0(i); 
 DDR_LSFR1(i) <= Seed1(i); 

elsif rising_edge(AFEClk_P(0))

then

	if COUNT(4) = '1' then
		COUNT <= (Others => '0');
		PULSECNT <= "111";
	elsif PULSECNT /= "000" then
		PULSECNT <= PULSECNT - 1;
	else
		COUNT <= COUNT + 1;
		PULSECNT <= "000";
	end if;

	
-- Load a fake pulse
case PULSECNT is
	when "000" =>
		DDR_LSFR0(i) <= X"00000" & "0" & STD_LOGIC_VECTOR(COUNT(2 downto 0));
		DDR_LSFR1(i) <= X"00000" & "0" & STD_LOGIC_VECTOR(COUNT(2 downto 0));
	when "111" =>
		DDR_LSFR0(i) <= X"000204";
		DDR_LSFR1(i) <= X"000204";
	when "110" =>
		DDR_LSFR0(i) <= X"000103";
		DDR_LSFR1(i) <= X"000103";
	when "101" =>
		DDR_LSFR0(i) <= X"000050";
		DDR_LSFR1(i) <= X"000050";
	when "100" =>
		DDR_LSFR0(i) <= X"000030";
		DDR_LSFR1(i) <= X"000030";
	when "011" =>
		DDR_LSFR0(i) <= X"000020";
		DDR_LSFR1(i) <= X"000020";
	when "010" =>
		DDR_LSFR0(i) <= X"000010";
		DDR_LSFR1(i) <= X"000010";
	when "001" =>
		DDR_LSFR0(i) <= X"000005";
		DDR_LSFR1(i) <= X"000005";
	when others =>
	end case;
	--DDR_LSFR0(i) <= X"000556";

 end if;

end process;

shift_proc: process(CpldRst,AFEDCO_P(0))
begin
if CpldRst = '0' then
	TxReg0(i) <= X"000";
	TxReg1(i) <= X"000";
	AFEDCODL <= "00";
	iAFEFR <= X"03F";
elsif (AFEDCO_P(0)' event)
then
	AFEDCODL(0) <= SyncClock;
	AFEDCODL(1) <= AFEDCODL(0);
	if AFEDCODL = "01" then 
-- The framing signal is high at the beginning of the serial word
   iAFEFR <= X"FC0"; -- 111111000000
-- Load a random value, then shift out
	TxReg0(i) <= std_logic_vector(DDR_LSFR0(i)(11 downto 0));--x"F2A";--DDR_LSFR0(i)(5) & DDR_LSFR0(i)(5) & DDR_LSFR0(i)(5) & DDR_LSFR0(i)(5) & DDR_LSFR0(i)(5) & DDR_LSFR0(i)(5) 
	           --& DDR_LSFR0(i)(5) & DDR_LSFR0(i)(4 downto 0);
	TxReg1(i) <= std_logic_vector(DDR_LSFR0(i)(11 downto 0));--DDR_LSFR1(i)(12) & DDR_LSFR1(i)(12) & DDR_LSFR1(i)(12) & DDR_LSFR1(i)(12) & DDR_LSFR1(i)(12) & DDR_LSFR1(i)(12)  
	           --& DDR_LSFR1(i)(12) & DDR_LSFR1(i)(11 downto 7);
	else TxReg0(i) <= '0' & TxReg0(i)(11 downto 1);
	     TxReg1(i) <= '0' & TxReg1(i)(11 downto 1);--TxReg1(i)(10 downto 0) & '0';
	iAFEFR <= iAFEFR(10 downto 0) & iAFEFR(11);
	end if;
end if;
AFEDat0_P(i) <=     TxReg0(i)(0) after 0.5 ns;
AFEDat0_N(i) <= not TxReg0(i)(0) after 0.5 ns;
AFEDat1_P(i) <=     TxReg1(i)(0) after 0.5 ns;
AFEDat1_N(i) <= not TxReg1(i)(0) after 0.5 ns;
AFEFR_P <=     (iAFEFR(11) & iAFEFR(11)) after 0.5 ns;
AFEFR_N <= not (iAFEFR(11) & iAFEFR(11)) after 0.5 ns;
end process;

end generate;

DDRCmd : process

 Variable Loop_Index : integer range 0 to 31;

 begin

	  CpldCS <= '1'; GA <= "00";
     uCRd <= '1'; uCWr <= '1'; 
	  uCA(9 downto 0) <= (others => 'Z');
	  uCA(11 downto 10) <= "00";
 	  uCD <= (others => 'Z');
--	  PresentAD <= FIFORdAddr0(0);

	wait for 200 ns;

-- Issue a DDR reset
		  uCA(9 downto 0) <= CSRRegAddr;
 		  wait for 5 ns;
		  CpldCS <= '0';
		  wait for 10 ns;
        uCD <= X"006C";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  wait for 50 ns;

		  uCA(9 downto 0) <= Inttrgenaddr;
 		  wait for 5 ns;
		  CpldCS <= '0';
		  wait for 10 ns;
        uCD <= X"0002";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');
		  
		  wait for 15 ns;
		  
		  uCA(9 downto 0) <=  SlipCntRegAd;
 		  wait for 5 ns;
		  CpldCS <= '0';
		  uCD <= X"0000";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');
		  wait for 100 ns;

		  uCA(9 downto 0) <=  SlipCtrlAd;
 		  wait for 5 ns;
		  CpldCS <= '0';
		  uCD <= X"0000";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');
		  wait for 100 ns;
		  
		  
		  uCA(9 downto 0) <=  FEBAddresRegAd;
 		  wait for 5 ns;
		  CpldCS <= '0';
		  uCD <= X"FFFF";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');
		  wait for 100 ns;
	
--		  uCA(9 downto 0) <= "00" & X"41";
-- 	  wait for 5 ns;
--		  CpldCS <= '0';
--		  wait for 10 ns;
--      uCD <= X"0123";
--		  uCWr <= '0';
--		  wait for 30 ns;
--		  uCWr <= '1';
--		  CpldCS <= '1';
--		  wait for 10 ns;
--		  uCA(9 downto 0) <= (Others => 'Z');
--		  uCD <= (others => 'Z');
--		  wait for 50 ns;


		  wait for 50 ns;

		  uCA(9 downto 0) <=  InputMaskAddr;
        uCD <= X"0002";
		  wait for 5 ns;
		  CpldCS <= '0';
		  wait for 10 ns;
 		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  wait for 50 ns;

		  wait for 50 ns;
		  uCA(9 downto 0) <=  TrigCtrlAddr;
 		  wait for 5 ns;
		  CpldCS <= '0';
		  wait for 10 ns;
        uCD <= X"0000"; -- uCD <= X"0300";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  wait for 50 ns;

 	     uCA(9 downto 0) <=  GateAddr;
 		  wait for 5 ns;
		  CpldCS <= '0';
		  uCD <= X"0020";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  wait for 50 ns;

 	     uCA(9 downto 0) <=  HistCtrlAd;
 		  wait for 5 ns;
		  CpldCS <= '0';
		  uCD <= X"0020";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  wait for 50 ns;
 	     uCA(9 downto 0) <=  HistIntvalAd;
 		  wait for 5 ns;
		  CpldCS <= '0';
		  uCD <= X"0080";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  wait for 50 ns;

 	     uCA(9 downto 0) <= InternalPipeLineAddr;
 		  wait for 5 ns;
		  CpldCS <= '0';
        uCD <= X"0004";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  wait for 100 ns;
		  
		  uCA(9 downto 0) <= InputPipeLineAddr;
 		  wait for 5 ns;
		  CpldCS <= '0';
        uCD <= X"0010";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  wait for 100 ns;
		  
		  uCA(9 downto 0) <= OnBeamLengthAd;
 		  wait for 5 ns;
		  CpldCS <= '0';
        uCD <= X"00FF";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  wait for 50 ns;
		  		  
		  uCA(9 downto 0) <= ThreshRegAddr(0)(0);
 		  wait for 5 ns;
		  CpldCS <= '0';
        uCD <= X"0070";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  wait for 50 ns;
		  		  
		  uCA(9 downto 0) <= ThreshRegAddr(0)(1);
 		  wait for 5 ns;
		  CpldCS <= '0';
        uCD <= X"0095";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  wait for 50 ns;
		  		  
		  uCA(9 downto 0) <= ThreshRegAddr(0)(2);
 		  wait for 5 ns;
		  CpldCS <= '0';
        uCD <= X"0000";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  wait for 50 ns;
		  
		  uCA(9 downto 0) <= BeamOffLengthAd;
 		  wait for 5 ns;
		  CpldCS <= '0';
        uCD <= X"0200";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  wait for 50 ns;


		 uCA(9 downto 0) <= "00" & X"30";
			
--for Loop_Index in 0 to 31 loop

--  issue low word write
 	     uCA(9 downto 0) <=  InputMaskAddr;
 		  wait for 5 ns;
		  CpldCS <= '0';
		  uCD <= X"FFFF";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');
		  wait for 100 ns;

	wait for 13071 ns;
	
	 	  uCA(9 downto 0) <=  GateAddr;
 		  wait for 5 ns;
		  CpldCS <= '0';
		  uCD <= X"0020";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  uCA(9 downto 0) <=  CSRRegAddr;
 		  wait for 5 ns;
		  CpldCS <= '0';
		  wait for 10 ns;
        uCD <= X"0020";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

--end loop;		

--  issue high word write
 	     uCA(9 downto 0) <=  TempDat0Ad; 
 		  wait for 5 ns;
		  CpldCS <= '0';
        uCD <= X"0044";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

		  wait for 50 ns;

--  issue low word write
 	     uCA(9 downto 0) <=  TempCtrlAd; 
 		  wait for 5 ns;
		  CpldCS <= '0';
        if Loop_Index = 0 then uCD <= X"0711"; -- X"FED0"; 
		  else uCD <= X"FF10";
		  end if;
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');

--end loop;		
		  uCD <= (others => 'Z');

		  FMTxData <= X"1234";
 
for Loop_Index in 0 to 31 loop

--  issue low word write
	     uCA(9 downto 0) <=  LVDSTxFIFOAd; 
 		  wait for 5 ns;
		  CpldCS <= '0';
 		  uCD <= FMTxData;
		  uCWr <= '0';
		  wait for 30 ns;
  		  uCWr <= '1';
		  CpldCS <= '1';
		  FMTxData <= FMTxData + X"1111";
	     wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');


-- 	    uCA(9 downto 0) <=  HistRd0Ad;
-- 	    wait for 5 ns;
--		 CpldCS <= '0';
--		 uCRd <= '0';
--		 wait for 30 ns;
--		 uCRd <= '1';
--		 CpldCS <= '1';
--		 wait for 10 ns;
--		 uCA(9 downto 0) <= (Others => 'Z');
--		 wait for 50 ns;
--
-- 	    uCA(9 downto 0) <=  HistRd1Ad;
-- 	    wait for 5 ns;
--		 CpldCS <= '0';
--		 uCRd <= '0';
--		 wait for 30 ns;
--		 uCRd <= '1';
--		 CpldCS <= '1';
--		 wait for 10 ns;
--		 uCA(9 downto 0) <= (Others => 'Z');
--		 wait for 50 ns;

end loop;

--  issue low word write
 	     uCA(9 downto 0) <= "00" & X"0B"; 
 		  wait for 5 ns;
		  CpldCS <= '0';
		  uCD <= X"FF10";
		  uCWr <= '0';
		  wait for 30 ns;
		  uCWr <= '1';
		  CpldCS <= '1';
		  wait for 10 ns;
		  uCA(9 downto 0) <= (Others => 'Z');
		  uCD <= (others => 'Z');
	
	wait;
			
end process;



--
---- poor man's LPDDR model. Produces data in response to a read command.
--DDR_Rd_Data : Process(IntDQSClk,CpldRst)
--
-- begin
--
--if CpldRst = '0' then
--
-- BurstCount <= X"0"; iDQS <= '0';
-- UDQS <= 'Z'; LDQS <= 'Z'; SDD <= (others => 'Z');
---- DDR_LSFR <= X"47A95B"; 
-- DDR_Tap <= "0000";  
-- DDR_LSFR <= (others => '0');
--
--elsif falling_edge(IntDQSClk)
--
--	then
--
--	 DDR_Tap(0) <= DDR_LSFR(23) xor DDR_LSFR(19);
--	 DDR_Tap(1) <= DDR_LSFR(13) xor DDR_LSFR(17);
--	 DDR_Tap(2) <= DDR_LSFR(3) xor DDR_LSFR(12);
--	 DDR_Tap(3) <= DDR_LSFR(1) xor DDR_LSFR(9);
----	 DDR_LSFR <= DDR_LSFR(22 downto 0) & DDR_Tap(3);
--
---- Idle,WaitCS0,WaitCS1,WaitCS2,WaitCS3,EnableDQS,DisableDQS
--	Case DDR_Rx_State is
--		When Idle =>
--		  if SDCKE = '1' and RAS = '1' and CAS = '0' and SDWE = '1'
--			then DDR_Rx_State <= WaitCS0;
--		  else DDR_Rx_State <= Idle;
--		  end if;
--		 When WaitCS0 => 
--		   if CAS = '1' then DDR_Rx_State <= WaitCS1;
--			else DDR_Rx_State <= WaitCS0;
--			end if;
--		 When WaitCS1 => DDR_Rx_State <= WaitCS2;
--		 When WaitCS2 => DDR_Rx_State <= WaitCS3; 
--		 When WaitCS3 => DDR_Rx_State <= EnableDQS;  		 
--		 when EnableDQS =>
--			if BurstCount = 0
--				then DDR_Rx_State <= DisableDQS;
--			else DDR_Rx_State <= EnableDQS;
--			end if;
--		 When DisableDQS => DDR_Rx_State <= Idle;
--	end case;
--
--if DDR_Rx_State = WaitCS3 then BurstCount <= X"F";
-- elsif DDR_Rx_State = EnableDQS and BurstCount > 0
-- then BurstCount <= BurstCount - 1;
-- else BurstCount <= BurstCount;
-- end if;
--
--  if DDR_Rx_State = WaitCS3 or DDR_Rx_State = EnableDQS then 
--iDQS <= not iDQS;
--else iDQS <= '0';
--end if;
--
-- if DDR_Rx_State = WaitCS3 or DDR_Rx_State = EnableDQS then 
--	UDQS <= iDQS; 
--	LDQS <= iDQS;
-- else UDQS <= 'Z'; LDQS <= 'Z';
-- end if;
--
-- if DDR_Rx_State = EnableDQS
-- then SDD <= DDR_LSFR(15 downto 0);
--			 DDR_LSFR <= DDR_LSFR + 1;
-- else SDD <= (others => 'Z');
-- 	   DDR_LSFR <= DDR_LSFR;
-- end if;
--
--end if; -- rising edge
--
--end process	DDR_Rd_Data;


AFE_Rd_Data : Process(AFESClk,AFECS)

begin

if AFECS = 3 then

   BitCount <= "1001";
	RdReg <= DDR_LSFR0(3)(15 downto 0);
	
elsif rising_edge(AFESClk) then

 if BitCount /= 0 then BitCount <= BitCount - 1;
end if;

if BitCount = 0 then RdReg <= RdReg(14 downto 0) & '0'; 
end if;

end if; -- rising edge

end process AFE_Rd_Data;

AFESDO <= RdReg(15) when AFECS /= 3 and BitCount = 0 else 'Z' after 40ns;

-- Use this to generate DDR strobes
intDQSClkGen : process                                           
begin 
-- 200 MHz DDR Rx clock
    IntDQSClk <= '0';
    wait for VXO_period/6.4;
    IntDQSClk <= '1';
  wait for VXO_period/6.4;
end process intDQSClkGen;  

END;


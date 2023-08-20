
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use work.phase1_Package.all;

entity regFile is
    Port ( write_Data : in  STD_LOGIC_VECTOR (7 downto 0);
           write_sel : in  STD_LOGIC_VECTOR (1 downto 0);
           wr_en : in  STD_LOGIC;
           read1 : out  STD_LOGIC_VECTOR (7 downto 0);
           read1_sel : in  STD_LOGIC_VECTOR (1 downto 0);
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC);
end regFile;

architecture Behavioral of regFile is
SIGNAL L: STD_LOGIC_VECTOR(3 downto 0);
SIGNAL Out1, Out2, Out3, Out4 : STD_LOGIC_VECTOR ( 7 downto 0);
begin

decoder1: Decoder port map (write_sel, wr_en, L);


reg1: reg port map ( write_Data, Out1, L(0), clk, rst);
reg2: reg port map ( write_Data, Out2, L(1), clk, rst);
reg3: reg port map ( write_Data, Out3, L(2), clk, rst);
reg4: reg port map ( write_Data, Out4, L(3), clk, rst);

mux1: Mux port map (Out1, Out2, Out3, Out4, read1_sel, read1);

end Behavioral;


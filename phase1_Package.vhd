
library IEEE;
use IEEE.STD_LOGIC_1164.all;

package phase1_Package is
component reg is
    Port ( I : in  STD_LOGIC_VECTOR (7 downto 0);
           OP : out  STD_LOGIC_VECTOR (7 downto 0);
			  L : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC);
end component;

component Mux is
    Port ( i0 : in  STD_LOGIC_VECTOR (7 downto 0);
           i1 : in  STD_LOGIC_VECTOR (7 downto 0);
           i2 : in  STD_LOGIC_VECTOR (7 downto 0);
           i3 : in  STD_LOGIC_VECTOR (7 downto 0);
           S : in  STD_LOGIC_VECTOR (1 downto 0);
           OP : out  STD_LOGIC_VECTOR (7 downto 0));
end component;

component Decoder is
    Port ( I : in  STD_LOGIC_VECTOR (1 downto 0);
	        E: in STD_LOGIC; 
           OP : out  STD_LOGIC_VECTOR (3 downto 0));
end component;

end phase1_Package;

package body phase1_Package is


 
end phase1_Package;

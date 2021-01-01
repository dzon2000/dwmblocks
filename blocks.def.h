//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "weather.sh",	   			3600,		0},
	{"🦠 ", "corona.sh",	   	    14400,		5},
    {"📝 ", "taskstatus",           3600,       8},
	{"🖴 ", "disk.sh",	  			300,		10},
	{"CPU1 ", "temp.sh 0",			5,	    	15},
	{"CPU2 ", "temp.sh 1",			5,	    	20},
	{"Mem: ", "mem.sh",				30,	    	25},
	{"Eth: ", "network",			14400,	    27},
	{"", "date.sh",					30,		    30},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

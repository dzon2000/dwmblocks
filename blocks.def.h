//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "weather.sh",	   			3600,		0},
	{"⛁ ", "disk.sh",	  			300,		0},
	{"🌡 ", "temp.sh 0",				5,		0},
	{"🌡 ", "temp.sh 1",				5,		0},
	{"Mem:", "mem.sh",				30,		0},
	{"", "date.sh",					30,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

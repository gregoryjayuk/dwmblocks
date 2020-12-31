//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"", "processcount",							600,		0},
	{" ", "df -h | awk 'NR==4{print $2}'",	60,		0},
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"", "TZ='Europe/London' date '+%H:%M'",					60,		0},
	{"", "date '+%d/%m %I:%M'",					60,		0},
	{"", "pollution",							600,		9},
	{"", "battery",							300,		0},
	{"", "battery2",							300,		0},
	{"", "volume",						0,		10},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

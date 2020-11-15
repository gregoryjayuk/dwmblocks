//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{" ", "df -h | awk 'NR==5{print $2}'",	60,		0},
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"", "TZ='Europe/London' date '+%H:%M'",					60,		0},
	{"", "date '+%d/%m %I:%M'",					60,		0},
	{"", "pollution",							600,		0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

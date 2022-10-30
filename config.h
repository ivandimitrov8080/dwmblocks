//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/							/*Update Interval*/	/*Update Signal*/
	{"", 		"netstat",							1,			0},
	{"", 		"curl wttr.in/Nottingham\?format=\"%C+%t+%p\"",			3600,			0},
	{"", 		"free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	5,			0},
	{"", 		"date '+%b %d (%a) %I:%M%p'",					60,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;


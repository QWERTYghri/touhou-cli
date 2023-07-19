/*
	Util.h

	Util.h is a file to hold ncurses definitions and functions that are repeated and provide
	some utilty
*/

#ifndef UTIL_H
#define UTIL_H

enum {
	CUR_INVIS,
	CUR_VIS
};

void errMsg ( int32_t code, const char* format, ... );

// Start handlers
void initColor ( void );
void exitNc ( void );
void initNc ( void );

#endif // END

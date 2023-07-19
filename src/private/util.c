/*
	Util.h

	Util.h is a file to hold ncurses definitions and functions that are repeated and provide
	some utilty
*/
// libc
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// library
#include <ncurses.h>

// Local
#include "../public/macro.h"

void
errMsg ( int32_t code, const char* format, ... )
{
	va_list set;
	va_start ( set, format );

	clearWins ();
	exitNc ();
	vfprintf ( stderr, format, set );
	
	va_end ( set );
	exit ( code );
}

void
initColor ( void )
{
	if ( has_colors () )
                start_color ();
        else
                errMsg ( EXIT_FAILURE, ERR_COLOR )
}

void
exitNc ( void )
{
	erase ();
	refresh ();
	endwin ();
}

void
initNc ( void )
{
	setlocale ( LC_ALL, "" );

	initscr ();
	noecho ();
	nonl ();
	curs_set ( CUR_INVIS );
	// raw ();
}

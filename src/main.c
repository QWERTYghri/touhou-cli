/*
	Main program file for touhou

*/

// Libc
#include <stdio.h>

// Posix

// Library
#include <ncurses.h>
#include <pthread.h>

// Local
#include "./public/util.h"

void gameStart ( void )
{
	
}

int main ( void )
{
	initNc ();
	gameStart ();
	exitNc ();
	
	return 0;
}

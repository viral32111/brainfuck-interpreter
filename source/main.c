/***********************************************************************
This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any means.

For more information, please refer to https://unlicense.org.
***********************************************************************/

// Include a few standard linux headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The main entry point to the program
int main( int argc, char* argv[] ) {
	char program[] = "+++++++++++++++++++++++++++++++++.>++++++++++."; // !

	// fixme
	//char *memory = calloc( 8, sizeof( char ) );
	//int dataPointer = 0;

	char memory[ 8 ] = { 0 };
	int ptr = 0;

	int length = strlen( program );
	for ( int index = 0; index < length; index++ ) {
		char command = program[ index ];

		switch ( command ) {
			case '>':
				//printf( "increment data pointer\n" );
				ptr++;
				break;

			case '<':
				//printf( "decrement data pointer\n" );
				ptr--;
				break;
			
			case '+':
				//printf( "increment value\n" );
				memory[ ptr ]++;
				break;
			
			case '-':
				//printf( "decrement value\n" );
				memory[ ptr ]--;
				break;

			case '.':
				//printf( "output value\n" );
				putchar( memory[ ptr ] );
				break;
			
			case ',':
				//printf( "input value\n" );
				memory[ ptr ] = getchar();
				break;

			case '[':
				//printf( "begin loop\n" );
				break;

			case ']':
				//printf( "end loop\n" );
				break;

			default:
				//printf( "ignore '%c'\n", command );
				break;
		}
	}

	//free( memory );

	// we were successful
	return 0;
}

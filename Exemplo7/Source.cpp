#include <stdio.h>
#include <stdlib.h>
void main() {
	int x = 0;

	x = 1;
	while (x < 11)
	{
		printf( "7 x %d = %d \n", x, 7 * x );
		x++;
	}
	printf( "\n" );
	system( "pause" );
}

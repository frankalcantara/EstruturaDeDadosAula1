#include <stdio.h>
#include <stdlib.h>

void main() {
	int x;

	x = 1;
	do
	{
		printf( "7 x %d = %d \n", x, 7 * x );
		x++;
	} while (x <= 10);

	printf( "\n" );
	system( "pause" );
}

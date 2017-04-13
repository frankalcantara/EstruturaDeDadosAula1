/*
* A conversão de graus Farenheit para centígrados é obtida por c = ((f-32)*5)/9. 
* Faça um programa que calcule e imprima uma tabela de graus Centígrados e graus Farenheit, 
* que variem de 50 a 65 de 1 em 1 grau.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	float x;
	printf( "Centígrados - Farenheit" );

	for (x = 50; x <= 65; x++)
		printf( "%0.2f - %0.2f \n ", ((x - 32)*5)/9, x );

	system( "pause" );
}


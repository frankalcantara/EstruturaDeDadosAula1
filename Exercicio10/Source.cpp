/*
* Escreva um programa que receba um número inteiro 
* fornecido pelo usuário e informe se este número é primo ou não.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	int num, x, flag = 0, c = 0;

	printf( "Informe um número inteiro positivo." );
	scanf_s( "%d", &num );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	for (x = 2; x < (num - 1); x++) {
		if (num > 0)
			if ((num % x) == 0)
				flag = 1;
	}
	if (flag)
		printf( "O número nao eh primo.\n" );
	else
		printf( "O número eh primo.\n" );

	system( "pause" );
	return 0;
}

/*
* Escreva um programa que receba um conjunto de valores inteiros e positivos, 
* calcule e imprima o maior e o menor valor do conjunto. 
* Para encerrar a entrada de dados, deve ser digitado o valor zero. 
* Para valores negativos, deve ser desconsiderado e informado ao usuário.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	int num, maior = 0, menor = 0, c = 0;

	printf( "Informe um número inteiro positivo." );
	scanf_s( "%d", &num );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	menor = num;
	do
	{
		system( "cls" );
		printf( "Informe um número inteiro positivo." );
		scanf_s( "%d", &num );
		//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		if (num < 0)
			printf( "Número inválido\n." );
		else
			if (num > 0){
				if (num > maior)
					maior = num;
				if (num < menor)
					menor = num;
			}
	} while (num != 0);

	printf( "O maior valor digitado é %d e o menor é %d.\n ", maior, menor );
	system( "pause" );
	return 0;
}

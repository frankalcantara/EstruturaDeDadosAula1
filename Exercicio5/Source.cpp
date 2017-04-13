/*
* Fazer um programa que receba o código de origem de um produto 
* e imprima a sua procedência. A procedência obedece a seguinte tabela:	
* Código de Origem		Procedência
*	1					Sul
*	2					Norte
*	3					Leste
*	4					Oeste
*	5 ou 6				Sudeste
*	7, 8 ou 9			Centro-oeste
*	Todos os demais		Nordeste
*/
#include <stdlib.h>
#include <stdio.h>

void main() {
	int cod = 0;

	printf( "Informar o código de Origem do Produto: " );
	scanf_s( "%d", &cod );

	switch (cod) {
		case 1: printf( "Procedência : Sul\n" ); break;
		case 2: printf( "Procedência : Norte\n" ); break;
		case 3: printf( "Procedência : Leste\n" ); break;
		case 4: printf( "Procedência : Oeste\n" ); break;
		case 5:
		case 6: printf( "Procedência : Sudeste\n" ); break;
		case 7:
		case 8:
		case 9: printf( "Procedência : Centro - Oeste\n" ); break;
		default: printf( "Procedência : Nordeste\n" ); break;
	}
	system( "pause" );
}


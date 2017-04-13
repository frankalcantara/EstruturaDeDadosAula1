#include <stdio.h>
#include <stdlib.h>

void main() {
	int x = 0;
	char op = ' ', c=' ';

	printf( "Informe sua idade: " );
	scanf_s( "%d", &x );
	//sempre que usar o scanf/scanf_s mais de uma vez limpe o buffer de teclado
	while ((c = getchar()) != '\n' && c != EOF) {}
	printf( "Digite s se for votar nas próximas eleições\n ou qualquer outro caractere para não votar:" );
	scanf_s( "%c", &op );
	while ((c = getchar()) != '\n' && c != EOF) {}

	if ((op == 's') || (op == 'S')){
		if (x > 15){
			printf( "Você já pode votar" );
			if( x >= 18 ){
				printf( "Você já pode ser candidato nas eleições.\n" );
				if( x > 64 ) {
					printf( "Você esta liberado da obrigatoriedade de votar.\n" );
				}
			}
		} else
		{
			printf( "Você não tem idade para participar das eleições.\n" );
		}
	}
	printf( "Obrigado\n" );
	system( "pause" );
}


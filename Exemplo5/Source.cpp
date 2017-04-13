#include <stdio.h>
#include <stdlib.h>

void main() {
	int x = 0;

	printf( "Informe o número de seu candidato: " );
	scanf_s( "%d", &x );

	if (x == 1) {
		printf( "Seu voto foi computado para: Zé Carioca\n" );
	} else if( x == 2 ){ 
		printf( "Seu voto foi computado para: Ciclano Albuquerque\n" ); 
	} else if( x == 3 ){ 
		printf( "Seu voto foi computado para: Fulano e silva\n" ); 
	} else if( x == 4 ){ 
		printf( "Seu voto foi computado para: José Colmeia\n" ); 
	} else if( x == 5 ){ 
		printf( "Seu voto foi computado para: Seu Manoel do 505\n" ); 
	} else{ 
		printf( "Voto inválido\n" ); 
	}
	system( "pause" );

}


/*
* Em uma eleição presidencial existem 4 candidatos. 
* Os votos são informados através de código. 
* Os códigos utilizados são: 
*	1, 2, 3, 4 votos para os respectivos candidatos; 
*	5 é voto nulo; 
* 6 é voto em branco. 
* Escreva um programa que calcule e imprima: 
*	total de votos para cada candidato; 
*	total de votos nulos; 
*	total de votos em branco; 
*	porcentagem de votos nulos sobre o total de votos; 
*	porcentagem de votos em branco sobre o total de votos. 
*
* Para finalizar o conjunto de votos, tem que ser digitado o valor zero.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	int voto, c1 = 0, c2 = 0, c3 = 0, c4 = 0; 
	int	nulo = 0, branco = 0, total = 0 , c =0;

	do
	{
		system( "cls" );
		printf( "Informe seu voto: " );
		scanf_s( "%d", &voto );
		//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
		
		total++;

		switch (voto) {
			case 1: c1++; break;
			case 2: c2++; break;
			case 3: c3++; break;
			case 4: c4++; break;
			case 5: nulo++; break;
			case 6: branco++; break;
		}
	} while (voto != 0);
	//neste laço, o zero conta como voto então temos que tirar um do total
	total--;

	printf( "Total de votos para o candidato 1: %d\n", c1 );
	printf( "Total de votos para o candidato 2: %d\n", c2 );
	printf( "Total de votos para o candidato 3: %d\n", c3 );
	printf( "Total de votos para o candidato 4: %d\n", c4 );
	printf( "Total de votos para Nulos: %d\n", nulo );
	printf( "Total de votos para em Branco: %d\n", branco );
	printf( "O total de votos foi de %d\n", total );
	//para poder imprimir o percentual com pelo menos duas casas decimais
	//teremos que fazer um typecast, transformando inteiro em double
	printf( "%0.2f %% dos votos foram em Branco.\n", (100 /(double)total) * (double)branco );

	system( "pause" );
	return 0;
}

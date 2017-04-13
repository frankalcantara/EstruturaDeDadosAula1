/*
* Escreva um programa que receba a idade de 15 pessoas, calcule e imprima: 
*	a quantidade de pessoas em cada faixa etária; 
*	a porcentagem de cada faixa etária em relação ao total de pessoas. 
* As faixas etárias são: 
*	1 a 15 anos; 
*	16 a 30 anos; 
*	31 a 45 anos; 
*	46 a 60 anos; 
*	a cima de 60 anos.
*/
#include <stdlib.h>
#include <stdio.h>

void main() {
	int idade = 0, x = 0, c =03;
	double f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
	
	for (x = 1; x < 15; x++) {
		printf( "Informar a idade da %dª pessoa : ", x );
		scanf_s( "%d", &idade );
		//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		if (idade < 16)
			f1++;
		else
			if (idade < 31)
				f2++;
			else
				if (idade < 46)
					f3++;
				else
					if (idade < 61)
						f4++;
					else
						f5++;
	}
	//vamos apresentar o percentual com duas casas decimais
	printf( "\n%f pessoas na faixa 1 (1 a 15) corresponde a %0.2f %% do total.\n", f1, (100 / 15)*f1 );
	printf( "%f pessoas na faixa 2 (16 a 30) corresponde a %0.2f %% do total.\n", f2, (100 / 15)*f2 );
	printf( "%f pessoas na faixa 3 (31 a 45) corresponde a %0.2f %% do total.\n", f3, (100 / 15)*f3 );
	printf( "%f pessoas na faixa 4 (46 a 60) corresponde a %0.2f %% do total.\n", f4, (100 / 15)*f4 );
	printf( "%f pessoas na faixa 5 (+60) corresponde a %0.2f %% do total.\n", f5, (100 / 15)*f5 );
	system( "pause" );
}

/*
* Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e a sua opinião em relação ao filme:
*	ótimo	– 3; 
*	bom		– 2; 
*	regular – 1. 
* Faça um programa que receba a idade e a opinião de 15 espectadores, calcule e imprima:
*	a média da idade das pessoas que responderam ótimo; 
*	a quantidade de pessoas que responderam regular; 
*	a porcentagem de pessoas que responderam bom entre todos os espectadores analisados.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	int idade, opiniao, x = 0, c = 0; 
	float media = 0.0, tot_bom = 0.0, tot_oti = 0.0, tot_reg = 0.0;

	for (x = 1; x<15; x++){
		printf( "Informe a idade espectador %d:", x );
		scanf_s( "%d", &idade );
		//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		printf( "Informe a opinião do espectador %d:", x );
		scanf_s( "%d", &opiniao );
		//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		if (opiniao == 3){
			media += idade;
			tot_oti++;
		}
		if( opiniao == 1 )
			tot_reg++;
		if( opiniao == 2 )
			tot_bom++;
	}

	printf( "A média de idade das pessoas que responderam ótimo é %0.2f\n", (media / tot_oti) );
	printf( "O total de pessoas que responderam regular foi %d\n", tot_reg );
	printf( "A porcentagem de pessoas que responderam bom foi %0.2f\n", (100 / 15)*tot_bom );
	system( "pause" );
}


/*
* Escreva um programa que pergunte ao usuário com qual velocidade ele costuma 
* dirigir seu carro e imprima a resposta que o guarda de trânsito daria 
* conforme as seguintes possíveis velocidades: 
* > 110 km/h; 
* > 80 km/h; 
* > 40 Km/h; 
* < 40 km/h. 
* utilizar comandos if else aninhados
*/
#include <stdlib.h>
#include <stdio.h>

int main() {
	int vel = 0, c = 0;

	printf( "Com qual velocidade você costuma dirigir seu carro?" );
	scanf_s( "%d", &vel );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	if (vel > 110)
		printf( "Você trafega em velocidade muito alta para uma via pública.\n" );
	else
		if (vel > 80)
			printf( "Cuidado, não existe vias rápidas para esta velocidade na cidade.\n" );
		else
			if (vel >  40)
				printf( "Muito bem você esta dentro dos limites para vias públicas.\n" );
			else
				printf( "você é muito lento.\n" );
	system( "pause" );
}

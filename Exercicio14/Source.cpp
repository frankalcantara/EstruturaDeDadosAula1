/*
* Faça um programa que receba a idade e a altura de várias pessoas. 
* Calcule e imprima a média das alturas das pessoas com mais de 50 anos.
* Para encerrar a entrada de dados digite idade <= zero.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	int idade, total = 0, mais50 = 0, c = 0;
	float altura = 0.0, media = 0.0;
	
	do{
		printf( "Informe a idade: " );
		scanf_s( "%d", &idade );
		//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		printf( "Informe a altura: " );
		scanf_s( "%f", &altura );
		//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
		
		if (idade > 50) {
			media += altura;
			mais50++;
		}
	} while (idade >= 0);
	//para imprimir a média com duas casas decimais precisamos
	//fazer um typecast.
	printf( "A média de altura das pessoas com + 50 anos é : %.2f\n", media / (float)mais50 );
		
	system( "pause" ); 
}

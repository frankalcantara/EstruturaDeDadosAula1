/*
* Fazer um programa que receba e calcule o novo salário de um funcionário 
* com base na seguinte regra: 
*	salários até R$ 723,00 reajuste de 12%; 
*	salário de R$ 724,00 a R$ 893,00 reajuste de 11%; 
*	salário de R$ 894,00 a R$ 1050,00 reajuste de 10%; 
*	salário acima de R$ 1050,00 reajuste de 9%.
*/

#include <stdlib.h>
#include <stdio.h>

void main() {
	char nome[32] = {' '}, c =' ';
	float sal = 0.0;

	printf( "Informar nome do funcionário: " );
	scanf_s( "%s", &nome, sizeof(nome) );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	printf( "Informar o salário do funcionário: " );
	scanf_s( "%f", &sal );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	if (sal <= 723)
		printf( "Novo salário do funcionário %s é %f\n", nome, (sal * 1.12) );
	else
		if ((sal >= 724) && (sal <= 893))
			printf( "Novo salário do funcionário %s é %f\n", nome, (sal * 1.11) );
		else
			if ((sal >= 894) && (sal <= 1050))
				printf( "Novo salário do funcionário %s é %f\n", nome, (sal * 1.10) );
			else
				if (sal > 1050)
					printf( "Novo salário do funcionário %s é %f\n", nome, (sal * 1.09) );
	system( "pause" );
}

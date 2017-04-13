/*
* Uma empresa decide dar um aumento de 22% aos funcionários 
* cujo salário seja igual ou inferior a R$ 823,00. 
* Criar um programa que receba o nome e o salário do funcionário e 
* informe se este funcionário vai ter reajuste ou não e o 
* valor do salário reajustado.
*/

#include <stdlib.h>
#include <stdio.h>

void main() {
	float sal = 0.0;
	char nome[45] = {' '}, c = ' ';

	printf( "Informar nome do funcionário: " );
	scanf_s( "%s", &nome, sizeof(nome) );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	printf( "Informar o salário do funcionário: " );
	scanf_s( "%f", &sal );
	while ((c = getchar()) != '\n' && c != EOF) {}

	//vamos mostrar o novo salario com duas casas decimais
	if (sal <= 823.00)
		printf( "O funcionário %s terá um reajuste, o novo salário:  %.2f\n", nome, (sal * 1.22) );
	else
		printf( "O funcionário %s não terá reajuste de salário.\n", nome );
	
	system( "pause" );
}

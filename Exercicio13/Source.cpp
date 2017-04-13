/*
* Fazer um programa que receba três notas de 15 alunos, 
* calcule e imprima a média aritmética entre estas três notas
* e uma mensagem de acordo com a tabela a seguir. 
* Imprimir também o total de alunos aprovados, reprovados e em exame final.
*	Média		Mensagem
*	0 a 3,99	Reprovado
*	4 a 6,99	Exame Final
*	7 a 10		Aprovado
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	float n1 = 0.0, n2 = 0.0, n3 = 0.0, media = 0.0;
	int apr = 0, rep = 0, fin = 0, c = 0, x = 0;

	for (x = 1; x<16; x++)
	{
		system( "cls" );
		printf( "Informe as 3 notas do aluno %d:\n", x );

		printf( "\tDigite a Nota 1: ");
		scanf_s( "%f", &n1 );
		//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
		
		printf( "\tDigite a Nota 2: " );
		scanf_s( "%f", &n2 );
		//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		printf( "\tDigite a Nota 3: " );
		scanf_s( "%f", &n3 );
		//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		media = (n1 + n2 + n3) / 3;

		if (media < 4){
			printf( "Aluno %d Reprovado.\n", x );
			rep++;
		}

		if( (media >= 4) && (media < 7)){
			printf( "Aluno %d em Exame Final.\n", x );
			fin++;
		}

		if (media >= 7){
			printf( "Aluno %d Aprovado.\n", x );
			apr++;
		}
		system( "pause" );
	}
	printf( "Total de alunos Reprovados: %d", rep );
	printf( "Total de alunos em Exame Final: %d", fin );
	printf( "Total de alunos Aprovados: %d", apr );

	system( "pause" );
	return 0;
}


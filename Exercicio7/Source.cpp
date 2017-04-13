/*
* Fazer um programa que receba o valor do salário mínimo, 
* o número de horas trabalhadas, 
* o número de dependentes do funcionário e a quantidade de horas extras trabalhadas. 
* Com estes dados calcule e imprima o salário a receber do funcionário seguindo as regras a seguir:
*	a.	O valor da hora trabalhada é igual 1/5 do salário mínimo;
*	b.	O salário do mês é igual ao número de horas trabalhadas vezes o valor da hora trabalhada;
*	c.	Para cada dependente existe um acréscimo de R$ 47,00;
*	d.	Para cada hora extra trabalhada o cálculo do valor da hora trabalhada será acrescido de 50%;
*	e.	O salário bruto é igual ao salário do mês mais os valores dos dependentes mais os valores das horas extras;
*	f.	O cálculo do valor do imposto de renda retido na fonte segue a seguinte tabela:
*			IRRF	Salário Bruto
*			Isento	Inferior a R$ 450,00
*			10%		De R$ 451,00 a R$ 720,00
*			20%		Superior a R$ 720,00
*
*	g.	O salário líquido é igual ao salário bruto menos o IRRF;
*	h.	A gratificação segue a seguinte tabela:
*			Salário Líquido		Gratificação
*			Até R$ 835,00		R$ 150,00
*			Superior R$ 835,00	R$ 130,00
*
*	i.	O salário a receber do funcionário é igual ao salário líquido mais a gratificação.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	float sal_min = 0.0, val_hora = 0.0, sal_mes = 0.0, irrf = 0.0;
	int horas_tra = 0, horas_ext = 0, depe = 0, c = 0;

	printf( "Informar valor do salário mínimo: " );
	scanf_s( "%f", &sal_min );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	printf( "Informar horas trabalhadas: " );
	scanf_s( "%d", &horas_tra );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	printf( "Informar horas extras: " );
	scanf_s( "%d", &horas_ext );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	printf( "Informar número de dependentes: " );
	scanf_s( "%d", &depe );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	val_hora = sal_min / 5;
	printf( "\nO valor da hora trabalhada é: %0.2f\n", val_hora );
	sal_mes = val_hora * horas_tra;
	printf( "A parcela do salario devido as horas trabalhadas é: %0.2f\n", sal_mes );
	sal_mes += (depe * 47);
	printf( "Acrescentando a gratificação por dependente temos: %0.2f\n", sal_mes );
	sal_mes += (val_hora * horas_ext * 1.5);
	printf( "Acrescentando as horas extras temos o salário bruto de: %0.2f\n", sal_mes );

	if (sal_mes > 720) {
		irrf = (sal_mes * 0.2);
		printf( "Descontando de imposto de renda de 20%: %0.2f\n", irrf );
	} else if (sal_mes > 450) {
			irrf = (sal_mes * 0.1);
			printf( "Descontando do imposto de renda de 10%: %0.2f\n", irrf );
	} else {
		irrf = 0;
		printf( "Não houve desconto do imposto de renda \n" );
	}
	sal_mes -= irrf;
	printf( "Descontando o imposto de renda o salário líquido é de: %0.2f\n", sal_mes );

	if (sal_mes <= 835)
		sal_mes += 150;
	else
		sal_mes += 130;

	//vamos mostrar o salário com apenas duas casas decimais
	printf( "O salário do mês do funcionário, incluíndo a gratificação é : %0.f\n", sal_mes );
	system( "pause" );
}

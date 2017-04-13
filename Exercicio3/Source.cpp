/*
* Fazer um programa para verificar se uma senha digitada por um usuário é válida ou não. 
* A senha padrão deve ser “abcxyz”. O programa deve informar se a senha é não válida.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main() {
	char senha[32] = {' '};

	printf( "Informar a senha: " );
	//precisamos indicar o tamanho do string que será copiado
	scanf_s( "%s", &senha, sizeof(senha) );
	//para comparar vamos utilizar uma função da biblioteca
	//string.h a função strcmp que devolve: 
	// um número >0 se str2 > str1
	// um número <0 se str2 < str1
	// zero se str1 == str2
	if (strcmp( senha, "abcxyz" ) == 0)
		printf( "Senha Correta.\n" );
	else
		printf( "Senha Incorreta\n" );
	system( "pause" );
}

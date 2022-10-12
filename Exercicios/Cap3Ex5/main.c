#include <stdio.h>
#include <stdlib.h>

/*
5) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua
idade e do ano atual.
*/

int main()
{
	int an, idade, aa = 2022;

	printf("Digite a Idade: ");
	scanf("%d", &idade);

	an = aa - idade;

	printf("\nSeu ano de nascimento e: %d", an);
	return 0;
}
#include <stdlib.h>
#include <stdio.h>

/*
7) Fa�a um programa que leia um valor em reais e a cota��o do d�lar. Em seguida,
imprima o valor correspondente em d�lares.
*/

int main() {
	int ret = 0;
	float dol, rs;

	printf("Digite o valor em Reais: ");
	scanf_s("%f", &rs);

	dol = rs / 5.25;
	
	printf("Valor em Dollar e: %f", dol);

	return ret;
}
#include <stdio.h>
#include <stdlib.h>

/*
3) Fa�a um programa que leia tr�s valores inteiros e mostre sua soma.
*/

int main() {
	int w, x, y, z;
	printf("Digite primeiro numero: ");
	scanf_s("%d", &w);
	printf("Digite segundo numero: ");
	scanf_s("%d", &x);
	printf("Digite terceiro numero: ");
	scanf_s("%d", &y);

	z = w + x + y;

	printf("Soma total: %d", z);
	return 0;
}
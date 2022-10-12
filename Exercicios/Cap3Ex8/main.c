#include <stdio.h>
#include <stdlib.h>

/*
8) Leia um valor que represente uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) +
32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

int main() {
	int ret = 0;
	float F, C;
	printf("Digite a temperatura em Celsius: ");
	scanf_s("%f", &C);

	F = C * (9.0 / 5.0) + 32.0;

	printf("Temperatura em Fahrenheit e: %f", F);

	return ret;
}
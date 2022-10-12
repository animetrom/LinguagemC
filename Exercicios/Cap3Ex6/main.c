#include <stdio.h>
#include <stdlib.h>

/*
6) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s.
*/

int main() {
	int ret = 0, km, ms;

	printf("Digite a velocidade: ");
	scanf_s("%d", &km);

	ms = km / 36;

	printf("\nA velocudade e %dm/s!", ms);
	
	return ret;
}
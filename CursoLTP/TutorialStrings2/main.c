#include <stdio.h>
#include <stdlib.h>

/*

Aula 31/08/22
Descrição; Este programa visa ensinar sobre strings.
Uma string começa do caracter incial e encerra até achar o caracter nulo (\0).

*/

int main() {
	
	int m1[2][2];
	int conta = 1;
	
	for (int i = 0; i < 2; i++) {

		for (int j = 0; j < 2; j++) {
			m1[i][j] = conta;
			conta += 1;
		}
	}
	/*
	char MeuNome[15] = "Joao Pedro"; // Toda string termina com caracter Nulo (\0)
	char outroNome[20];

	int Tamanho = 0, j = 0;
	Tamanho = strlen(MeuNome); // Mostra o tamanho da string
	
	strcpy(outroNome, MeuNome);

	/*
	for (j = 0; j < Tamanho; j++) 
		outroNome[j] = MeuNome[j];

		outroNome[j] = '\0';*/
		//printf("\nOutro = %s", outroNome);
	/*
	while (MeuNome[j++]) ++Tamanho;

	for (int i = 0; i < Tamanho; i++) {
		printf("Posicao i %d o Caractere e = %c\n",
			i,
			MeuNome[i]
		);
	}

	//printf("Tamanho e: %d", Tamanho);
	*/
	return 0;
}
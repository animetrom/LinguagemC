#include <stdio.h>
#include <stdlib.h>

int main() {
	char MeuNome[15] = "Joao Pedro"; // Toda string termina com caracter Nulo (\0)

	for (int i = 0; i < 10; i++) {
		printf("Posicao i %d o Caractere e = %c\n",
			i,
			MeuNome[i]
		);
	}
	return 0;
}
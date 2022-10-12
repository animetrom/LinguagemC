#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char salute[] = "Saudacoes,";
	char nome[80] = "Alberto";
  	printf ("%s%s\n", salute, nome + 4);
	return 0;
}
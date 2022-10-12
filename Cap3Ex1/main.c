#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int ant;
    int suc;
    printf("Digite um numero: ");
    scanf("%i", &n);
    ant = n-1;
    suc = n+1;
    printf("\nAntecessor = %d ", ant);
    printf("\nSucessor = %d ", suc);
    return 0;
}

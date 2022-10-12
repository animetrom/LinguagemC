#include <stdio.h>
#include <stdlib.h>

/*
4) Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.
*/

int main()
{
    float a = 5, b = 7, c = 9, d = 8, med, total;

    med = a + b + c + d;
    total = med / 4;

    printf("Media e: %f", total);
    return 0;
}
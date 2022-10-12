#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num1, Num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &Num1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &Num2);

    if (Num1 > Num2) {
        printf("%d e maior que %d", Num1, Num2);
    }
    else {
    printf("%d nao e maior que %d", Num1, Num2);
    }
    return 0;
}

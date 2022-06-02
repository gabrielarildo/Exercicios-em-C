/*Soma de Dois valores*/

#include <stdio.h>

void main()
{
    int a, b, soma = 0;

    printf(" Digite um valor: ");
    scanf("%d", &a);

    printf(" Digite outro valor: ");
    scanf("%d", &b);

    soma = a + b;

    printf("\n %d + %d = %d", a, b, soma);
}

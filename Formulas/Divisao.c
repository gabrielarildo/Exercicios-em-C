/*Divisao de Dois valores*/

#include <stdio.h>

void main()
{
    float a, b, divisao = 0;

    printf(" Digite um valor: ");
    scanf("%f", &a);

    printf(" Digite outro valor: ");
    scanf("%f", &b);

    divisao = a / b;

    printf("\n %.2f / %.2f = %.2f", a, b, divisao);
}

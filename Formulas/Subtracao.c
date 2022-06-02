/*Subtração de Dois valores*/

#include <stdio.h>

void main()
{
    int a, b, subtrair = 0;

    printf(" Digite um valor: ");
    scanf("%d", &a);

    printf(" Digite outro valor: ");
    scanf("%d", &b);

    subtrair = a - b;

    printf("\n %d - %d = %d", a, b, subtrair);
}

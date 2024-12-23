#include <stdio.h>

/* escreva um programa completo que calcule o produto de
três inteiros. */

void main(void)
{
    int a, b, c, resultado;

    printf("Digite 3 inteiros: \n");
    scanf("%d%d%d", &a, &b, &c);

    resultado = a*b*c;

    printf("O resultado é igual a %d\n", resultado);
}
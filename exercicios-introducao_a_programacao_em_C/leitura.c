#include <stdio.h>

/* Ler um inteiro do teclado e armazenar o valor digita-
do na variável inteira a. */

void main(void)
{
    int a;
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Teu número é igual a %d\n", a);
}
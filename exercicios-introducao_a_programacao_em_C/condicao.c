#include <stdio.h>

/* Se o número não for igual a 7, exibir “A variável
número não é igual a 7”. */

void main(void)
{
    int a;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    if (a != 7)
    printf("Número %d é diferente do 7\n", a);

}
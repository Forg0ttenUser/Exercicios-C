#include <stdio.h>


void main(void)
{
    int a, b;
    printf("Digite o 1° inteiro: ");
    scanf("%d", &a);
    printf("Digite o 2° inteiro: ");
    scanf("%d", &b);

    if (a > b) printf("%d é maior.\n", a);
    if (b > a) printf("%d é maior.\n", b);
    if ( a == b) printf("Esses números são iguais.\n");
}
#include <stdio.h>

/* Escreva um programa que

peça ao usuário que digite dois inteiros, obtenha os nú-
meros e depois imprima o maior número seguido das

palavras ‘é maior’. Se os números forem iguais, impri-
ma a mensagem “Esses números são iguais”. Use

apenas a forma de seleção única da instrução if que
você aprendeu neste capítulo.*/

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
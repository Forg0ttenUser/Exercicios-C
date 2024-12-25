#include <stdio.h>


/* Diâmetro, circunferência e área de um círculo.
Escreva um programa que leia o raio de um círculo e
informe o diâmetro, a circunferência e a área do círculo.
Utilize o valor constante 3,14159 para p. Realize cada
um desses cálculos dentro das instruções printf e use
o especificador de conversão %f. [Nota: neste capítulo,
discutimos apenas constantes e variáveis inteiras. No Ca-
pítulo 3, discutiremos os números em ponto flutuante,
ou seja, valores que podem ter pontos decimais.] */

int main(void)
{
    int raio;
    printf("Digite o raio de uma círculo: ");
    scanf("%d", &raio);
    printf("Diâmetro: %f\n", 2.0*raio);
    printf("Área: %f\n", 3.14159*raio*raio);
    printf("Circunferência: %f\n", 3.14159*2*raio*raio);
}
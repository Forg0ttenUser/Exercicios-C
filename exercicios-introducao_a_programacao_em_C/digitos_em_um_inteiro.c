#include <stdio.h>

/* inteiro. Escreva um progra-
ma que leia um número de cinco dígitos, separe o número

em dígitos individuais e imprima os dígitos separados um
do outro por três espaços cada um. [Dica: use combinações
da divisão inteira e da operação módulo.] */

void main(void)
{
    int a, b, c, d, e, entrada;

    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &entrada);

    /* 1° dígito: */

    a = entrada/10000;
    
    /* 2° dígito: */

    b = entrada/1000 - a*10;

    /* 3° dígito: */

    c = entrada/100 - (a*100 + b * 10);

    /* 4 dígito: */

    d = entrada/10 - (a*1000 + b * 100 + c * 10);

    /* 5 dígito: */

    e = entrada - (a*10000 + b * 1000 + c * 100 + d * 10);

    /* exibição: */

    printf("%d   %d   %d   %d   %d\n", a,b,c,d,e);


}
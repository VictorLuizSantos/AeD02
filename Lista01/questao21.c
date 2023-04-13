#include <stdio.h>
#include <stdlib.h>
#include "questao21.h"

void entrada21(int *num1, int *num2, int *num3) {
    printf("\n\nDigite o numero primeiro: \n");
    scanf("%d", num1);
    printf("\nDigite o numero segundo: \n");
    scanf("%d", num2);
    printf("\nDigite o numero terceiro: \n");
    scanf("%d", num3);
}

void processamento21(int *num1, int *num2, int *num3) {
    int aux = 0;
    if (*num1 > *num3) {
        aux = *num1;
        *num1 = *num3;
        *num3 = aux;
    }
    if (*num1 > *num2) {
        aux = *num1;
        *num1 = *num2;
        *num2 = aux;
    }
    if (*num2 > *num3) {
        aux = *num2;
        *num2 = *num3;
        *num3 = aux;
    }
}

void saida21(int num1, int num2, int num3) {
    printf("\nOrdem crescente: %d, %d e %d\n", num1, num2, num3);
}
void questao21(void) {

    int num1, num2, num3;

    entrada21(&num1, &num2, &num3);
    processamento21(&num1, &num2, &num3);
    saida21(num1, num2, num3);
}

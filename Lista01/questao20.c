#include <stdio.h>
#include <stdlib.h>
#include "questao20.h"

void entrada20(int *num1, int *num2, int *num3) {
    printf("\n\nDigite o numero primeiro: \n");
    scanf("%d", num1);
    printf("\nDigite o numero segundo: \n");
    scanf("%d", num2);
    printf("\nDigite o numero terceiro: \n");
    scanf("%d", num3);
}

void processamento20(int *num1, int *num2, int *num3, int *maior) {
    if (*num1 > *num2 && *num1 > *num3) {
        *maior = *num1;
    }
    else if (*num2 > *num1 && *num2 > *num3) {
        *maior = *num2;
    }
    else {
        *maior = *num3;
    }
}

void saida20(int maior) {
    printf("\nMaior valor: %d\n", maior);
}
void questao20(void) {

    int num1, num2, num3, maior;

    entrada20(&num1, &num2, &num3);
    processamento20(&num1, &num2, &num3, &maior);
    saida20(maior);
}

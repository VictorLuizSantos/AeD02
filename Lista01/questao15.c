#include <stdio.h>
#include <stdlib.h>
#include "questao15.h"

void entrada15(float *num1, float *num2) {
    printf("\n\nDigite primeiro numero: \n");
    scanf("%f", num1);
    printf("\n\nDigite segundo numero: \n");
    scanf("%f", num2);
}

void processamento15() {
}

void saida15(float num1, float num2) {
    if (num1 > num2) {
    printf("\nMaior numero: %.2f\n", num1);
    }
    else if (num2 > num1) {
    printf("\nMaior numero: %.2f\n", num2);
    }
    else {
        printf("\nNumeros iguais!\n");
    }
}
void questao15(void) {

    float num1, num2;

    entrada15(&num1, &num2);
    //processamento15(&nota1);
    saida15(num1, num2);
}

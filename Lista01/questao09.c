#include <stdio.h>
#include <stdlib.h>
#include "questao09.h"

void entrada9(float *num) {
    printf("\n\nDigite numero: \n");
    scanf("%f", num);
}

void processamento9() {
}

void saida9(float num) {
    if (num > 100.0) {
    printf("\nNumero maior que 100!\n");
    }
    else {
    printf("\nTudo certo!\n");
    }
}
void questao09(void) {

    float num;

    entrada9(&num);
    //processamento9();
    saida9(num);
}

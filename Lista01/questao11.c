#include <stdio.h>
#include <stdlib.h>
#include "questao11.h"

void entrada11(float *num) {
    printf("\n\nDigite numero: \n");
    scanf("%f", num);
}

void processamento11() {
}

void saida11(float num) {
    if (num > 100.0  && num < 500.0) {
    printf("\nNumero entre 100 e 500\n");
    }
    else {
    printf("\nNumero fora do range especificado\n");
    }
}
void questao11(void) {

    float num;

    entrada11(&num);
    //processamento11();
    saida11(num);
}

#include <stdio.h>
#include <stdlib.h>
#include "questao06.h"

void entrada6(float *valorAntigo, float *valorNovo) {
    printf("\n\nDigite valor antigo: \n");
    scanf("%f", valorAntigo);
    printf("Digite valor novo: \n");
    scanf("%f", valorNovo);
}

void processamento6(float *valorAntigo, float *valorNovo, float *aumento) {
    *aumento = (*valorNovo - *valorAntigo) / *valorAntigo * 100.0;
}

void saida6(float aumento) {
    printf("\nPorcentagem de aumento %.2f\n", aumento);
}

void questao06(void) {

    float valorAntigo, valorNovo, aumento;

    entrada6(&valorAntigo, &valorNovo);
    processamento6(&valorAntigo, &valorNovo, &aumento);
    saida6(aumento);
}

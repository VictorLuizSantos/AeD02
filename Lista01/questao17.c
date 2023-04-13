#include <stdio.h>
#include <stdlib.h>
#include "questao17.h"

void entrada17(float *compra) {
    printf("\n\nDigite o valor do produto: \n");
    scanf("%f", compra);
}

void processamento17(float *compra, float *venda) {
    if (*compra < 200) {
        *venda = *compra * 1.5;
    }
    else {
        *venda = *compra * 1.3;
    }
}

void saida17(float venda) {
    printf("\nValor do produto para venda: %.2f\n", venda);
}

void questao17(void) {

    float compra, venda;

    entrada17(&compra);
    processamento17(&compra, &venda);
    saida17(venda);
}

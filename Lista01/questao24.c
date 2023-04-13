#include <stdio.h>
#include <stdlib.h>
#include "questao24.h"

void entrada24(int *compra, int *pagamento) {
    printf("\nDigite o valor da compra: \n");
    scanf("%d", compra);
    printf("\nDigite o valor do pagamento: \n");
    scanf("%d", pagamento);
}

void processamento24(int *compra, int *pagamento, int *troco, int *nota1, int *nota10, int *nota100) {
    *troco = *pagamento - *compra;
    *nota100 = *troco / 100;
    *nota10 = (*troco - *nota100 * 100) / 10;
    *nota1 = *troco % 10;
}

void saida24(int compra, int pagamento, int nota1, int nota10, int nota100) {
    if (compra > pagamento) {
        printf("\nPagamento negado\n");
    }
    else {
        printf("\nTroco em notas de R$100: %d, R$10: %d, R$1: %d\n", nota100, nota10, nota1);
    }
}

void questao24(void) {

    int compra, pagamento, troco, nota1, nota10, nota100;

    entrada24(&compra, &pagamento);
    processamento24(&compra, &pagamento, &troco, &nota1, &nota10, &nota100);
    saida24(compra, pagamento, nota1, nota10, nota100);
}

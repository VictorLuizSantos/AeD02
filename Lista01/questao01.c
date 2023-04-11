#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void entrada(int *num1, int *num2) {
    printf("Digite primeiro valor: \n");
    scanf("%d", num1);
    printf("Digite segundo valor: \n");
    scanf("%d", num2);
}

void processamento(int *num1, int *num2, int *saida) {
    *saida = (*num1 + *num2) * 3;
}

void saida (int saida) {
    printf("Resultado: %d\n", saida);
}

void questao01() {
    int numero1;
    int numero2;
    int resultado;

    entrada(&numero1, &numero2);

    processamento(&numero1, &numero2, &resultado);

    saida(resultado);
}

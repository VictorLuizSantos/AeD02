#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"

void entrada2(int *num1, int *num2, int *num3) {
    printf("Digite primeira nota: \n");
    scanf("%d", num1);
    printf("Digite segunda nota: \n");
    scanf("%d", num2);
    printf("Digite terceira nota: \n");
    scanf("%d", num3);
}

void processamento2(int *num1, int *num2, int *num3, float *saida) {
    *saida = (*num1 + *num2 + *num3) / 3.0;
}

void saida2(float saida) {
    printf("Media das notas: %.2f\n", saida);
}

void questao02(){

    int numero1;
    int numero2;
    int numero3;
    float resultado;

    entrada2(&numero1, &numero2, &numero3);

    processamento2(&numero1, &numero2, &numero3, &resultado);

    saida2(resultado);
}

#include <stdio.h>
#include <stdlib.h>
#include "questao03.h"

void entrada3(int *num1, int *peso1, int *num2, int *peso2) {
    printf("\n\nDigite primeiro numero: \n");
    scanf("%d", num1);
    printf("Digite primeiro peso: \n");
    scanf("%d", peso1);
    printf("Digite segundo numero: \n");
    scanf("%d", num2);
    printf("Digite segundo peso: \n");
    scanf("%d", peso2);
}

void processamento3(int *num1, int *peso1, int *num2, int *peso2, float *media) {
    *media = ((*num1 * *peso1) + (*num2 * *peso2)) / (float)(*peso1 + *peso2);
}

void saida3(float media) {
    printf("\nMedia ponderada das notas: %.2f\n", media);
}

void questao03(void) {

    int numero1, peso1, numero2, peso2;
    float media;

    entrada3(&numero1, &peso1, &numero2, &peso2);
    processamento3(&numero1, &peso1, &numero2, &peso2, &media);
    saida3(media);
}

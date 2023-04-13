#include <stdio.h>
#include <stdlib.h>
#include "questao12.h"

void entrada12(float *nota1, float *nota2) {
    printf("\n\nDigite primeira nota: \n");
    scanf("%f", nota1);
    printf("\nDigite segunda nota: \n");
    scanf("%f", nota2);
}

void processamento12(float *nota1, float *nota2, float *media) {
    *media = (*nota1 + *nota2) / 2.0;
}

void saida12(float media) {
    if (media >= 7.0) {
    printf("\nAprovado!\n");
    }
    else {
    printf("\nReprovado...\n");
    }
}
void questao12(void) {

    float nota1, nota2, media;

    entrada12(&nota1, &nota2);
    processamento12(&nota1, &nota2, &media);
    saida12(media);
}

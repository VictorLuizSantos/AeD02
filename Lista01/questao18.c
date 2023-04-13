#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"

void entrada18(float *nota1, float *nota2) {
    printf("\n\nDigite a primeira nota: \n");
    scanf("%f", nota1);
    printf("\nDigite a segunda nota: \n");
    scanf("%f", nota2);
}

void processamento18(float *nota1, float *nota2, float *media) {
    *media = (*nota1 + *nota2) / 2.0;
}

void saida18(float media) {
    if (media >= 7.0) {
    printf("\nAprovado!\n");
    }
    else if (media < 3.0) {
    printf("\nReprovado\n");
    }
    else {
        printf("\nProva final\n");
    }
}
void questao18(void) {

    float nota1, nota2, media;

    entrada18(&nota1, &nota2);
    processamento18(&nota1, &nota2, &media);
    saida18(media);
}

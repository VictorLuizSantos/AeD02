#include <stdio.h>
#include <stdlib.h>
#include "questao08.h"

void entrada8(float *kmh) {
    printf("\n\nDigite a velocidade em km/h: \n");
    scanf("%f", kmh);
}

void processamento8(float *kmh, float *ms) {
    *ms = *kmh / 3.6;
}

void saida8(float ms) {
    printf("\velocidade em m/s:  %.2f\n", ms);
}

void questao08(void) {

    float kmh, ms;

    entrada8(&kmh);
    processamento8(&kmh, &ms);
    saida8(ms);
}

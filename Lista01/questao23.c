#include <stdio.h>
#include <stdlib.h>
#include "questao23.h"

void entrada23(char tipo, int *percusso) {
    tipo = "d";
    while (tipo != "a" || tipo != "b" || tipo != "c") {
        puts("\n\nDigite o tipo de carro (a, b ou c): \n");
        gets(tipo);
    }
    printf("\nDigite o poercusso em quilometros: \n");
    scanf("%d", percusso);
}

void processamento23(char tipo, int *percusso, float *consumo) {
    if (tipo == "a") {
        *consumo = *percusso / 12.0;
    }
    else if (tipo == "b") {
        *consumo = *percusso / 9.0;
    }
    else {
        *consumo = *percusso / 8.0;
    }
}

void saida23(float consumo) {
    printf("\nConsumo:  %f\n", consumo);
}

void questao23(void) {

    char tipo;
    int percusso;
    float consumo;

    entrada23(tipo, &percusso);
    processamento23(tipo, &percusso, &consumo);
    saida23(consumo);
}

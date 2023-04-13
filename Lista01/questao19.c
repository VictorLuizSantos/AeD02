#include <stdio.h>
#include <stdlib.h>
#include "questao19.h"

void entrada19(int *lado1, int *lado2, int *lado3) {
    printf("\n\nDigite lado 1: \n");
    scanf("%d", lado1);
    printf("\nDigite lado 2: \n");
    scanf("%d", lado2);
    printf("\nDigite lado 3: \n");
    scanf("%d", lado3);
}

void processamento19(int *lado1, int *lado2, int *lado3) {
}

void saida19(int lado1, int lado2, int lado3) {
    if (lado1 == lado2 && lado2 == lado3) {
    printf("\nEquilatero\n");
    }
    else if (lado1 == lado2 || lado1 ==lado3 || lado2 == lado3) {
    printf("\nIsosceles\n");
    }
    else {
        printf("\nEscaleno\n");
    }
}
void questao19(void) {

    int lado1, lado2, lado3;

    entrada19(&lado1, &lado2, &lado3);
    //processamento19(&lado1, &lado2, &lado3);
    saida19(lado1, lado2, lado3);
}

#include <stdio.h>
#include <stdlib.h>
#include "questao13.h"

void entrada13(int *num) {
    printf("\n\nDigite numero: \n");
    scanf("%d", num);
}

void processamento13() {
}

void saida13(int num) {
    if (num % 5 == 0) {
    printf("\nDivisivel por 5\n");
    }
    else {
    printf("\nNao divisivel por 5\n");
    }
}
void questao13(void) {

    int num;

    entrada13(&num);
    //processamento13(&nota1);
    saida13(num);
}

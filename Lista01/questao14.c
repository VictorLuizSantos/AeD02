#include <stdio.h>
#include <stdlib.h>
#include "questao14.h"

void entrada14(int *num) {
    printf("\n\nDigite numero: \n");
    scanf("%d", num);
}

void processamento14() {
}

void saida14(int num) {
    if (num % 2 == 0) {
    printf("\nNumero par\n");
    }
    else {
    printf("\nNumero impar\n");
    }
}
void questao14(void) {

    int num;

    entrada14(&num);
    //processamento14(&nota1);
    saida14(num);
}

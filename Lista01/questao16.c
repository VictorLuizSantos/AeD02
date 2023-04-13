#include <stdio.h>
#include <stdlib.h>
#include "questao16.h"

void entrada16(float *bruto) {
    printf("\n\nDigite o salario: \n");
    scanf("%f", bruto);
}

void processamento16(float *bruto, float *liquido) {
    if (*bruto < 2000) {
        *liquido = *bruto * 0.9;
    }
    else {
        *liquido = *bruto * 0.8;
    }
}

void saida16(float liquido) {
    printf("\nSalario liquido: %.2f\n", liquido);
}

void questao16(void) {

    float bruto, liquido;

    entrada16(&bruto);
    processamento16(&bruto, &liquido);
    saida16(liquido);
}

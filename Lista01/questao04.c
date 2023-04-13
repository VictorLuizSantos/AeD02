#include <stdio.h>
#include <stdlib.h>
#include "questao04.h"

void entrada4(float *salarioInicial, int *aumento) {
    printf("\n\nDigite salario inicial: \n");
    scanf("%f", salarioInicial);
    printf("Digite porcentagem de aumento de 0-100 (ex: 95): \n");
    scanf("%d", aumento);
}

void processamento4(float *salarioInicial, int *aumento, float *salarioFinal) {
    *salarioFinal = *salarioInicial * (1 + (*aumento / 100.0));
}

void saida4(float salarioFinal) {
    printf("\nSalario final: %.2f\n", salarioFinal);
}

void questao04(void) {

    int aumento;
    float salarioInicial, salarioFinal;

    entrada4(&salarioInicial, &aumento);
    processamento4(&salarioInicial, &aumento, &salarioFinal);
    saida4(salarioFinal);
}

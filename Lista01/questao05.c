#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void entrada5(float *salarioBase, int *dependentes) {
    printf("\n\nDigite salario base: \n");
    scanf("%f", salarioBase);
    printf("Digite quantidade de dependentes: \n");
    scanf("%d", dependentes);
}

void processamento5(float *salarioBase, int *dependentes, float *salarioLiquido) {
    *salarioBase = *salarioBase + ((float)*dependentes * 32.0);
    *salarioLiquido = *salarioBase - (*salarioBase * 27.5 / 100.0);
}

void saida5(float salarioLiquido) {
    printf("\nSalario liquido: %.2f\n", salarioLiquido);
}

void questao05(void) {

    int dependentes;
    float salarioBase, salarioLiquido;

    entrada5(&salarioBase, &dependentes);
    processamento5(&salarioBase, &dependentes, &salarioLiquido);
    saida5(salarioLiquido);
}

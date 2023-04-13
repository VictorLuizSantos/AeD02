#include <stdio.h>
#include <stdlib.h>
#include "questao07.h"

void entrada7(float *raio) {
    printf("\n\nDigite valor do raio: \n");
    scanf("%f", raio);
}

void processamento7(float *raio, float *diametro, float *perimetro, float *area, float *volume) {
    *diametro = 2.0 * *raio;
    *perimetro = *diametro * 3.14;
    *area = 3.14 * *raio * *raio;
    *volume = 1.33 * 3.14 * *raio * *raio * *raio;
}

void saida7(float diametro, float perimetro, float area, float volume) {
    printf("\nDiametro %.2f\n", diametro);
    printf("\nPerimetro %.2f\n", perimetro);
    printf("\nArea %.2f\n", area);
    printf("\nVolume%.2f\n", volume);
}

void questao07(void) {

    float raio, diametro, perimetro, area, volume;

    entrada7(&raio);
    processamento7(&raio, &diametro, &perimetro, &area, &volume);
    saida7(diametro, perimetro, area, volume);
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "questao22.h"

void entrada22(char **cidade, int *eleitores, int *maisVotado) {
    printf("\nDigite o o nome da cidade: \n");
    scanf("%s", cidade);
    printf("\nDigite o total de eleitores: \n");
    scanf("%d", eleitores);
    printf("\nDigite a quantidade de votos do primeiro candidato: \n");
    scanf("%d", maisVotado);
}

void processamento22(bool *validador, int *eleitores, int *maisVotado) {

    if  (*maisVotado < (*eleitores / 2)) {
            *validador = true;
         }
         else {
             *validador = false;
         }
}

void saida22(char cidade, bool validador) {

    if  (validador) {
    printf("\nHaverá segundo turno em %s\n", cidade);
    }
    else {
         printf("\nNao haverá segundo turno em %s\n", cidade);
    }
}
void questao22(void) {

    char cidade[20];
    bool validador;
    int eleitores, maisVotado;

    entrada22(&cidade, &eleitores, &maisVotado);
    processamento22(&validador, &eleitores, &maisVotado);
    saida22(cidade, validador);
}

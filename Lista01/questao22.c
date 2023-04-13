#include <stdio.h>
#include <stdlib.h>
#include "questao22.h"

void entrada22(char *cidade, int *eleitores, int *maisVotado) {
    puts("\n\nDigite o nome da cidade: \n");
    gets(cidade);
    printf("\nDigite o total de eleitores: \n");
    scanf("%d", eleitores);
    printf("\nDigite a quantidade de votos do primeiro candidato: \n");
    scanf("%d", maisVotado);
}

void processamento22(char *cidade, int *eleitores, int *maisVotado) {
}

void saida22(char cidade, int eleitores, int maisVotado) {
    char str[20];
    cidade = &str[20];
    if (maisVotado < (eleitores / 2)) {
    printf("\nHaverá segundo turno em %s\n", cidade);
    }
    else {
         printf("\nNao haverá segundo turno em %s\n", cidade);
    }
}
void questao22(void) {

    char str[20];
    char *cidade = &str[20];
    int eleitores, maisVotado;

    entrada22(cidade, &eleitores, &maisVotado);
    //processamento22(&cidade, &eleitores, &maisVotado);
    saida22(cidade, eleitores, maisVotado);
}

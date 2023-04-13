#include <stdio.h>
#include <stdlib.h>
#include "questao10.h"

void entrada10(char *senha) {
    printf("\n\nDigite senha de 10 caracteres: \n");
    scanf("%s", senha);
}

void processamento10(char *senha) {
    *senha = tolower(*senha);
}

void saida10(char senha) {
    if (*senha == "linguagemc") {
    printf("\nSenha valida\n");
    }
    else {
    printf("\nSenha invalida\n");
    }
}
void questao10(void) {

    char senha[10];

    entrada10(&senha);
    processamento10(&senha);
    saida10(senha);
}

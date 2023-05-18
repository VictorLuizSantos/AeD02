#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "questao10.h"

/*void upper (char **senha, char **senhaMaiuscula) {
    int i  = 0;
    while (senha[i] != "/0") {
        senhaMaiuscula[i] = toupper(senha[i]);
        i++;
    }
    senhaMaiuscula[i] =  "/0";
}*/

void entrada10(char **senha) {
    printf("\n\nDigite senha de ate 20 caracteres: \n");
    scanf("%s", senha);
}

void processamento10 (char **senha, bool  *validacao) {

    //void upper(char **senha, char senhaMaiuscula);

    if (strcmp(senha, "LINGUAGEMC") == 0)  {
       *validacao = true;
    }
    else {
        *validacao = false;
    }
}

void saida10(bool validacao) {
    if (validacao) {
    printf("\nSenha valida\n");
    }
    else {
    printf("\nSenha invalida\n");
    }
}

void questao10(void) {

    char senha[20];
    //char senhaMaiuscula[20];
    bool validacao;

<<<<<<< HEAD
    entrada10(&senha);
    processamento10(&senha, &validacao);
=======
    entrada10(senha);
    processamento10(senha, &validacao);
>>>>>>> df2501b40f0659aefb27314d513fd6670e693536
    saida10(validacao);
}

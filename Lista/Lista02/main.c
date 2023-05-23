#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

//------------------BUBBLE------------------
void bubble() {

    int ordenar[SIZE];
    int auxiliar, i , incremento;

    printf("\nDigite 6 elementos do vetor, apertando ENTER em cada um apos digitar: \n");

    for (i = 0; i < SIZE; i++) {
    scanf("%d", &ordenar[i]);
    }

    printf("Vetor para ordenar: \n---------------------------\n");

    for (i = 0; i < SIZE; i++) {
        printf(" | %d", ordenar[i]);
    }

    printf(" |\n---------------------------");

    for (incremento = 1; incremento <  SIZE; incremento++) {
        for (i = 0; i < SIZE - 1; i++) {
            if (ordenar[i] > ordenar[i + 1]) {
                auxiliar = ordenar[i];
                ordenar[i] = ordenar[i + 1];
                ordenar[i + 1] = auxiliar;
            }
        }
    }

    printf("\n\nVetor ordenado: \n---------------------------\n");

    for (i = 0; i < SIZE; i++) {
        printf(" | %d", ordenar[i]);
    }
    printf(" |\n---------------------------");
}


// ------------------INSERCAO------------------
void insercao() {

    int ordenar[SIZE];
    int auxiliar, i, j;

    printf("\nDigite 6 elementos do vetor, apertando ENTER em cada um apos digitar: \n");

     for (i = 0; i < SIZE; i++) {
    scanf("%d", &ordenar[i]);
    }

    printf("Vetor para ordenar: \n---------------------------\n");

    for (i = 0; i < SIZE; i++) {
        printf(" | %d", ordenar[i]);
    }

    printf(" |\n---------------------------");

    for (i = 0; i < SIZE - 1; i++) {
        if (ordenar[i] > ordenar [i +1]) {
            auxiliar = ordenar[i + 1];
            ordenar[i + 1] = ordenar[i];
            ordenar[i] = auxiliar;
            j = i - 1;

            while(j >= 0) {
                if (auxiliar  < ordenar[j]) {
                    ordenar[j + 1] = ordenar[j];
                    ordenar[j] = auxiliar;
                }
                else {
                    break;
                }
                j--;
            }
        }
    }

    printf("\n\nVetor ordenado: \n---------------------------\n");

    for (i = 0; i < SIZE; i++) {
        printf(" | %d", ordenar[i]);
    }
    printf(" |\n---------------------------");
}

//------------------SELECAO------------------
void selecao() {

    int ordenar[SIZE];
    int auxiliar, i, j, menorPosicao;

    printf("\nDigite 6 elementos do vetor, apertando ENTER em cada um apos digitar: \n");

     for (i = 0; i < SIZE; i++) {
    scanf("%d", &ordenar[i]);
    }

    printf("Vetor para ordenar: \n---------------------------\n");

    for (i = 0; i < SIZE; i++) {
        printf(" | %d", ordenar[i]);
    }

    printf(" |\n---------------------------");

    for (i = 0; i < SIZE - 1; i++) {
            menorPosicao = i;
        for (j = i + 1; j < SIZE; j++) {
            if (ordenar[menorPosicao] > ordenar[j]) {
                menorPosicao = j;
                }
        }

        if (i != menorPosicao) {
            auxiliar = ordenar[i];
            ordenar[i] = ordenar[menorPosicao];
            ordenar[menorPosicao] = auxiliar;
        }
    }

     printf("\n\nVetor ordenado: \n---------------------------\n");

    for (i = 0; i < SIZE; i++) {
        printf(" | %d", ordenar[i]);
    }
    printf(" |\n---------------------------");
}

//------------------QUICKSORT------------------

void quicksort() {

}

//------------------MERGESORT------------------

void mergesort() {

    int ordenar[SIZE];
    int aux [SIZE];
    int meio = SIZE / 2;
    int fim = SIZE - 1;
    int i = 0, l = 0, j = meio + 1, k  = 0;

    printf("\nDigite 6 elementos do vetor, apertando ENTER em cada um apos digitar: \n");

     for (i = 0; i < SIZE; i++) {
    scanf("%d", &ordenar[i]);
    }

    printf("Vetor para ordenar: \n---------------------------\n");

    for (i = 0; i < SIZE; i++) {
        printf(" | %d", ordenar[i]);
    }

    printf(" |\n---------------------------");

    while (i <= meio && j <=  fim) {
        if (ordenar[i] <= ordenar[j]) {
            aux[k++] = ordenar[i++];
        }
        else {
            aux[k++] = ordenar[j++];
        }
    }
    while (i <= meio) {
        aux[k++] = ordenar[i++];
    }
    while (j <= fim) {
        aux[k++] = ordenar[j++];
    }

    for (i = l, k = 0; i <= fim; i++, k++) {
        ordenar[i] = aux[k];
    }

    printf("\n\nVetor ordenado: \n---------------------------\n");

    for (i = 0; i < SIZE; i++) {
        printf(" | %d", ordenar[i]);
    }
    printf(" |\n---------------------------");

}

//------------------MAIN------------------
int main()
{
    mergesort();

    return 0;
}

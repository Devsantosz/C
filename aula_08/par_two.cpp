#include <stdio.h>

int main(void) {
    //Declaracao com vetor de 11 pos
    int pares[11];

    //For para a exibicao de todos os valores
    for (int i = 0; i < 11; i++) {
        pares[i] = i * 2;
        printf("%d\n", pares[i]);
    }

    return 0;
}
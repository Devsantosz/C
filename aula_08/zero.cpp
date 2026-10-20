#include <stdio.h>

int main() {
    //Declaracao do vetor com valor 0
    int vetor[20] = {0};

    //Laco - Mostrando todos os indices e valores do vetor
    for (int i = 0; i < 20; i++) {
        printf("Vetor %d = %d\n", i, vetor[i]);
    }

    return 0;
}
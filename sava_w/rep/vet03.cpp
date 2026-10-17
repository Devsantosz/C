#include <stdio.h>

int main(void) {
    int vet[100];

    for (int posicao = 0; posicao < 100; posicao++) {
        vet[posicao] = 0;
    }

    printf("%d\n", vet[0]);
    return 0;
}
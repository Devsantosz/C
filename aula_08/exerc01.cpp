#include <stdio.h>

int main() {
    //Vetores e seus elementos int
    int numeros[5] = {2,4,6,8,10};
    int i;

    printf("O dobros dos numeros sao: ");

    //Recebe valor, se for menor que 5, recebe mais 1
    for(i = 0 ; i < 5; i++){
        printf("%d ", numeros[i] * 2);
    }
    //Mostra o dobro de todas as posicoes

    return 0;
}
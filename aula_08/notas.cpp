
#include <stdio.h>

int main() {
    //Valores do vetor
    float notas[5] = {7, 8, 9.5, 9.9, 5.2};
    int numero;
    //Numero para a selecao


    //Selecao de escolha
    printf("Qual nota deseja visualizar? (1 a 5): ");
    scanf("%d", &numero);

    //Busca o numero, fazendo a conta da posicao do vetor selecionado menos a posicao no vetor
    if (numero >= 1 && numero <= 5) {
        printf("Nota %d: %.1f\n", numero, notas[numero - 1]);
    } else {
        printf("Numero invalido. Digite um valor de 1 a 5.\n");
    }
    //Caso nao seja digitado nenhum dos outros

    return 0;
}
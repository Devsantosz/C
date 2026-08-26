#include <stdio.h>

int main() {
    //variaveis para armazenar a quantidade de folhas, paginas e o valor total
    int folhas;
    float paginas, valor;

    printf("Digite a quantidade de folhas: ");
    scanf("%d",&folhas);
    //Calculo da quantidade de paginas e do valor total
    paginas = folhas * 2;
    valor = paginas * 0.30;

    //Exibicao dos resultados
    printf("Quantidade de paginas: %.0f\n", paginas);
    printf("Valor total: R$ %.2f\n", valor);

    return 0;
}
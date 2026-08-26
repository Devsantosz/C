#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    //Exibicao dos resultados - fazendo as operacoes matematicas
    printf("\nSoma: %d\n", num1 + num2);
    printf("Subtracao: %d\n", num1 - num2);
    printf("Divisao: %.2f\n", (float)num1 / num2);
    printf("Multiplicacao: %d\n", num1 * num2);

    return 0;
}

    
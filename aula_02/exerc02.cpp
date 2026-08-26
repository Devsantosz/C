#include <stdio.h>

int main() {
    float salario, desconto, salarioLiquido;

    printf("Digite o salario: R$ ");
    scanf("%f", &salario);

    desconto = salario * 8 / 100;
    salarioLiquido = salario - desconto;
    //Formatacao de valores monetarios com duas casas decimais
    printf("Salario liquido: R$ %.2f", salarioLiquido);

    return 0;
}
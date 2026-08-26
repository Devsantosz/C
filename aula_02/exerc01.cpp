#include <stdio.h>

int main() {
    int atraso;
    float multa = 2.50;

    // Solicita ao usuário o atraso em dias
    printf("Digite o atraso em dias: ");
    scanf("%d", &atraso);
    //Aprendendo a usar scanf para recerber valores do usuário

    printf("O valor da multa é: R$ %.2f\n", atraso * multa);

    return 0;
}
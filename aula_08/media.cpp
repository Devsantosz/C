#include <stdio.h>

int main() {
    //Declaracao de vetor
    float notas[5];
    float soma = 0.0f;
    //declaracao de variavel

    //Laco de rep para perguntar nota e receber seu resultado
    for (int i = 0; i < 5; i++) {
        printf("Digite a nota %d do aluno: ", i + 1);
        scanf("%f", &notas[i]);
        //Add a cada posicao
        soma += notas[i];
    }

    //Calculo de nota
    printf("Media das 5 notas: %.2f\n", soma / 5);

    return 0;
}
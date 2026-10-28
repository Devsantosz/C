#include <stdio.h>

int main() {
    int matriz[2][2] = {{5, 6}, {7, 8}};
    int transposta[2][2];
    int i, j;

    // Exibir a matriz original
    printf("Matriz original:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    // Construir a matriz transposta
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Exibir a matriz transposta
    printf("\nMatriz transposta:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%4d", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}



#include <stdio.h>

int main() {
    int mat[2][2];
    int i, j;
    int resultado;

    printf("Matriz de escolha:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Elemento [%d]x[%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }

    resultado = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);

    //Resultado determinante
    printf("\nResultado: %d\n", resultado);

    return 0;
}


#include <stdio.h>

int main(){
	int mat[2][2];
	int i, j, soma;
	
	printf("Matriz de escolha: \n");
	//Perguntar ao usuario os valores
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Elemento [%d]x[%d]: ",i,j);
			scanf("%d",&mat[i][j]);
			soma+= mat[i][j];
			//A soma de todos os valores da matriz
			//Sempre ira somando a cada vez q roda
		}
	}
	//Mostrar matriz
	for(i = 0; i < 2;i++){
		for(j = 0; j < 2; j++){
			printf("%2d",mat[i][j]);
		}
		printf("\n");	
	}
	
	printf("A soma de todos os valores deu: %d", soma);
}

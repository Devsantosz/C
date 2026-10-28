#include <stdio.h>

int main(){
	//Exercicio da aula 09
	int mat[3][3]; //matriz com 3 colunas e 3 linhas
	int i, j;	//Variavel de contagem de colunas e linhas
	
	printf("Matriz de escolha: \n");
	for(i = 0; i < 3; i++){
		//comeca em 0, na linha 1 e depois vai para a coluna 2
		//[0]x[0] e dps [1]x[], [2]x[0]
		for(j = 0; j< 3; j++){
			//Priemira coluna e dps as demais colunas
			//[0]x[0] e dps [0]x[1], [0]x[2]
			printf("Elemento [%d]x[%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	
	//Exibicao da matriz
	for(i = 0; i < 3;i++){
		for(j = 0; j< 3; j++){
			printf("%2d",mat[i][j]);
		}
		printf("\n");	
	}
}

#include <stdio.h>

int main(){
	//Exercicio de contagem com estrutura de rep DO_WHILE
	int cont = 1;
	//"DO" faz o bloco ser executado ao menos uma vez
	do{
		printf("%d\n",cont);
		cont ++;
	}while(cont<=10);
	//Para depois verificar a condicao
	return 0;
}

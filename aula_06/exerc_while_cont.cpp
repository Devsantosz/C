#include <stdio.h>

int main(){
	
	int cont = 1;
	int n;
	//Pergunta ao usuario um numero
	printf("Digite um numero: ");
	scanf("%d",&n);
	//Atribui o valor a variavel n
	while(cont<=n){
		printf("%d\n",cont);
		cont ++;
	}
	//O while executa a contagem, add 1 a variavel ate chegar ao valor da variavel N
	return 0;
}

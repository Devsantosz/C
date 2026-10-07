#include <stdio.h>

int main(){
	
	int num, soma;
	
	do{
		printf("Digite um numero: ");
		scanf("%d",&num);
		//Pergunta ao usuario um valor e atribui a var num
		
		//Atribui o valor que ja tinha mais o ultimo digitado
		soma = soma + num;
	}while(num != 0);
	//Se o ultimo valor for 0, ele encerra o while
	printf("%d", soma);
	//mostra a soma de todos os numeros digitados
	return 0;
}

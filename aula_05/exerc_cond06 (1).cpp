#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);

	
	if(numero == 0)
		printf("O numero � nulo.\n");
	else if(numero > 0)
		printf("O numero � positivo. \n");
	else
		printf("O numero � negativo. \n");
		
	if(numero % 3 == 0)
		printf("O numero � multiplo de 3. \n");
	else
		printf("O numero n�o  � multiplo de 3. \n");
		
	return 0;
}

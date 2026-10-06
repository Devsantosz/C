#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	float soma;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	
	if(soma > 10)
		printf("O numero e maior que 10!");
	else
		printf("O numero e menor ou igual a 10!");
		
	return 0;
}
 
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	float sub;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	
	sub = num1 - num2;
	
	//utilizando condico em C++ para verificar se o numero e maior, menor ou igual a 10
	if(sub == 0)
		printf("O numero � igual a 0!");
	else if(sub < 10)
		printf("O numero � menor que 10!");
	else
		printf("O numero � maior que 10!");
		
	return 0;
}

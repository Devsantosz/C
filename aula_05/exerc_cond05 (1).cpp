#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);

	
	if(idade < 18)
		printf("Paga meia!");
	else if(idade >= 18 && idade <= 59)
		printf("Paga inteira!");
	else
		printf("Entrada Gratuita!");
		
	return 0;
}

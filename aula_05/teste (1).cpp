#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade > 17 )
		printf("Apto a realizar o processo de habilitação!");
	else
		printf("Não está apto a realizar o processo de habilitação!");
	
	return 0;
}

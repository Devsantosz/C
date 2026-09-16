#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float media;
	
	printf("Digite a m�dia: ");
	scanf("%f", &media);

	//Operadores logicos e condicoes em C++
	if(media >= 10)
		printf("Aluno - Aprovado!");
	else if(media >= 5 && media <= 6.9)
		printf("Aluno - Em recupera��o!");
	else
		printf("Aluno - Reprovado!");
		
	return 0;
}

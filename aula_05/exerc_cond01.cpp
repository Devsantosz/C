#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float media;
	
	printf("Qual a media do aluno? ");
	scanf("%f", &media)

	//Aprendendo a utilizar o operador ternário e condicoes em C++
	
	if(media >= 7)
		printf("Aluno - Aprovado!");
	else
		printf("Aluno - Reprovado!");
		
	return 0;
}

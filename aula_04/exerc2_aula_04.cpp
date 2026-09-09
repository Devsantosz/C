#include <stdio.h>

int main(){
	float media, nota1, nota2, nota3;
	
	printf("Nota 01: ");
	scanf("%f",&nota1);
	
	printf("Nota 02: ");
	scanf("%f",&nota2);
	
	printf("Nota 03: ");
	scanf("%f",&nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	printf("A media do aluno foi de: %.1f\n", media);
	
	return 0;
}

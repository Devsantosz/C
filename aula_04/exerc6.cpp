#include <stdio.h>

int main(){
	float valor1, dobro, triplo;
	
	
	printf("Digite um valor: ");
	scanf("%f",&valor1);
	
	dobro = valor1 * 2;
	triplo = valor1 * 3;
	
	printf("O dobro de %.2f e de %.2f, o triplo e de %.2f.", valor1, dobro, triplo);

	return 0;
}

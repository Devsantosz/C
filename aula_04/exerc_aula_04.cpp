#include <stdio.h>

int main(){
	float area, area_circ;
	const float pi =3.14159;
	
	printf("Qual o valor do raio do circulo? ");
	scanf("%f",&area);
	
	area_circ = pi * area * area;
	
	printf("A area do circulo e: %.2f\n", area_circ);
	
	return 0;
}

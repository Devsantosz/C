#include <stdio.h>

int main(){
	float consumo, tarifa, total;
	
	printf("Qual foi o valor de consumo(kWh): ");
	scanf("%f",&consumo);
	
	printf("Qual o valor da tarifa R$ ");
	scanf("%f",&tarifa);
	
	total = consumo * tarifa;
	
	printf("O valor total para ser pago e de R$ %.2f", total);
	
	return 0;
}

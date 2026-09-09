#include <stdio.h>

int main(){
	float reais, dolar, euro;
	
	printf("Digite um valor em reais R$");
	scanf("%f",&reais);
	
	printf("Digite a cotacao em dolares(R$5,09 = $1): ");
	scanf("%f",&dolar);
	
	printf("Digite a cotacao em dolares(R$5,91 = $1): ");
	scanf("%f",&euro);
	
	
	printf("O valor da conversao em dolar: $ %.2f\n", reais / dolar);
	printf("O valor da conversao em euro: $ %.2f\n", reais / euro);
	
	return 0;
}

#include <stdio.h>

int main(){
	float conta, valor_un;
	int pessoas;
	
	printf("Qual foi o valor da conta? ");
	scanf("%f",&conta);

	printf("Quantas pessoas estao na mesa? ");
	scanf("%d",&pessoas);
	
	valor_un = conta / pessoas;
	
	printf("Cada pessoa tera que pagar: R$ %.2f", valor_un);
	
	return 0;
}

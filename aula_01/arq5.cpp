#include <stdio.h>

int main(){
	//Uso de variaveis e parenteses para alterar a ordem de precedencia das operacoes matematicas
	int res1 = 10 + 3 * 2;
	int res2 = (10 + 3) * 2;
	
	printf("o Resultado da conta 10 + 3 * 2 foi igual a: %d\n", res1);
	printf("o Resultado da conta (10 + 3) * 2 foi igual a: %d", res2);
	return 0;
}

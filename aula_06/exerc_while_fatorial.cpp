#include <stdio.h>

int main(){
	
	int num = 5;
	int fat = 1;
	//Faz o calculo da fatorial do valor 5!
	while(num > 0){
		//Multiplica o fat = 1 por num 5 e guarda o resultado
		fat = fat * num;
		num --;
		//A cada processo o num perde um valor
	}
	printf("Fatorial de 5 = %d", fat);
	
	return 0;
}

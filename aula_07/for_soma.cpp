#include <stdio.h>

int main(){
    int cont, num;
    int soma = 0;
    
    for(cont=1; cont <= 5; cont +=1){
        printf("Digite um numero inteiro: ");
        scanf("%d",&num);
        soma += num;
    }
    printf("A soma de todos os numero foi %d", soma);

    return 0;
}
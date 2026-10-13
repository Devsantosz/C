#include <stdio.h>

int main(){
    int num, cont;
    
    printf("Escolha um numero de 0 a 10: ");
    scanf("%d",&num);

    for(cont = 1; cont <= 10; cont +=1){
        printf("%d x %d = %d\n",num, cont, num * cont);
    }

    return 0;
}
#include <stdio.h>

int main(){
    int cont;
    //A var cont recebe o valor 10
    //Testa se o valor for menor ou igual a 1
    //Se nao, ele remove 1 a var cont
    for(cont=10; cont >= 1; cont-=1){
        printf("%d\n",cont);
    }

    return 0;
}
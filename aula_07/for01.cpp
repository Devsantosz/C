#include <stdio.h>

int main(){
    int cont;
    //A var cont recebe o valor 1
    //Testa se o valor for menor ou igual a 10
    //Se nao, ele add 1 a var cont
    for(cont=1; cont <=10; cont+=1){
        printf("%d\n",cont);
    }

    return 0;
}
#include <stdio.h>

int main(){
    int nota, cont, media;
    int nota_f = 0;

    for(cont = 1; cont <= 4; cont +=1){
         printf("Qual foi a nota do aluno: ");
        scanf("%d",&nota);
        nota_f = nota_f + nota;
    }
    
    media = nota_f / 4;

    printf("A media do aulo foi: %d", media);

    return 0;
}
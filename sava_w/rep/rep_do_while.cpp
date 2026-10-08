// Código em Linguagem C

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    do
    {
        printf ("Digite um número: \n");
        scanf("%d",&num);
        //se o numero for diferente de zero e diferente de 9, executa
        if (num!=0 && num!=9)
        {
            //Se o resto de divisao de num por 2 for 0, mostra o sucessor
            if (num%2 ==0)
                printf ("Sucessor = %d\n\n ",num+1);
            //Se nao, mostra o antessor dele
            else
                printf ("Antecessor = %d\n\n ",num-1);
        }
    }
    while (num!=0 && num!=9);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cont,num,maior;

    maior=0;
    //Faz repeticao 5 vezes e pergunta um numero em cada rep e ao final, seleciona o maior Num
    for (cont=1;cont<=5;cont++)
    {
        printf ("Digite um número: ");
        scanf("%d",&num);
        if (num > maior)
        {
            maior=num;
        }
    }
    
    printf ("O maior dos números lidos = %d\n",maior);
    return 0;
}
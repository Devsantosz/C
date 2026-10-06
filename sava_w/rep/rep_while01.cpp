#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("DIgite um numero: ");
    scanf("%d",&num);
    //"executa emquanto o numero for diferente 0"
    while (num!=0){
        printf ("O número lido foi = %d\n\n ",num);
        printf ("Digite um número: ");
        scanf("%d",&num);
    }
    return 0;
}
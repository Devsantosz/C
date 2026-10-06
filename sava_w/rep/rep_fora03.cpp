#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cont;
    float salario,media,soma,maior;
    maior=0; soma=0;
    //Pesquisa de maior salario e solucao de media salarial
    for (cont=1;cont<=10;cont++)
    {
        printf ("Digite o salário do funcionário: \n");
        scanf("%f",&salario);
        soma=soma+salario;
        //O maior valor digitado sera atribuido a maior, caso o salario for maior que a variavel maior
        if (salario > maior)
        {
            maior=salario;
        }
    }
    //Faz a media salarial, apos a soma
    media=soma/10;
    printf ("O maior salário da empresa e = %.2f \n",maior);
    printf ("A média salarial da empresa e = %.2f \n",media);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salbruto, salliquido, imposto, totbruto=0, totliquido=0, totimposto=0;
    int contfunc=1;
    while (contfunc<=15)
    {   //Pergunta o salario do funcionario
        printf ("Digite o salário bruto: ");
        scanf("%f",&salbruto);
        //se o salario for maior que 999, aplica 10% de imposto
        if (salbruto >999)
            imposto = salbruto*0.10;
        //se nao, aplicara outros descontos
        else
            //se for mairo que 1999, aplica 15% de imposto
            if (salbruto >1999)
                imposto = salbruto*0.15;
            //se nao, aplicara outros descontos
            else
                //se for mairo que 9999, aplica 20% de imposto
                if (salbruto >9999)
                    imposto = salbruto*0.20;
                //se nao, aplicara outros descontos
                else
                    //se for mairo que 99999, aplica 25% de imposto
                    if (salbruto >99999)
                        imposto = salbruto*0.25;
                    //se nao, aplicara outros descontos
                    else
                        imposto = salbruto*0.30;
                        salliquido = salbruto - imposto;
                        //Aplica desconto ao salario, guardando o valor
        printf ("Salário Liquido: %.2f \n",salliquido);
        //Subtrai o imposto do salário bruto. Depois, os valores são somados aos acumuladores:
        totbruto = totbruto + salbruto;
        totliquido = totliquido + salliquido;
        totimposto = totimposto + imposto;
        contfunc++;
    }
    printf ("TOT salário bruto : %.2f \n",totbruto);
    printf ("TOT salário líquido : %.2f \n",totliquido);
    printf ("TOT imposto : %.2f \n",totimposto);
    return 0;
}
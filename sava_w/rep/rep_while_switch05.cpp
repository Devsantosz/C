#include <stdio.h>
#include <stdlib.h>
int main()
{
    char letra;
    int conta=0, conte=0, conti=0, conto=0, contu=0;
    scanf("%c",&letra);
    //Atribui 1 a cada vez q a vogal for digitada,
    //Se a letra for diferente de "." continua a estrutura, se for "." nao executa
    while (letra!='.'){
        //switch - selecao ou separacao de vogal, atribuindo 1 a vogal selecionada
        switch (letra){
            case 'a':
                conta++;
                break;
            case 'e':
                conte++;
                break;
            case 'i':
                conti++;
                break;
            case 'o':
                conto++;
                break;
            case 'u':
                contu++;
                break;
        }
        scanf("%c",&letra);
    }
    printf("Total de a: %d\n", conta);
    printf("Total de e: %d\n", conte);
    printf("Total de i: %d\n", conti);
    printf("Total de o: %d\n", conto);
    printf("Total de u: %d\n", contu);
    
    return 0;
}
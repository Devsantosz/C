//Ela permite usar std::cout para mostrar informações na tela
#include <iostream> 

//inicia bloco
int main() {
    //Declaracao de array/vetor, vetor de 10 posicoes
    int vet[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; //Valores dentro do vetor 
    
    //A var i receber 0 e ate que i seja menor q 0, aumenta um posicao
    for (int i = 0; i < 10; i++) {
        std::cout << vet[i] << ' ';
        //imprime um espaço para separar os valores
    }
    //Mostrando todos os vetores

    return 0;
}
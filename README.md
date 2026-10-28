# Linguagem de Programação C++

> Repositório destinado a desenvolver e documentar o aprendizado da linguagem **C++**.

##  Informações

-  Uso da IDE **Dev-C++ ou VScode**
-  Criação e execução de programas

## Etapas de conhecimento:

1 - Exibicao de dados:
```
c++

#include <stdio.h>
int main()
{
	// Comentario de C++
	// Meu primeiro Hello World em C++
	printf("Hello, world!");
	return 0;	
}
```
2 -  Obtendo dados/info do usuario e operacoes matematicas:
```
c++
#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite a base do triangulo: ");
    scanf("%f",&base);

    printf("Digite a altura do triangulo: ");
    scanf("%f",&altura);
    //Calculo da area do triangulo
    area = (base * altura) / 2;

    printf("A area do triangulo e: %.2f\n", area);

    return 0;
}
```
3 - Estruturas de decisoes com if, else if e else:
```
c++
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	float sub;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	
	sub = num1 - num2;
	
	//utilizando condico em C++ para verificar se o numero e maior, menor ou igual a 10
	if(sub == 0)
		printf("O numero  igual a 0!");
	else if(sub < 10)
		printf("O numero e menor que 10!");
	else
		printf("O numero e maior que 10!");
		
	return 0;
}
```
4 - Estruturas de repeticaos while, do-while e for: 
```
c++
#include <stdio.h>

int main(){
	
	int cont = 1;
	int n;
	//Pergunta ao usuario um numero
	printf("Digite um numero: ");
	scanf("%d",&n);
	//Atribui o valor a variavel n
	while(cont<=n){
		printf("%d\n",cont);
		cont ++;
	}
	//O while executa a contagem, add 1 a variavel ate chegar ao valor da variavel N
	return 0;
}
```
```
#include <stdio.h>

int main(){
	//Exercicio de contagem com estrutura de rep DO_WHILE
	int cont = 1;
	//"DO" faz o bloco ser executado ao menos uma vez
	do{
		printf("%d\n",cont);
		cont ++;
	}while(cont<=10);
	//Para depois verificar a condicao
	return 0;
}
```
```
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
```
5 - Uso de listas/vetores e arrays/Matriz
```
#include <stdio.h>

int main() {
    //Vetores e seus elementos int
    int numeros[5] = {2,4,6,8,10};
    int i;

    printf("O dobros dos numeros sao: ");

    //Recebe valor, se for menor que 5, recebe mais 1
    for(i = 0 ; i < 5; i++){
        printf("%d ", numeros[i] * 2);
    }
    //Mostra o dobro de todas as posicoes

    return 0;
}
```
```
#include <stdio.h>

int main(){
	//Exercicio da aula 09
	int mat[3][3]; //matriz com 3 colunas e 3 linhas
	int i, j;	//Variavel de contagem de colunas e linhas
	
	printf("Matriz de escolha: \n");
	for(i = 0; i < 3; i++){
		//comeca em 0, na linha 1 e depois vai para a coluna 2
		//[0]x[0] e dps [1]x[], [2]x[0]
		for(j = 0; j< 3; j++){
			//Priemira coluna e dps as demais colunas
			//[0]x[0] e dps [0]x[1], [0]x[2]
			printf("Elemento [%d]x[%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	
	//Exibicao da matriz
	for(i = 0; i < 3;i++){
		for(j = 0; j< 3; j++){
			printf("%2d",mat[i][j]);
		}
		printf("\n");	
	}
}
```

### Estudo desenvolvido dentro e fora de sala de aula da Unimetrocamp, com o objetivo de desenvolver os conceitos de C++.


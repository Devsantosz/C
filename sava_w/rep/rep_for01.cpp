#include <stdio.h>
#include <locale.h>

int main(){
	int cont;

	setlocale(LC_ALL, "Portuguese");

    //conta ate 10, comecando de 1, contando de 1 em 1
	for (cont=1;cont<=10;cont=cont+=1){
        printf ("%d\n",cont);
    }
	return 0;
}

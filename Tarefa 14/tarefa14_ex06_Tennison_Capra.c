// Tarefa 14 - Exerc�cio 6
// Tennison Capra

/*
    6. Preencher automaticamente um vetor com todos os n�meros pares entre 1 e 100 e depois exibir os n�meros para o usu�rio.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int x, num[50];
	
	printf("\nN�meros pares entre 1 e 100: { ");
	for(x=2; x<100; x+=2){
		num[x] = x;
		printf("%d ", num[x]);
	}
	printf("}\n\n");
	
    return 0;
}


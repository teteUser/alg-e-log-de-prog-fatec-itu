// Tarefa 14 - Exerc�cio 1
// Tennison Capra

/*
    1. Receber 10 n�meros e armazen�-los em um vetor. Ao final, exibir os 10 n�meros na ordem que foram recebidos.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int x, num[10];
	
	for(x=0; x<10; x++){
		printf("Digite o %i� n�mero: ", x+1);
		scanf("%i", &num[x]);
	}
		
	printf("\nN�meros digitados: { ");
	for(x=0; x<10; x++){
		printf("%i ", num[x]);
	}
	printf("}\n\n");

    return 0;
}

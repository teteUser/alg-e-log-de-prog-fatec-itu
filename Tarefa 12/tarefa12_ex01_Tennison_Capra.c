#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 12 - Exerc�cio 1
// Tennison Capra

/*
	1. Receber 10 n�meros e mostrar o dobro de cada um deles. 
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int count, num;
	
	for(count =1; count <= 10; count++){
		printf("\nDigite o %i� n�mero: ", count);
		scanf("%i", &num);
		printf("O dobro do %i� n�mero �: %i\n", count, num*2);
	}

	return 0;
}


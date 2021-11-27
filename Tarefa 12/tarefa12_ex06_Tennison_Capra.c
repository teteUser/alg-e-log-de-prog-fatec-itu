#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 12 - Exercício 6
// Tennison Capra

/*
	6. Implementar um programa que exibe todos os números inteiros de 1 a 1000 em ordem inversa (1000, 999, 998, ..., 3, 2, 1). 
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int count;

	for(count = 1000; count > 1; count--){
		printf("%i, ", count);
	}
	
	printf("1.");
    
	return 0;
}


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 12 - Exercício 5
// Tennison Capra

/*
	5. Implementar um programa que exibe todos os números pares contidos entre 10 e 80.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int count;

    for(count = 10; count <= 80; count++){
    	if(count % 2 == 0){
		   	printf("%i\n", count);
		}
	}
	
	return 0;
}


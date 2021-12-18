// Tarefa 15 - Exercício 1
// Tennison Capra

/*
    1. Faça um programa que recebe uma matriz 3x4 e mostrar a soma dos elementos dela.
*/

#include <stdio.h>
#include <locale.h>
#define lin 3
#define col 4

int main(){
    setlocale(LC_ALL, "Portuguese");
	int matriz[lin][col], i, j, soma=0;
	
	printf("\nDigite os valores da matriz %ix%i\n", lin, col);
	
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			scanf("%i", &matriz[i][j]);
			soma += matriz[i][j];
		}
	}
	
	printf("\nSoma dos elementos da matriz: %i\n", soma);
	
    return 0;
}

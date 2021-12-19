// Tarefa 15 - Exercício 2
// Tennison Capra

/*
    2. Faça um programa que recebe uma matriz 5x3 e informa qual é o maior elemento dela.
*/

#include <stdio.h>
#include <locale.h>
#define lin 5
#define col 3

int main(){
    setlocale(LC_ALL, "Portuguese");
	int matriz[lin][col], i, j, maior=0;
	
	printf("\nDigite os valores da matriz %ix%i\n", lin, col);
	
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			scanf("%i", &matriz[i][j]);
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
			}
		}
	}
	
	printf("\nO maior elemento da matriz foi: %i\n", maior);
	
    return 0;
}

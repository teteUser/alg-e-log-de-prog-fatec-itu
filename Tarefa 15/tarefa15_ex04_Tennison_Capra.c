// Tarefa 15 - Exercício 4
// Tennison Capra

/*
    4. Faça um programa que recebe uma matriz 4x4 e exibe os elementos da sua diagonal principal.
*/

#include <stdio.h>
#include <locale.h>
#define lin 4
#define col 4

int main(){
    setlocale(LC_ALL, "Portuguese");
	int matriz[lin][col], i, j;
	
	printf("\nDigite os valores da matriz %ix%i:\n", lin, col);
	
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			scanf("%i", &matriz[i][j]);
		}
	}
	
	printf("\n\nSegue abaixo todos os valores da matriz: \n");
	
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			printf("%i\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nSegue abaixo apenas os valores da diagonal principal: \n");
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			if(i == j){
				printf("%i   ", matriz[i][j]);
			}
		}
	}
	
	printf("\n");
	
    return 0;
}

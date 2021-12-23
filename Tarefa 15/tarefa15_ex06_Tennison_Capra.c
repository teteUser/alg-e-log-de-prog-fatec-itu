// Tarefa 15 - Exercício 6
// Tennison Capra

/*
    6. Define-se como elemento minimax de uma matriz o menor elemento da linha onde se encontra o maior elemento da matriz.
	Faça um programa que recebe uma matriz 4x4 e mostra qual é seu elemento minimax, bem como sua posição na matriz.
*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>
#define lin 4
#define col 4

int main(){
    setlocale(LC_ALL, "Portuguese");
	int matriz[lin][col], i, j, linha, coluna, maior=0, minimax=INT_MAX;
	
	printf("\nDigite os valores da matriz %ix%i:\n", lin, col);
	
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			scanf("%i", &matriz[i][j]);
			if(matriz[i][j]>maior){
				maior = matriz[i][j];
				linha = i;
			}
		}
	}
	
	printf("\n");
	printf("Segue abaixo a matriz digitada: \n");
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			printf("%i\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<col; i++){
		if(matriz[linha][i] < minimax){
			minimax = matriz[linha][i];
			coluna = i;
		}
	}
	
	printf("\nA linha com o MAIOR elemento é a linha [%i]\n", linha);
	printf("O MENOR elemento da linha [%i] é: {%i}\n", linha, minimax);
	printf("\n\n>>>> O MENOR elemento da linha com o MAIOR elemento é {%i} que fica na posição [%i][%i] <<<<\n", minimax, linha, coluna);
	
    return 0;
}

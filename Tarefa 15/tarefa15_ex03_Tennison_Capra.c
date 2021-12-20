// Tarefa 15 - Exercício 3
// Tennison Capra

/*
    3. Faça um programa que recebe uma matriz 3x3 e gera uma segunda matriz com o dobro de cada valor.
	No final, exiba a segunda matriz formatada na tela.
*/

#include <stdio.h>
#include <locale.h>
#define lin 3
#define col 3

int main(){
    setlocale(LC_ALL, "Portuguese");
	int matriz[lin][col], matriz2[lin][col], i, j;
	
	printf("\nDigite os valores da matriz %ix%i\n", lin, col);
	
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			scanf("%i", &matriz[i][j]);
			matriz2[i][j] = matriz[i][j] * 2;
		}
	}
	
	printf("\n\n");
	
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			printf("%i\t", matriz2[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}

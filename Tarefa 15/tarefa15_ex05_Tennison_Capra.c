// Tarefa 15 - Exerc�cio 5
// Tennison Capra

/*
    5. Fa�a um programa que recebe uma matriz 3x4 e mostra a soma dos elementos de uma col escolhida pelo usu�rio.
*/

#include <stdio.h>
#include <locale.h>
#define lin 3
#define col 4

int main(){
    setlocale(LC_ALL, "Portuguese");
	int matriz[lin][col], i, j, coluna, soma;
	
	printf("\nDigite os valores da matriz %ix%i:\n", lin, col);
	
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			scanf("%i", &matriz[i][j]);
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
	
	do{
		printf("\n\nVoc� gostaria de somar os elementos de qual coluna da matriz? (Op��es: entre 0 e %i) ", col - 1);
		scanf("%i", &coluna);
		if(coluna<0 || coluna>=col){
			printf("\nPor favor escolha um �ndice v�lido para a coluna, podendo ser entre 0 e %i.\n", col - 1);
		}
	}while(coluna<0 || coluna>=col);
	
	for(i=0; i<lin; i++){
		soma += matriz[i][coluna];
	}
	
	printf("\nA soma dos elementos da coluna de �ndice %i � igual a: %i.\n\n", coluna, soma);
	
    return 0;
}

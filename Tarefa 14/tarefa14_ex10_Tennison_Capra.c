// Tarefa 14 - Exercício 10
// Tennison Capra

/*
    10. Receber 10 números inteiros e armazenar em um vetor. Imprimir os dados do vetor em ordem crescente.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int x, y, invert, vetor[10];
	
	for(x=0; x<10; x++){
		printf("Digite o valor do %dº índice do vetor: ", x+1);
		scanf("%d", &vetor[x]);
	}
	printf("\nVetor digitado: {");
	for(x=0;x<10;x++){
		printf(" %d ", vetor[x]);
	}
	printf("}");
	
	for(x=0;x<10;x++){
		for(y=x+1;y<10;y++){
			if(vetor[x] > vetor[y]){
				invert = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = invert;
			}
		}
	}
	
	printf("\nVetor ordenado: {");
	for(x=0;x<10;x++){
		printf(" %d ", vetor[x]);
	}
	printf("}\n\n");
	
	return 0;
}


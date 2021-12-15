// Tarefa 14 - Exercício 8
// Tennison Capra

/*
    8. Declarar um vetor de 10 posições já inicializado com os números de 1 a 10 e copiá-los para outro vetor na ordem inversa.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int x, y, vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, novoVetor[10];
	
	// Impressão do primeiro vetor
	printf("\nPrimeiro vetor: { ");
	for(x=0; x<10; x++){
		printf("%d ", vet[x]);
	}
	printf("}\n");
	
	//Invertendo os valores do vetor
	for(x=0, y=9; x<=9, y>=0; x++, y--){
		novoVetor[x] = vet[y];
	}
		
	// Impressão do segundo vetor
	printf("\nSegundo vetor: { ");
	for(x=0; x<10; x++){
		printf("%d ", novoVetor[x]);
	}
	printf("}\n\n ");
	
    return 0;
}


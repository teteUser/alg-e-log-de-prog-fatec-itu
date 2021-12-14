// Tarefa 14 - Exercício 7
// Tennison Capra

/*
    7. Declarar um vetor de 10 posições já inicializado com os números de 1 a 10 e copiá-los para outro vetor.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int x, vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, novoVetor[10];
	
	//Impressão do primeiro vetor
	printf("\n\nPrimeiro vetor, inicializado com valores de 1 a 10: { ");
	for(x=0; x<10; x++){
		printf("%d ", vet[x]); // vet[] --> variavel do primeiro vetor
	}
	printf("}\n\n");
		
	// Atribuição do segundo vetor, copiando os valores do primeiro vetor
	for(x=0; x<10; x++){
		novoVetor[x] = vet[x];
	}
	
	// Impressão do segundo vetor
	printf("Segundo vetor, com os valores copiados do primeiro: { ");
	for(x=0; x<10; x++){
		printf("%d ", novoVetor[x]); // novoVetor[] --> variavel do segundo vetor
	}
	printf("}\n\n");
	
    return 0;
}


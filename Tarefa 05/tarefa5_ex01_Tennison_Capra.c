#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exercício 1
// Tennison Capra

// 1. Receber um número e informar se ele é negativo ou positivo. 	

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;
		
	printf("\nDigite um número: ");
	scanf("%f", &num);
	
	if(num < 0){
		printf("\nO número %.2f é NEGATIVO!\n\n", num);
	}else{
		printf("\nO número %.2f é POSITIVO!\n\n", num);	
	}
	return 0;
}


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 7 - Exercício 1
// Tennison Capra

// 1. Receber um número e informar se ele é positivo, negativo ou nulo.

int main(){
	setlocale(LC_ALL, "Portuguese");

	float num;

	printf("\nDigite um número: ");
	scanf("%f", &num);

	if(num == 0)
		printf("\nVocê digitou um número NULO!\n\n");
	else
		if(num > 0)
			printf("\nVocê digitou um número POSITIVO!\n\n");
		else
			if(num < 0)
				printf("\nVocê digitou um número NEGATIVO!\n\n");

    return 0;
}


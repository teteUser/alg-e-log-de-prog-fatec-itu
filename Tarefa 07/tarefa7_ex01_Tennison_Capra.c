#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 7 - Exerc�cio 1
// Tennison Capra

// 1. Receber um n�mero e informar se ele � positivo, negativo ou nulo.

int main(){
	setlocale(LC_ALL, "Portuguese");

	float num;

	printf("\nDigite um n�mero: ");
	scanf("%f", &num);

	if(num == 0)
		printf("\nVoc� digitou um n�mero NULO!\n\n");
	else
		if(num > 0)
			printf("\nVoc� digitou um n�mero POSITIVO!\n\n");
		else
			if(num < 0)
				printf("\nVoc� digitou um n�mero NEGATIVO!\n\n");

    return 0;
}


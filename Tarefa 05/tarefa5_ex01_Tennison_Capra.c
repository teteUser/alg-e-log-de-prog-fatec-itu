#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exerc�cio 1
// Tennison Capra

// 1. Receber um n�mero e informar se ele � negativo ou positivo. 	

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;
		
	printf("\nDigite um n�mero: ");
	scanf("%f", &num);
	
	if(num < 0){
		printf("\nO n�mero %.2f � NEGATIVO!\n\n", num);
	}else{
		printf("\nO n�mero %.2f � POSITIVO!\n\n", num);	
	}
	return 0;
}


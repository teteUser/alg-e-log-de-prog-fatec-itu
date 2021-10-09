#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exercício 1
// Tennison Capra

// 1. Receber dois valores e calcular sua média aritmética.


int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2;
	
	printf("\t\t>>> Exercício 1 <<<\n\n");
	
	printf("Digite um número: ");
	scanf("%f", &num1);
	printf("Digite mais um número: ");
	scanf("%f", &num2);
	
	printf("\n\nA média aritmética entre %.2f e %.2f é igual a: %.2f.\n\n", num1, num2, (num1+num2)/2);
	
	return 0;
}


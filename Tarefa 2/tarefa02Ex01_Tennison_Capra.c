#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exerc�cio 1
// Tennison Capra

// 1. Receber dois valores e calcular sua m�dia aritm�tica.


int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2;
	
	printf("\t\t>>> Exerc�cio 1 <<<\n\n");
	
	printf("Digite um n�mero: ");
	scanf("%f", &num1);
	printf("Digite mais um n�mero: ");
	scanf("%f", &num2);
	
	printf("\n\nA m�dia aritm�tica entre %.2f e %.2f � igual a: %.2f.\n\n", num1, num2, (num1+num2)/2);
	
	return 0;
}


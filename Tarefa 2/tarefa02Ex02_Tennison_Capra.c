#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exerc�cio 2
// Tennison Capra

// 2. Receber base e altura de um tri�ngulo e calcular sua �rea.

int main(){
	setlocale(LC_ALL, "Portuguese");
	float height, base;
	
	printf("\t\t>>> Exerc�cio 2 <<<\n\n");
	
	printf("Digite a medida da base do tri�ngulo, em cent�metros: ");
	scanf("%f", &base);
	printf("Digite a medida da altura do tri�ngulo, em cent�metros: ");
	scanf("%f", &height);
	printf("\nEm um tri�ngulo com %.2f cm de base e %.2f cm de altura, a �rea ter� %.2f cm�.\n", base, height, (base*height)/2);		
						
	return 0;
}


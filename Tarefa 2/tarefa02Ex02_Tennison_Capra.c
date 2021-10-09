#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exercício 2
// Tennison Capra

// 2. Receber base e altura de um triângulo e calcular sua área.

int main(){
	setlocale(LC_ALL, "Portuguese");
	float height, base;
	
	printf("\t\t>>> Exercício 2 <<<\n\n");
	
	printf("Digite a medida da base do triângulo, em centímetros: ");
	scanf("%f", &base);
	printf("Digite a medida da altura do triângulo, em centímetros: ");
	scanf("%f", &height);
	printf("\nEm um triângulo com %.2f cm de base e %.2f cm de altura, a área terá %.2f cm².\n", base, height, (base*height)/2);		
						
	return 0;
}


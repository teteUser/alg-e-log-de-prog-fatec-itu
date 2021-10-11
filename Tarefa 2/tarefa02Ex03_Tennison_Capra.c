#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exercício 3
// Tennison Capra

// 3. Receber um comprimento em metros e convertê-lo para centímetros.

int main(){
	setlocale(LC_ALL, "Portuguese");
	float comp;
	
	printf("\t\t>>> Exercício 3 <<<\n\n");
	
	printf("Digite uma medida em metros: ");
	scanf("%f", &comp);
	printf("\n%.2f metros é igual a %.2f centímetros.\n\n", comp, comp*100);
		
	return 0;
}


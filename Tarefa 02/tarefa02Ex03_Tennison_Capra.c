#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exerc�cio 3
// Tennison Capra

// 3. Receber um comprimento em metros e convert�-lo para cent�metros.

int main(){
	setlocale(LC_ALL, "Portuguese");
	float comp;
	
	printf("\t\t>>> Exerc�cio 3 <<<\n\n");
	
	printf("Digite uma medida em metros: ");
	scanf("%f", &comp);
	printf("\n%.2f metros � igual a %.2f cent�metros.\n\n", comp, comp*100);
		
	return 0;
}


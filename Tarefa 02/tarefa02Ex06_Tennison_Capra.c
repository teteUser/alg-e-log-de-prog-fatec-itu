#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exercício 6
// Tennison Capra

/*
	6. Calcular o perímetro de uma circunferência recebendo
	seu raio. C = 2 *  * r (utilizar  = 3.14).
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float raio;
		
	printf("\t\t>>> Exercício 6 <<<\n\n");
	
	printf("Digite a medida do raio do círculo (em metros): ");
	scanf("%f", &raio);
	printf("\nEsse círculo tem %.2f m de circunferência.\n", raio*2*3.14);
	
	return 0;
}


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exerc�cio 6
// Tennison Capra

/*
	6. Calcular o per�metro de uma circunfer�ncia recebendo
	seu raio. C = 2 *  * r (utilizar  = 3.14).
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float raio;
		
	printf("\t\t>>> Exerc�cio 6 <<<\n\n");
	
	printf("Digite a medida do raio do c�rculo (em metros): ");
	scanf("%f", &raio);
	printf("\nEsse c�rculo tem %.2f m de circunfer�ncia.\n", raio*2*3.14);
	
	return 0;
}


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 7 - Exerc�cio 4
// Tennison Capra

/*
	4. Receber tr�s n�meros e dizer se existe algum n�mero repetido entre eles.
	Em caso afirmativo, mostre qual o n�mero esta repetido.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	float num1, num2, num3;
	
	printf("\nDigite o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("\Digite o segundo n�mero: ");
	scanf("%f", &num2);
    printf("\Digite o terceiro n�mero: ");
    scanf("%f", &num3);

	if(num1 == num2 || num1 == num3)
		printf("\nVoc� digitou n�meros repetidos. Confira os n�meros digitados: %.2f | %.2f | %.2f\n\n", num1, num2, num3);
	else
		if(num2 == num3)
			printf("\nVoc� digitou n�meros repetidos. Confira os n�meros digitados: %.2f | %.2f | %.2f\n\n", num1, num2, num3);
		else
			printf("\nSem n�meros repetidos.\n");
	return 0;
}


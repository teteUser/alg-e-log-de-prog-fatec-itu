#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 7 - Exercício 4
// Tennison Capra

/*
	4. Receber três números e dizer se existe algum número repetido entre eles.
	Em caso afirmativo, mostre qual o número esta repetido.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	float num1, num2, num3;
	
	printf("\nDigite o primeiro número: ");
	scanf("%f", &num1);
	printf("\Digite o segundo número: ");
	scanf("%f", &num2);
    printf("\Digite o terceiro número: ");
    scanf("%f", &num3);

	if(num1 == num2 || num1 == num3)
		printf("\nVocê digitou números repetidos. Confira os números digitados: %.2f | %.2f | %.2f\n\n", num1, num2, num3);
	else
		if(num2 == num3)
			printf("\nVocê digitou números repetidos. Confira os números digitados: %.2f | %.2f | %.2f\n\n", num1, num2, num3);
		else
			printf("\nSem números repetidos.\n");
	return 0;
}


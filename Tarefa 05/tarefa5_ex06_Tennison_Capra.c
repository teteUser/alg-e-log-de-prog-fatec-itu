#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exerc�cio 6
// Tennison Capra

/*	6. Receber dois n�meros e os apresente em ordem crescente. 
    Utilize apenas a estrutura de decis�o if, ou seja, sem o opcional else. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, maior, menor;
	
	printf("\nDigite um n�mero: ");
	scanf("%f", &num1);
	printf("Digite outro n�mero: ");
	scanf("%f", &num2);
	
	maior = num1;
	menor = num2;
	
	if(num2 > num1){
		maior = num2;
		menor = num1;
	}
	
	printf("\nSegue os dois n�meros digitados, por�m em ordem crescente: %.2f  |  %.2f\n\n", menor, maior);
	
	/* Primeiro c�digo, antes da corre��o.
	if(num1 < num2){
		printf("\nSegue os dois n�meros digitados, por�m em ordem crescente: %.2f  |  %.2f\n\n", num1, num2);
	}
	
	if(num2 < num1){
		printf("\nSegue os dois n�meros digitados, por�m em ordem crescente: %.2f  |  %.2f\n\n", num2, num1);
	}*/
	
	
	
	return 0;
}


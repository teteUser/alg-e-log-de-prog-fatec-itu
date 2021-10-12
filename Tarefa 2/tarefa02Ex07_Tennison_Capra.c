#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exercício 7
// Tennison Capra

/*
	7. Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00
	por hora extra. Receber o total de horas normais e o total de horas
	extras trabalhadas por um empregado no mês e calcular o salário dele.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float hNormal, hExtra;
		
	printf("\t\t>>> Exercício 7 <<<\n\n");
	
	printf("Digite o total de horas normais trabalhadas: ");
	scanf("%f", &hNormal);
	printf("Digite o total de horas extras trabalhadas: ");
	scanf("%f", &hExtra);
	printf("\nO salário será: R$%.2f.\n\n", (hNormal*10)+(hExtra*15));
	
	return 0;
}



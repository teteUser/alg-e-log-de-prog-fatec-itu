#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exerc�cio 7
// Tennison Capra

/*
	7. Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00
	por hora extra. Receber o total de horas normais e o total de horas
	extras trabalhadas por um empregado no m�s e calcular o sal�rio dele.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float hNormal, hExtra;
		
	printf("\t\t>>> Exerc�cio 7 <<<\n\n");
	
	printf("Digite o total de horas normais trabalhadas: ");
	scanf("%f", &hNormal);
	printf("Digite o total de horas extras trabalhadas: ");
	scanf("%f", &hExtra);
	printf("\nO sal�rio ser�: R$%.2f.\n\n", (hNormal*10)+(hExtra*15));
	
	return 0;
}



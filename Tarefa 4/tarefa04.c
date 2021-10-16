#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	// Tarefa 04 - Comando IF
	// Aluno: Tennison Capra

	setlocale(LC_ALL, "Portuguese");

	float workedHours, hourlyWage, bonusValue, bonusTotal, baseWage, finalWage;

	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%f", &workedHours);
	printf("Digite o valor da hora: ");
	scanf("%f", &hourlyWage);

	baseWage = workedHours * hourlyWage;

	if(baseWage < 1500){
		bonusValue = 15;
		bonusTotal = baseWage * 0.15;
		finalWage = baseWage + bonusTotal;
	}else{
		bonusValue = 5;
		bonusTotal = baseWage * 0.05;
		finalWage = baseWage + bonusTotal;
	}

	printf("\nSalário base: \tR$%.2f\n", baseWage);
	printf("Bonificação de %.0f%%: R$%.2f\n", bonusValue, bonusTotal);
	printf("Salário final: \tR$%.2f\n\n", finalWage);


	return 0;
}


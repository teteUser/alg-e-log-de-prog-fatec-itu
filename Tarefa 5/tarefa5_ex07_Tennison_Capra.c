#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exercício 7
// Tennison Capra

/*	7. Implemente um programa que calcule aumento de salário no ano corrente. 
    Se o salário for de até R$ 1000.00 deve ser calculado o novo salário com aumento de 5%, para um salário maior que R$ 1000.00 o aumento é de 7%. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float baseSalary;
		
	printf("\nDigite o salário: ");
	scanf("%f", &baseSalary);
	
	if(baseSalary <= 1000){
		printf("\nNo ano corrente, o aumento será de 5%%, o que dá R$%.2f. O novo salário com esse aumento será de: R$%.2f.\n\n", baseSalary * 0.05, baseSalary * 1.05);
	}else{
		printf("\nNo ano corrente, o aumento será de 7%%, o que dá R$%.2f. O novo salário com esse aumento será de: R$%.2f.\n\n", baseSalary * 0.07, baseSalary * 1.07);	
	}
	
	return 0;
}


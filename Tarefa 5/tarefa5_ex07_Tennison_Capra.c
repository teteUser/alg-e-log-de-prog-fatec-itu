#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exerc�cio 7
// Tennison Capra

/*	7. Implemente um programa que calcule aumento de sal�rio no ano corrente. 
    Se o sal�rio for de at� R$ 1000.00 deve ser calculado o novo sal�rio com aumento de 5%, para um sal�rio maior que R$ 1000.00 o aumento � de 7%. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float baseSalary;
		
	printf("\nDigite o sal�rio: ");
	scanf("%f", &baseSalary);
	
	if(baseSalary <= 1000){
		printf("\nNo ano corrente, o aumento ser� de 5%%, o que d� R$%.2f. O novo sal�rio com esse aumento ser� de: R$%.2f.\n\n", baseSalary * 0.05, baseSalary * 1.05);
	}else{
		printf("\nNo ano corrente, o aumento ser� de 7%%, o que d� R$%.2f. O novo sal�rio com esse aumento ser� de: R$%.2f.\n\n", baseSalary * 0.07, baseSalary * 1.07);	
	}
	
	return 0;
}


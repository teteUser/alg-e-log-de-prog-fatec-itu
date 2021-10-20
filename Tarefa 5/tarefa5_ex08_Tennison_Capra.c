#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exercício 8
// Tennison Capra

/*
8. Você assina um plano de 50 minutos no celular que custa R$ 50.00 por mês, independente de utilizá-los integralmente ou não. 
    Porém, se você utilizar mais do que 50 minutos, é cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu plano. 
    Receber quantos minutos foram gastos no mês e calcular o valor da conta. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float min;
	
	printf("\nDigite quantos minutos você consumiu do seu plano nesse mês: ");
	scanf("%f", &min);
	
	if(min <= 50){
		printf("\nO valor da conta é: R$50,00\n\n");
	}else{
		printf("\nO valor da conta é: R$%.2f\n\n", ((min - 50) * 1.5) + 50);	
	}
	
	return 0;
}


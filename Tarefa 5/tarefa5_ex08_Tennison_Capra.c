#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exerc�cio 8
// Tennison Capra

/*
8. Voc� assina um plano de 50 minutos no celular que custa R$ 50.00 por m�s, independente de utiliz�-los integralmente ou n�o. 
    Por�m, se voc� utilizar mais do que 50 minutos, � cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu plano. 
    Receber quantos minutos foram gastos no m�s e calcular o valor da conta. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float min;
	
	printf("\nDigite quantos minutos voc� consumiu do seu plano nesse m�s: ");
	scanf("%f", &min);
	
	if(min <= 50){
		printf("\nO valor da conta �: R$50,00\n\n");
	}else{
		printf("\nO valor da conta �: R$%.2f\n\n", ((min - 50) * 1.5) + 50);	
	}
	
	return 0;
}


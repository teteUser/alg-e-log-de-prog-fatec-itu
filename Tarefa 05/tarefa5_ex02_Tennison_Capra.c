#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exerc�cio 2
// Tennison Capra

/*	2. Receber um n�mero e verificar se ele esta na faixa de 0 � 9. 
    Se sim, mostre uma mensagem afirmativa, caso contr�rio mostre uma mensagem indicando que o n�mero n�o se encontra na faixa. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("\nDigite um n�mero: ");
	scanf("%f", &num);
	
	if(num >= 0 && num <= 9){
		printf("\nO n�mero %.2f est� na faixa de 0 a 9.\n", num);
	}else{
		printf("\nO n�mero %.2f N�O est� na faixa de 0 a 9.\n", num);	
	}
		
	return 0;
}


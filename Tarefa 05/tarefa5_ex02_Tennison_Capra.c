#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exercício 2
// Tennison Capra

/*	2. Receber um número e verificar se ele esta na faixa de 0 à 9. 
    Se sim, mostre uma mensagem afirmativa, caso contrário mostre uma mensagem indicando que o número não se encontra na faixa. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("\nDigite um número: ");
	scanf("%f", &num);
	
	if(num >= 0 && num <= 9){
		printf("\nO número %.2f está na faixa de 0 a 9.\n", num);
	}else{
		printf("\nO número %.2f NÃO está na faixa de 0 a 9.\n", num);	
	}
		
	return 0;
}


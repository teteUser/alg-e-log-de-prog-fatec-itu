#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exercício 3
// Tennison Capra

/*	3. Receber numerador e denominador. 
    Calcular e mostrar o resultado da divisão, desde que possível (denominador diferente de zero).
    Se não for possível dividir, apenas escreva “não existe divisão por zero”. */

int main(){
	setlocale(LC_ALL, "Portuguese");
		
	float num, den;
	
	printf("\nDigite o numerador da divisão: ");
	scanf("%f", &num);
	printf("Digite o denominador da divisão: ");
	scanf("%f", &den);
	
	if(den == 0){
		printf("\nNão existe divisão por zero!\n");
	}else{
		printf("\nO resultado da divisão é: %.2f\n", num / den);
	}
	
	return 0;
}


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exerc�cio 3
// Tennison Capra

/*	3. Receber numerador e denominador. 
    Calcular e mostrar o resultado da divis�o, desde que poss�vel (denominador diferente de zero).
    Se n�o for poss�vel dividir, apenas escreva �n�o existe divis�o por zero�. */

int main(){
	setlocale(LC_ALL, "Portuguese");
		
	float num, den;
	
	printf("\nDigite o numerador da divis�o: ");
	scanf("%f", &num);
	printf("Digite o denominador da divis�o: ");
	scanf("%f", &den);
	
	if(den == 0){
		printf("\nN�o existe divis�o por zero!\n");
	}else{
		printf("\nO resultado da divis�o �: %.2f\n", num / den);
	}
	
	return 0;
}


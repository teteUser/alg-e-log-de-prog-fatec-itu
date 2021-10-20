#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exerc�cio 9
// Tennison Capra

/*	9. Receber um ano e se este ano for bissexto exibir na tela �Ano Bissexto�, sen�o exibir na tela �Ano N�o-Bissexto�. 
    Um ano � bissexto se for divis�vel por 4, mas n�o por 100. 
    Um ano tamb�m � bissexto se for divis�vel por 400. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ano;
	
	printf("\nDigite um ano: ");
	scanf("%i", &ano);
	
	if(ano % 400 == 0){
		printf("\nAno Bissexto\n\n");
	}else{
		if(ano % 4 == 0 && ano % 100 != 0){
			printf("\nAno Bissexto\n\n");
		}else{
			printf("\nAno N�o-Bissexto\n\n");
		}
	}
				
	return 0;
}


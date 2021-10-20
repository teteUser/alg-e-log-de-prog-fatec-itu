#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exercício 9
// Tennison Capra

/*	9. Receber um ano e se este ano for bissexto exibir na tela “Ano Bissexto”, senão exibir na tela “Ano Não-Bissexto”. 
    Um ano é bissexto se for divisível por 4, mas não por 100. 
    Um ano também é bissexto se for divisível por 400. */

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
			printf("\nAno Não-Bissexto\n\n");
		}
	}
				
	return 0;
}


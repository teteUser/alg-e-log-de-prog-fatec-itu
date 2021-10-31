#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exercício 10
// Tennison Capra

/*
	10. Receber o ano de nascimento do usuário e dizer
	aproximadamente quantos dias de vida ele tem.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	int anoNasc;
		
	printf("\t\t>>> Exercício 10 <<<\n\n");
	
	printf("Digite o ano em que você nasceu: ");
	scanf("%i", &anoNasc);
	printf("\nVocê tem aproximadamente %.0f dias de vida.\n", (2021-anoNasc)*365.4);
	//Multipliquei por 365.4 para considerar também os anos bissextos.
	//Usei %f na saída de dados para q fosse possível considerar a casa decimal do valor 365.4 na multiplicação.
	//Usei .0 dentro de %f para exibir o total de dias como se fosse número inteiro, pois a fração de dias no resultado final é irrelevante.
	
	return 0;
}


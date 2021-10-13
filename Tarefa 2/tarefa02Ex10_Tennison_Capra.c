#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exerc�cio 10
// Tennison Capra

/*
	10. Receber o ano de nascimento do usu�rio e dizer
	aproximadamente quantos dias de vida ele tem.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	int anoNasc;
		
	printf("\t\t>>> Exerc�cio 10 <<<\n\n");
	
	printf("Digite o ano em que voc� nasceu: ");
	scanf("%i", &anoNasc);
	printf("\nVoc� tem aproximadamente %.0f dias de vida.\n", (2021-anoNasc)*365.4);
	//Multipliquei por 365.4 para considerar tamb�m os anos bissextos.
	//Usei %f na sa�da de dados para q fosse poss�vel considerar a casa decimal do valor 365.4 na multiplica��o.
	//Usei .0 dentro de %f para exibir o total de dias como se fosse n�mero inteiro, pois a fra��o de dias no resultado final � irrelevante.
	
	return 0;
}


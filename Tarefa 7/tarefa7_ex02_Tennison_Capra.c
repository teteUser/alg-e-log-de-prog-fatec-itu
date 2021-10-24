#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 7 - Exerc�cio 2
// Tennison Capra

/*
	2. Receber um intervalo (dois valores) e em seguida um n�mero. Informar se o n�mero est� dentro,
	fora ou nas extremidades do intervalo. Por exemplo, em um intervalo de 1 a 3, 0 est� fora,
	2 est� dentro e 1 est� em uma extremidade do intervalo.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	float start, end, num;

	printf("\nDigite o primeiro n�mero do intervalo: ");
	scanf("%f", &start);
	printf("Digite o �ltimo n�mero do intervalo: ");
	scanf("%f", &end);
	printf("\nDigite o n�mero que voc� quer verificar: ");
	scanf("%f", &num);

	printf("\n-----------------------------------------------\n");

	if(num == start || num == end)
        printf("\nEsse n�mero est� na EXTREMIDADE do intervalo!\n\n");
    else
    	if(start < end){
	        if(num > start && num < end)
	            printf("\nEsse n�mero est� DENTRO do intervalo especificado!\n\n");
	        else
	            printf("\nEsse n�mero est� FORA do intervalo especificado!\n\n");
		}else{
			if(num < start && num > end)
	            printf("\nEsse n�mero est� DENTRO do intervalo especificado!\n\n");
	        else
	            printf("\nEsse n�mero est� FORA do intervalo especificado!\n\n");
			
		}

	return 0;
}


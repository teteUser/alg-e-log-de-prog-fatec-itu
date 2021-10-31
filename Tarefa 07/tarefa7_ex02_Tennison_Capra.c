#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 7 - Exercício 2
// Tennison Capra

/*
	2. Receber um intervalo (dois valores) e em seguida um número. Informar se o número está dentro,
	fora ou nas extremidades do intervalo. Por exemplo, em um intervalo de 1 a 3, 0 está fora,
	2 está dentro e 1 está em uma extremidade do intervalo.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	float start, end, num;

	printf("\nDigite o primeiro número do intervalo: ");
	scanf("%f", &start);
	printf("Digite o último número do intervalo: ");
	scanf("%f", &end);
	printf("\nDigite o número que você quer verificar: ");
	scanf("%f", &num);

	printf("\n-----------------------------------------------\n");

	if(num == start || num == end)
        printf("\nEsse número está na EXTREMIDADE do intervalo!\n\n");
    else
    	if(start < end){
	        if(num > start && num < end)
	            printf("\nEsse número está DENTRO do intervalo especificado!\n\n");
	        else
	            printf("\nEsse número está FORA do intervalo especificado!\n\n");
		}else{
			if(num < start && num > end)
	            printf("\nEsse número está DENTRO do intervalo especificado!\n\n");
	        else
	            printf("\nEsse número está FORA do intervalo especificado!\n\n");
			
		}

	return 0;
}


// Tarefa 13 - Exercício 1
// Tennison Capra

/*
	1. Solicitar quantos números o usuário deseja informar, receber cada um deles e mostrar a média aritmética no final.
	
	Exemplo:
	Entrada						Saída
	3 15 25 35					25
	4 18,5 23,8 5,2 2,5			12,5
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int num, cont;
	float x, y=0;
	
	printf("Quantos números você deseja informar? >>> ");
	scanf("%i", &num);
	
	for(cont=1;cont<=num;cont++){
		scanf("%f", &x);
		y = y + x;
	}
	
	printf("\nMédia aritmética: %.2f\n", y/num);

	return 0;
}


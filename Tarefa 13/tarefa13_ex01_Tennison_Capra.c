// Tarefa 13 - Exerc�cio 1
// Tennison Capra

/*
	1. Solicitar quantos n�meros o usu�rio deseja informar, receber cada um deles e mostrar a m�dia aritm�tica no final.
	
	Exemplo:
	Entrada						Sa�da
	3 15 25 35					25
	4 18,5 23,8 5,2 2,5			12,5
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int num, cont;
	float x, y=0;
	
	printf("Quantos n�meros voc� deseja informar? >>> ");
	scanf("%i", &num);
	
	for(cont=1;cont<=num;cont++){
		scanf("%f", &x);
		y = y + x;
	}
	
	printf("\nM�dia aritm�tica: %.2f\n", y/num);

	return 0;
}


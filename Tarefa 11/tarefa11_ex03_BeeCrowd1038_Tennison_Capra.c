// Tarefa 11 - Ex #03 - Beecrowd #1038
// Tennison Capra

/*
	Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item.
	A seguir, calcule e mostre o valor da conta a pagar.

	Código	Especificação			Preço
	1		Cachorro Quente			R$ 4.00
	2		X-Salada				R$ 4.50
	3		X-Bacon					R$ 5.00
	4		Torrada simples			R$ 2.00
	5		Refrigerante			R$ 1.50
	
	Entrada
	O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.
	
	Saída
	O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
	
	Exemplos
	Entrada			Saída
	3 2				Total: R$ 10.00
	4 3				Total: R$ 6.00
	2 3				Total: R$ 13.50	
*/

#include <stdio.h>

int main(){
	int cod, qtd;
	
	scanf("%i %i", &cod, &qtd);
	
	switch(cod){
		case 1:
			printf("Total: R$ %.2f\n", qtd*4.00);
			break;
		case 2:
			printf("Total: R$ %.2f\n", qtd*4.5);
			break;
		case 3:
			printf("Total: R$ %.2f\n", qtd*5.0);
			break;
		case 4:
			printf("Total: R$ %.2f\n", qtd*2.0);
			break;
		case 5:
			printf("Total: R$ %.2f\n", qtd*1.5);
			break;
	}
	
	return 0;
}


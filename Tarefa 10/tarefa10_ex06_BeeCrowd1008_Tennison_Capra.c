// Tarefa 10 - Beecrowd # 6 - Ex 1008
// Tennison Capra

/*
	Escreva um programa que leia o n�mero de um funcion�rio, seu n�mero de horas trabalhadas, o valor que recebe por hora e calcula o sal�rio desse funcion�rio.
	A seguir, mostre o n�mero e o sal�rio do funcion�rio, com duas casas decimais.
	
	Entrada
	O arquivo de entrada cont�m 2 n�meros inteiros e 1 n�mero com duas casas decimais, representando o n�mero, quantidade de horas trabalhadas
	e o valor que o funcion�rio recebe por hora trabalhada, respectivamente.
	
	Sa�da
	Imprima o n�mero e o sal�rio do funcion�rio, conforme exemplo fornecido, com um espa�o em branco antes e depois da igualdade.
	No caso do sal�rio, tamb�m deve haver um espa�o em branco ap�s o $.
	
	Exemplos
	Entrada				Sa�da
	25
	100					NUMBER = 25
	5.50				SALARY = U$ 550.00
	
	1
	200					NUMBER = 1
	20.5				SALARY = U$ 4100.00
	
	6
	145					NUMBER = 6
	15.55				SALARY = U$ 2254.75
*/

#include <stdio.h>

int main(){
	int num, workHours;
	float wage;
	
	scanf("%i", &num);
	scanf("%i", &workHours);
	scanf("%f", &wage);
	
	printf("NUMBER = %i\n", num);
	printf("SALARY = U$ %.2f\n", workHours * wage);
	
	return 0;
}

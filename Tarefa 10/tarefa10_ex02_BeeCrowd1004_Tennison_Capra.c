// Tarefa 10 - Beecrowd # 2 - Ex 1004
// Tennison Capra

/*
	Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta opera��o � vari�vel PROD.
	A seguir mostre a vari�vel PROD com mensagem correspondente.   
	
	Entrada
	O arquivo de entrada cont�m 2 valores inteiros.
	
	Sa�da
	Imprima a mensagem "PROD" e a vari�vel PROD conforme exemplo abaixo, com um espa�o em branco antes e depois da igualdade.
	N�o esque�a de imprimir o fim de linha ap�s o produto, caso contr�rio seu programa apresentar� a mensagem: �Presentation Error�.

	Samples
	Input		Output
	3
	9			PROD = 27
	
	-30
	10			PROD = -300
	
	0
	9			PROD = 0
*/

#include <stdio.h>

int main(){
	int num1, num2, PROD;
	
	scanf("%i", &num1);
	scanf("%i", &num2);
	
	PROD = num1 * num2;
	
	printf("PROD = %i\n", PROD);
	
	return 0;
}


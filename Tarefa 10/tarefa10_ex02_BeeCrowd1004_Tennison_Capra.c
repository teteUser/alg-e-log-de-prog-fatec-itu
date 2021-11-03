// Tarefa 10 - Beecrowd # 2 - Ex 1004
// Tennison Capra

/*
	Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD.
	A seguir mostre a variável PROD com mensagem correspondente.   
	
	Entrada
	O arquivo de entrada contém 2 valores inteiros.
	
	Saída
	Imprima a mensagem "PROD" e a variável PROD conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.
	Não esqueça de imprimir o fim de linha após o produto, caso contrário seu programa apresentará a mensagem: “Presentation Error”.

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


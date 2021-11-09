// Tarefa 10 - Beecrowd # 8 - Ex 1010
// Tennison Capra

/*
	Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2,
	o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

	Entrada
	O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.
	
	Saída
	A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois pontos
	e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.
	
	Exemplos
	Entrada				Saída
	12 1 5.30			
	16 2 5.10			VALOR A PAGAR: R$ 15.50
	
	13 2 15.30
	161 4 5.20			VALOR A PAGAR: R$ 51.40
	
	1 1 15.10
	2 1 15.10			VALOR A PAGAR: R$ 30.20
*/

#include <stdio.h>

int main(){
	int cod1, qtd1, cod2, qtd2;
	double price1, price2;
	
	scanf("%i %i %lf", &cod1, &qtd1, &price1);
	scanf("%i %i %lf", &cod2, &qtd2, &price2);
	
	printf("VALOR A PAGAR: R$ %.2lf\n", (qtd1 * price1)+(qtd2 * price2));
	
	return 0;
}

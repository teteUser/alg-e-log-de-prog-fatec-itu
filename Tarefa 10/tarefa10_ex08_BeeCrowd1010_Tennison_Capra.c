// Tarefa 10 - Beecrowd # 8 - Ex 1010
// Tennison Capra

/*
	Neste problema, deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1, o c�digo de uma pe�a 2,
	o n�mero de pe�as 2 e o valor unit�rio de cada pe�a 2. Ap�s, calcule e mostre o valor a ser pago.

	Entrada
	O arquivo de entrada cont�m duas linhas de dados. Em cada linha haver� 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.
	
	Sa�da
	A sa�da dever� ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espa�o ap�s os dois pontos
	e um espa�o ap�s o "R$". O valor dever� ser apresentado com 2 casas ap�s o ponto.
	
	Exemplos
	Entrada				Sa�da
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

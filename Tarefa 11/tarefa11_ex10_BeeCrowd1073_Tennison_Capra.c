// Tarefa 11 - Ex #10 - Beecrowd #1073
// Tennison Capra

/*
	Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 at� N, inclusive N, se for o caso.
	
	Entrada	
	A entrada cont�m um valor inteiro N (5 < N < 2000).
	
	Sa�da	
	Imprima o quadrado de cada um dos valores pares, de 1 at� N, conforme o exemplo abaixo.
	
	Tome cuidado! Algumas linguagens tem por padr�o apresentarem como sa�da 1e+006 ao inv�s de 1000000 o que ocasionar� resposta errada.
	Neste caso, configure a precis�o adequadamente para que isso n�o ocorra.
	
	Exemplos
	Entrada			Sa�da
	6				2^2 = 4
					4^2 = 16
					6^2 = 36
*/

#include <stdio.h>

int main(){
	int N, i;
	
	scanf("%i", &N);
	
	for(i=2;i<=N;i+=2){
		printf("%i^2 = %i\n", i, i*i);	
	}
	
	return 0;
}


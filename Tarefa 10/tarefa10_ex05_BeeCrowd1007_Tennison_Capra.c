// Tarefa 10 - Beecrowd # 5 - Ex 1007
// Tennison Capra

/*
	Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
	
	Entrada
	O arquivo de entrada contém 4 valores inteiros.
	
	Saída
	Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.

	Exemplos
	Entrada				Saída
	5
	6
	7
	8					DIFERENCA = -26
	
	0
	0
	7
	8					DIFERENCA = -56
	
	5
	6
	-7
	8					DIFERENCA = 86
*/

#include <stdio.h>

int main(){
	int A, B, C, D;
	
	scanf("%i", &A);
	scanf("%i", &B);
	scanf("%i", &C);
	scanf("%i", &D);
	
	printf("DIFERENCA = %i\n", A * B - C * D);
	
	return 0;
}

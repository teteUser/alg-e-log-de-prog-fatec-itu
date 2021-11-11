// Tarefa 11 - Ex #01 - Beecrowd #1036
// Tennison Capra

/*
	Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara.
	Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.
	
	Entrada
	Leia três valores de ponto flutuante (double) A, B e C.
	
	Saída
	Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular".
	Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo.
	Imprima sempre o final de linha após cada mensagem.
	
	Exemplos
	Entrada				Saída
	10.0 20.1 5.1		R1 = -0.29788
						R2 = -1.71212
						
	0.0 20.0 5.0		Impossivel calcular
	
	10.3 203.0 5.0		R1 = -0.02466
						R2 = -19.68408
						
	10.3 3.0 5.0		Impossivel calcular	
*/

#include <stdio.h>
#include <math.h>

int main(){
	double A, B, C;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	if(A == 0 || (B*B)-(4*A*C) < 0){
		printf("Impossivel calcular\n");
	}else{
		printf("R1 = %.5lf\n", ((-B)+sqrt((B*B)-(4*A*C)))/(2*A));
		printf("R2 = %.5lf\n", ((-B)-sqrt((B*B)-(4*A*C)))/(2*A));
	}

	return 0;
}


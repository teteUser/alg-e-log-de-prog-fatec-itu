// Tarefa 11 - Ex #01 - Beecrowd #1036
// Tennison Capra

/*
	Leia 3 valores de ponto flutuante e efetue o c�lculo das ra�zes da equa��o de Bhaskara.
	Se n�o for poss�vel calcular as ra�zes, mostre a mensagem correspondente �Impossivel calcular�, caso haja uma divis�o por 0 ou raiz de numero negativo.
	
	Entrada
	Leia tr�s valores de ponto flutuante (double) A, B e C.
	
	Sa�da
	Se n�o houver possibilidade de calcular as ra�zes, apresente a mensagem "Impossivel calcular".
	Caso contr�rio, imprima o resultado das ra�zes com 5 d�gitos ap�s o ponto, com uma mensagem correspondente conforme exemplo abaixo.
	Imprima sempre o final de linha ap�s cada mensagem.
	
	Exemplos
	Entrada				Sa�da
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


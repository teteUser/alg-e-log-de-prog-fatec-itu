// Tarefa 11 - Ex #06 - Beecrowd #1045
// Tennison Capra

/*
	Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados.
	A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
	
	    se A = B+C, apresente a mensagem: NAO FORMA TRIANGULO
	    se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
	    se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
	    se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
	    se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
	    se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
	
	Entrada	
	A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).
	
	Saída	
	Imprima todas as classificações do triângulo especificado na entrada.
	
	Exemplos
	Entrada			Saída
	7.0 5.0 7.0		TRIANGULO ACUTANGULO
					TRIANGULO ISOSCELES
					
	6.0 6.0 10.0	TRIANGULO OBTUSANGULO
					TRIANGULO ISOSCELES
					
	6.0 6.0 6.0		TRIANGULO ACUTANGULO
					TRIANGULO EQUILATERO
					
	5.0 7.0 2.0		NAO FORMA TRIANGULO
	
	6.0 8.0 10.0	TRIANGULO RETANGULO
*/

#include <stdio.h>

int main(){
	double A, B, C, maior;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	if(A < B){
		maior = A;
		A = B;
		B = maior;
	}
	if(A < C){
		maior = A;
		A = C;
		C = maior;
	}
	if(B < C){
		maior = B;
		B = C;
		C = maior;
	}
	
	if(A >= B+C){
		printf("NAO FORMA TRIANGULO\n");
	}else{
		if(A*A == (B*B)+(C*C)){
			printf("TRIANGULO RETANGULO\n");
		}else{
			if(A*A > (B*B)+(C*C)){
				printf("TRIANGULO OBTUSANGULO\n");
			}else{
				if(A*A < (B*B)+(C*C)){
					printf("TRIANGULO ACUTANGULO\n");
				}
			}
		}
	}

	if(A == B && A == C){
		printf("TRIANGULO EQUILATERO\n");
	}else{
		if(A == B || A == C || B == C){
			printf("TRIANGULO ISOSCELES\n");
		}
	}
		
	return 0;
}


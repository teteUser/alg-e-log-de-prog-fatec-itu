// Tarefa 11 - Ex #08 - Beecrowd #1071
// Tennison Capra

/*
	Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos n�meros impares entre eles.
	
	Entrada	
	O arquivo de entrada cont�m dois valores inteiros.
	
	Sa�da	
	O programa deve imprimir um valor inteiro. Este valor � a soma dos valores �mpares que est�o
	entre os valores fornecidos na entrada que dever� caber em um inteiro.
	
	Exemplos
	Entrada			Sa�da
	6				5
	-5
	
	15				13
	12
	
	12				0
	12
*/

#include <stdio.h>

int main(){
	int X, Y, Z,soma=0;
	
	scanf("%i %i", &X, &Y);
	
	if(Y>X){
		if(X%2==0){
				X = X - 1;
			}
		Z = X;
		for(X;X<Y;X+=2){
			soma = soma + X;	
		}
		soma = soma - Z;	
	}else{
		if(X>Y){
			if(Y%2==0){
				Y = Y - 1;
			}
			Z = Y;
			for(Y;Y<X;Y+=2){
				soma = soma + Y;	
			}
			soma = soma - Z;
		}else{
			soma = 0;
		}
	}
	
	printf("%i\n", soma);
	
	return 0;
}


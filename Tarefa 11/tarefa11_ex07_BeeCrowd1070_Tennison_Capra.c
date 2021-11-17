// Tarefa 11 - Ex #07 - Beecrowd #1070
// Tennison Capra

/*
	Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.
	
	Entrada
	A entrada será um valor inteiro positivo.
	
	Saída
	A saída será uma sequência de seis números ímpares.
	
	Exemplos
	Entrada			Saída
	8				9
					11
					13
					15
					17
					19
*/

#include <stdio.h>

int main(){
	int X, count;
	
	scanf("%i", &X);
	
	if(X%2 == 0){
		X = X + 1;			
	}
	
	for(count = 0; count < 12; count+=2){
		printf("%i\n", X + count);
	}
			
	return 0;
}


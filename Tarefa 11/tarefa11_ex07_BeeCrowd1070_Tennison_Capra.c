// Tarefa 11 - Ex #07 - Beecrowd #1070
// Tennison Capra

/*
	Leia um valor inteiro X. Em seguida apresente os 6 valores �mpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.
	
	Entrada
	A entrada ser� um valor inteiro positivo.
	
	Sa�da
	A sa�da ser� uma sequ�ncia de seis n�meros �mpares.
	
	Exemplos
	Entrada			Sa�da
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


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 12 - Exercício 4
// Tennison Capra

/*
	4. Receber 2 números inteiros e exibir todos os números inteiros existentes entre eles. 

	Exemplo: 
		Se você digitar os valores 5 e 11, exibir os valores 6, 7, 8, 9, 10.
		Se você digitar os valores 11 e 5, exibir os valores 6, 7, 8, 9, 10.
		Se você digitar os valores -3 e 8, exibir os valores   -2, -1, 0, 1, 2, 3, 4, 5, 6, 7.
		Se você digitar os valores  8 e -3, exibir os valores  -2, -1, 0, 1, 2, 3, 4, 5, 6, 7.
		Se você digitar os valores  -1 e -6 exibir os valores  -5, -4, -3, -2.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int count, maxCount, num1, num2;

	printf("Digite o 1º número: ");
	scanf("%i", &num1);
	printf("Digite o 2º número: ");
	scanf("%i", &num2);
	
	if(num1 > num2){
		maxCount = (num1 - num2) - 1;
	}else{
		maxCount = (num2 - num1) - 1;
	}
		
	for(count = 1; count <= maxCount -1 ; count++){
		if(num2 > num1){
			printf("%i, ", num1 + count);
		}else{
			printf("%i, ", num2 + count);
		}
	}
		if(num2 > num1){
			printf("%i.", num1 + maxCount);
		}else{
			printf("%i.", num2 + maxCount);
		}
	
	return 0;
}


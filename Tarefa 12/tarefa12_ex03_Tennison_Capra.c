#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 12 - Exerc�cio 3
// Tennison Capra

/*
	3. Receber 10 n�meros e informar se cada um deles � negativo, positivo ou nulo. 
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int count;
	float num;
	
	for(count = 1; count <= 10; count++){
		printf("\nDigite o %i� n�mero: ", count);
		scanf("%f", &num);
		
		if(num < 0){
			printf("O %i� n�mero � NEGATIVO.\n", count);
		}else{
			if(num == 0){
				printf("O %i� n�mero � NULO.\n", count);	
			}else{
				printf("O %i� n�mero � POSITIVO.\n", count);
			}
		}
	}
	
	return 0;
}


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 12 - Exercício 3
// Tennison Capra

/*
	3. Receber 10 números e informar se cada um deles é negativo, positivo ou nulo. 
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int count;
	float num;
	
	for(count = 1; count <= 10; count++){
		printf("\nDigite o %iº número: ", count);
		scanf("%f", &num);
		
		if(num < 0){
			printf("O %iº número é NEGATIVO.\n", count);
		}else{
			if(num == 0){
				printf("O %iº número é NULO.\n", count);	
			}else{
				printf("O %iº número é POSITIVO.\n", count);
			}
		}
	}
	
	return 0;
}


// Tarefa 13 - Exercício 4
// Tennison Capra

/*
	4. Receber 10 números e, ao final, informar qual é o maior e o menor deles. 
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont, maior=0, menor=9999;
	
	for(cont=1; cont<=10; cont++){
		printf("Digite o %iº número: ", cont);
		scanf("%i", &num);
		
		if(num > maior){
			maior = num;
		}
		
		if(num < menor){
			menor = num;
		}
	}
	
	printf("\nO maior número digitado foi: %i\n", maior);
	printf("\nO menor número digitado foi: %i\n", menor);
	
	return 0;
}

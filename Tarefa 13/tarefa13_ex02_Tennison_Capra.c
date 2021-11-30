// Tarefa 13 - Exercício 2
// Tennison Capra

/*
	2. Receber 10 números e, ao final, informar quantos são positivos e quantos são negativos. 
	
	Exemplo
	Entrada						Saída
	-5 -3 -1 1 3 5 6 8 15 20	Números positivos: 7  
								Números negativos: 3
								
	-7 -5 -4 -3 0 5 7 10 11 14	Números positivos: 5
								Números negativos: 4
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int cont, num, pos=0, neg=0;
	
	for(cont=1;cont<=10;cont++){
		printf("Digite o %iº número: ", cont);
		scanf("%i", &num);
		
		if(num<0){
			neg++;
		}
		
		if(num>0){
			pos++;
		}
	}
	
	printf("\nNúmeros positivos: %i\n", pos);
	printf("Números negativos: %i\n", neg);
	
	return 0;
}

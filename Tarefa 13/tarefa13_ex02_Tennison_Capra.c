// Tarefa 13 - Exerc�cio 2
// Tennison Capra

/*
	2. Receber 10 n�meros e, ao final, informar quantos s�o positivos e quantos s�o negativos. 
	
	Exemplo
	Entrada						Sa�da
	-5 -3 -1 1 3 5 6 8 15 20	N�meros positivos: 7  
								N�meros negativos: 3
								
	-7 -5 -4 -3 0 5 7 10 11 14	N�meros positivos: 5
								N�meros negativos: 4
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int cont, num, pos=0, neg=0;
	
	for(cont=1;cont<=10;cont++){
		printf("Digite o %i� n�mero: ", cont);
		scanf("%i", &num);
		
		if(num<0){
			neg++;
		}
		
		if(num>0){
			pos++;
		}
	}
	
	printf("\nN�meros positivos: %i\n", pos);
	printf("N�meros negativos: %i\n", neg);
	
	return 0;
}

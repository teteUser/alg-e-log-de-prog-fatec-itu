#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 12 - Exerc�cio 2
// Tennison Capra

/*
	2. Receber um n�mero e mostrar sua tabuada do 1 ao 10. 
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int count, num;
	
	printf("\nDigite o n�mero do qual voc� quer a tabuada: ");
	scanf("%i", &num);
	
	for(count = 1; count <= 10; count++){
		printf("\t%i x %i = %i\n", num, count, count*num);
	}
    

	return 0;
}


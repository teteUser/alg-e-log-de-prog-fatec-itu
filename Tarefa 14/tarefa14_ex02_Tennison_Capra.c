// Tarefa 14 - Exerc�cio 2
// Tennison Capra

/*
    2. Receber 10 n�meros e armazen�-los em um vetor. Ao final, exibir os n�meros na ordem inversa da que foram recebidos.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int y, num[10];
	
	for(y=0; y<10; y++){
		printf("Digite o %i� n�mero: ", y+1);
		scanf("%i", &num[y]);
	}
	
	printf("\nOrdem inversa dos n�meros digitados: { ");
	for(y=9; y>=0; y--){
		printf("%i ", num[y]);
	}
	
	printf("}\n");

    return 0;
}


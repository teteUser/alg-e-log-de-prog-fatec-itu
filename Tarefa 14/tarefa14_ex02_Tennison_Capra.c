// Tarefa 14 - Exercício 2
// Tennison Capra

/*
    2. Receber 10 números e armazená-los em um vetor. Ao final, exibir os números na ordem inversa da que foram recebidos.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int y, num[10];
	
	for(y=0; y<10; y++){
		printf("Digite o %iº número: ", y+1);
		scanf("%i", &num[y]);
	}
	
	printf("\nOrdem inversa dos números digitados: { ");
	for(y=9; y>=0; y--){
		printf("%i ", num[y]);
	}
	
	printf("}\n");

    return 0;
}


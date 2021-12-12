// Tarefa 14 - Exercício 5
// Tennison Capra

/*
    5. Receber 10 números e armazená-los em um vetor. Ao final, exibir quais foram os números negativos informados.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int x, num[10];
	
	for(x=0; x<10; x++){
		printf("Digite o %iº número: ", x+1);
		scanf("%i", &num[x]);
	}
	
	printf("\nNúmeros negativos digitados: { ");
	for(x=0; x<10; x++){
		
		if(num[x]<0){
			printf("%i ", num[x]);
		}
	}
	printf("}\n");

    return 0;
}


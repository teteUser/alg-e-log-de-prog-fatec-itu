// Tarefa 14 - Exerc�cio 5
// Tennison Capra

/*
    5. Receber 10 n�meros e armazen�-los em um vetor. Ao final, exibir quais foram os n�meros negativos informados.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int x, num[10];
	
	for(x=0; x<10; x++){
		printf("Digite o %i� n�mero: ", x+1);
		scanf("%i", &num[x]);
	}
	
	printf("\nN�meros negativos digitados: { ");
	for(x=0; x<10; x++){
		
		if(num[x]<0){
			printf("%i ", num[x]);
		}
	}
	printf("}\n");

    return 0;
}


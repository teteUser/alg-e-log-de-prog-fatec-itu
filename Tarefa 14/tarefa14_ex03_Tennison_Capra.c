// Tarefa 14 - Exerc�cio 3
// Tennison Capra

/*
    3. Receber 10 n�meros e armazen�-los em um vetor. Ao final, exibir o dobro de cada um dos n�meros.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int z, num[10];
	
	for(z=0; z<10; z++){
		printf("Digite o %i� n�mero: ", z+1);
		scanf("%i", &num[z]);
	}
	
	printf("\n");
	
	printf("\nO dobro de cada n�mero digitado: { ");
	for(z=0; z<10; z++){
		printf("%i ", num[z]*2);
	}
	
	printf("}\n\n");

    return 0;
}


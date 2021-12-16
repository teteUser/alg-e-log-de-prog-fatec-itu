// Tarefa 14 - Exerc�cio 9
// Tennison Capra

/*
    9. Receber 10 n�meros e armazen�-los em um vetor.
	Copiar os n�meros em outro vetor na ordem inversa e mostrar na tela todos os �ndices das posi��es em que se tem o mesmo n�mero nos dois vetores.

	Exemplo:

	1 2 3 1 2 3 1 2 3 1
	1 3 2 1 3 2 1 3 2 1
	
	�ndices: 0, 3, 6, 9
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int x, y, vetorNormal[10], vetorInvertido[10];
	
	for(x=0; x<10; x++){
		printf("Digite o valor do %d� �ndice do vetor: ", x+1);
		scanf("%d", &vetorNormal[x]);
	}
	
	printf("\nVetor digitado:  { ");
	for(x=0; x<10; x++){
		printf("%d ", vetorNormal[x]);
	}
	printf("}");
	
	for(x=0; x<10; x++){
		for(y=9; y>=0; y--){
			vetorInvertido[y] = vetorNormal[x];
			x++;
		}
	}
	
	printf("\nVetor invertido: { ");
	for(x=0; x<10; x++){
		printf("%d ", vetorInvertido[x]);
	}
	printf("}\n");
	
	printf("\n�ndices com valor repetido na compara��o dos dois vetores: ");
	for(x=0; x<10; x++){
		
		if(vetorNormal[x] == vetorInvertido[x]){
			printf("[%d] ", x);
		}
	}
	printf("\n\n");
	
    return 0;
}


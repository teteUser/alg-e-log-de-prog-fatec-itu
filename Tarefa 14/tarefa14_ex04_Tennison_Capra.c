// Tarefa 14 - Exerc�cio 4
// Tennison Capra

/*
    4. Receber 10 n�meros e armazen�-los em um vetor. Ao final, exibir a quantidade de n�meros positivos informados.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int x, num[10], pos=0;
	
	for(x=0; x<10; x++){
		printf("Digite o %i� n�mero: ", x+1);
		scanf("%i", &num[x]);
		
		if(num[x]>0){
			pos++;	
		}
		
	}
	
	printf("\nForam digitados %d n�meros positivos.\n", pos);

    return 0;
}


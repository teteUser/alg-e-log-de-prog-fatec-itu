// Tarefa 14 - Exercício 4
// Tennison Capra

/*
    4. Receber 10 números e armazená-los em um vetor. Ao final, exibir a quantidade de números positivos informados.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int x, num[10], pos=0;
	
	for(x=0; x<10; x++){
		printf("Digite o %iº número: ", x+1);
		scanf("%i", &num[x]);
		
		if(num[x]>0){
			pos++;	
		}
		
	}
	
	printf("\nForam digitados %d números positivos.\n", pos);

    return 0;
}


// Tarefa 13 - Exercício 3
// Tennison Capra

/*
	3. Solicitar quantos números o usuário deseja informar, receber cada um deles e mostrar a média aritmética dos valores positivos no final.
	
	Exemplo
	Entrada					Saída
	4 -1 5 8 11				8
	5 -4 0 6 9 3			6
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont, qtd, num, pos=0, posCount=0;
	
	printf("Quantos números você deseja informar? >>>> ");
	scanf("%i", &qtd);
	
	for(cont=1; cont <= qtd; cont++){
		printf("Digite o %iº número: ", cont);
		scanf("%i", &num);
		if(num>0){
			pos++;
			posCount = posCount + num;
		}
	}
	
	printf("\nA média aritmética dos números positivos digitados é: %i\n", posCount/pos);
	
	return 0;
}

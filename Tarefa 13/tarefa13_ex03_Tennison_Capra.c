// Tarefa 13 - Exerc�cio 3
// Tennison Capra

/*
	3. Solicitar quantos n�meros o usu�rio deseja informar, receber cada um deles e mostrar a m�dia aritm�tica dos valores positivos no final.
	
	Exemplo
	Entrada					Sa�da
	4 -1 5 8 11				8
	5 -4 0 6 9 3			6
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont, qtd, num, pos=0, posCount=0;
	
	printf("Quantos n�meros voc� deseja informar? >>>> ");
	scanf("%i", &qtd);
	
	for(cont=1; cont <= qtd; cont++){
		printf("Digite o %i� n�mero: ", cont);
		scanf("%i", &num);
		if(num>0){
			pos++;
			posCount = posCount + num;
		}
	}
	
	printf("\nA m�dia aritm�tica dos n�meros positivos digitados �: %i\n", posCount/pos);
	
	return 0;
}

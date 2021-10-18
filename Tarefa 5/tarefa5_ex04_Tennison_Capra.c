#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exerc�cio 4
// Tennison Capra

/*	4. Calcular a m�dia de um aluno em um semestre com duas provas, onde M = (P1 + P2) / 2. 
    Se a m�dia for maior ou igual a 5 escreva �aprovado�, sen�o calcule e mostre quanto faltou para atingir 5. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float p1, p2, med, falt;

	printf("\nDigite a nota da prova 1: ");
	scanf("%f", &p1);
	printf("Digite a nota da prova 2: ");
	scanf("%f", &p2);
	
	med = (p1 + p2) / 2;
	
	if(med >= 5){
		printf("\nAprovado!\n");
	}else{
		falt = 5 - med;
		printf("\nReprovado! Voc� precisava de mais %.2f ponto(s) para ser aprovado.\n", falt);
	}
	
	return 0;
}


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 9
// Tennison Capra

/*
	"Faça um programa que:
	Tendo como base a hora inicial e final de um jogo, calcule a duração dele,
	sabendo que o mesmo pode começar em um dia e terminar em outro,
	tendo uma duração mínima de 60 minutos e máxima de 24 horas.
	
	Entrada
	A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.
	
	Saída
	Apresente a duração do jogo conforme exemplo abaixo.
	
	Exemplos:
	Início: 16
	Fim: 2
	O Jogo Durou 10 Horas
	
	Início: 0
	Fim: 0
	O Jogo Durou 24 Horas
	
	Início: 2
	Fim: 16
	O Jogo Durou 14 Horas" 
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int startTime, endTime, totalTime;
	
	printf("\nDigite a hora inteira em que o jogo começou: ");
	scanf("%i", &startTime);
	printf("Digite a hora inteira em que o jogo terminou: ");
	scanf("%i", &endTime);
	
	if(endTime == startTime){
		totalTime = 24;
	}else{
		if(startTime > endTime){
			totalTime = (24 - startTime) + endTime;	
		}else{
			totalTime = endTime - startTime;
		}
	}
	
	printf("\nO jogo durou %i hora(s).\n\n", totalTime);

    return 0;
}


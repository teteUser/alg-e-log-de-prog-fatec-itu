#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 9
// Tennison Capra

/*
	"Fa�a um programa que:
	Tendo como base a hora inicial e final de um jogo, calcule a dura��o dele,
	sabendo que o mesmo pode come�ar em um dia e terminar em outro,
	tendo uma dura��o m�nima de 60 minutos e m�xima de 24 horas.
	
	Entrada
	A entrada cont�m dois valores inteiros representando a hora de in�cio e a hora de fim do jogo.
	
	Sa�da
	Apresente a dura��o do jogo conforme exemplo abaixo.
	
	Exemplos:
	In�cio: 16
	Fim: 2
	O Jogo Durou 10 Horas
	
	In�cio: 0
	Fim: 0
	O Jogo Durou 24 Horas
	
	In�cio: 2
	Fim: 16
	O Jogo Durou 14 Horas" 
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int startTime, endTime, totalTime;
	
	printf("\nDigite a hora inteira em que o jogo come�ou: ");
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


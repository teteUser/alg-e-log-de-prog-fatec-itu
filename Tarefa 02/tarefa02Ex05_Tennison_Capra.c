#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exerc�cio 5
// Tennison Capra

/*
	5. A velocidade m�dia de um ve�culo em um percurso � dada
	atrav�s da dist�ncia percorrida pelo tempo, ou seja,
	Vm = DS / Dt. Calcular a velocidade m�dia do ve�culo
	em uma estrada recebendo esses dois dados do percurso.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float dist, temp;
	
	printf("\t\t>>> Exerc�cio 5 <<<\n\n");
	
	printf("Digite a dist�ncia percorrida (em km): ");
	scanf("%f", &dist);
	printf("Digite o tempo de viagem (em horas): ");
	scanf("%f", &temp);
	printf("\n\nA velocidade m�dia foi de %.2f km/h.\n", dist/temp);	
		
	return 0;
}


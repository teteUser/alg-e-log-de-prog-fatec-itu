#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exercício 5
// Tennison Capra

/*
	5. A velocidade média de um veículo em um percurso é dada
	através da distância percorrida pelo tempo, ou seja,
	Vm = DS / Dt. Calcular a velocidade média do veículo
	em uma estrada recebendo esses dois dados do percurso.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float dist, temp;
	
	printf("\t\t>>> Exercício 5 <<<\n\n");
	
	printf("Digite a distância percorrida (em km): ");
	scanf("%f", &dist);
	printf("Digite o tempo de viagem (em horas): ");
	scanf("%f", &temp);
	printf("\n\nA velocidade média foi de %.2f km/h.\n", dist/temp);	
		
	return 0;
}


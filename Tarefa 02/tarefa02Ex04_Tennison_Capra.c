#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exerc�cio 4
// Tennison Capra

/*
	4. Receber uma temperatura em Fahrenheits e convert�-la para Celsius.
	Celsius = (Fahrenheit - 32) / 1.8
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float Ftemp;
	
	printf("\t\t>>> Exerc�cio 4 <<<\n\n");
	
	printf("Digite a temperatura em Fahrenheits: ");
	scanf("%f", &Ftemp);
	printf("\n%.2f�F � igual a %.2f�C.\n", Ftemp, (Ftemp-32)/1.8);
			
	return 0;
}


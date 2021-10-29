#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 7 - Exerc�cio 7
// Tennison Capra

/*
	7. Um tri�ngulo pode ser classificado de acordo com as medidas de seus lados: 

	- Um tri�ngulo equil�tero possui todos os lados de mesma medida. 
	- Um tri�ngulo is�sceles possui dois lados de mesma medida. 
	- Um tri�ngulo escaleno possui as medidas dos tr�s lados diferentes. 
	
	Receber os tr�s lados de um tri�ngulo em qualquer ordem (chame de lado1, lado2 e lado3)
	e classific�-lo em equil�tero, is�sceles ou escaleno.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	float side1, side2, side3;
	
	printf("\nDigite a medida do primeiro lado do tri�ngulo: ");
	scanf("%f", &side1);
	printf("Digite a medida do segundo lado do tri�ngulo: ");
	scanf("%f", &side2);
    printf("Digite a medida do terceiro lado do tri�ngulo: ");
	scanf("%f", &side3);
	
	if(side1 == side2 && side2 == side3)
		printf("\n\t>>> Tri�ngulo equil�tero <<<\n\n");
	else
		if(side1 == side2 || side1 == side3)
			printf("\n\t>>> Tri�ngulo is�sceles <<<\n\n");
		else
			if(side2 == side3)
				printf("\n\t>>> Tri�ngulo is�sceles <<<\n\n");
			else
				printf("\n\t>>> Tri�ngulo escaleno <<<\n\n");

	return 0;
}


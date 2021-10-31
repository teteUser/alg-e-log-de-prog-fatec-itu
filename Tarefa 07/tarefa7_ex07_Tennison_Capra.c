#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 7 - Exercício 7
// Tennison Capra

/*
	7. Um triângulo pode ser classificado de acordo com as medidas de seus lados: 

	- Um triângulo equilátero possui todos os lados de mesma medida. 
	- Um triângulo isósceles possui dois lados de mesma medida. 
	- Um triângulo escaleno possui as medidas dos três lados diferentes. 
	
	Receber os três lados de um triângulo em qualquer ordem (chame de lado1, lado2 e lado3)
	e classificá-lo em equilátero, isósceles ou escaleno.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	float side1, side2, side3;
	
	printf("\nDigite a medida do primeiro lado do triângulo: ");
	scanf("%f", &side1);
	printf("Digite a medida do segundo lado do triângulo: ");
	scanf("%f", &side2);
    printf("Digite a medida do terceiro lado do triângulo: ");
	scanf("%f", &side3);
	
	if(side1 == side2 && side2 == side3)
		printf("\n\t>>> Triângulo equilátero <<<\n\n");
	else
		if(side1 == side2 || side1 == side3)
			printf("\n\t>>> Triângulo isósceles <<<\n\n");
		else
			if(side2 == side3)
				printf("\n\t>>> Triângulo isósceles <<<\n\n");
			else
				printf("\n\t>>> Triângulo escaleno <<<\n\n");

	return 0;
}


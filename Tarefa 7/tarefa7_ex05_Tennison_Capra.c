#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 7 - Exerc�cio 5
// Tennison Capra

// 5. Receber tr�s n�meros e mostrar qual � o maior deles.

int main(){
	setlocale(LC_ALL, "Portuguese");

	float num1, num2, num3, maior;
	
	printf("\nDigite o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &num2);
	printf("Digite o terceiro n�mero: ");
	scanf("%f", &num3);
	
	if(num1 > num2 && num1 > num3)
		maior = num1;
	else
		if(num2 > num1 && num2 > num3)
			maior = num2;
		else
			maior = num3;
			
	printf("\nO maior n�mero digitado foi %.2f\n\n", maior);

    return 0;
}


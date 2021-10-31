#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 7 - Exercício 5
// Tennison Capra

// 5. Receber três números e mostrar qual é o maior deles.

int main(){
	setlocale(LC_ALL, "Portuguese");

	float num1, num2, num3, maior;
	
	printf("\nDigite o primeiro número: ");
	scanf("%f", &num1);
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	printf("Digite o terceiro número: ");
	scanf("%f", &num3);
	
	if(num1 > num2 && num1 > num3)
		maior = num1;
	else
		if(num2 > num1 && num2 > num3)
			maior = num2;
		else
			maior = num3;
			
	printf("\nO maior número digitado foi %.2f\n\n", maior);

    return 0;
}


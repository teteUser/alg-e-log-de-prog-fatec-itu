#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 7 - Exercício 6
// Tennison Capra

/*
	6. Implementar uma calculadora onde o usuário digita dois números e uma opção,
	que deve ser 1 para adição, 2 para subtração, 3 para multiplicação e 4 para divisão.
	Mostrar na tela caso seja informada uma opção inválida.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	float num1, num2, res;
	int op;
	
	printf("-------------------------------\n");
	printf("----      CALCULADORA      ----\n");
	printf("-------------------------------\n\n");
	
	printf("\nDigite um número: ");
	scanf("%f", &num1);
	
		printf("\nEscolha a operação.\n");
	printf("[1] - Soma\n");
	printf("[2] - Subtração\n");
	printf("[3] - Multiplicação\n");
	printf("[4] - Divisão\n\n");
	printf(">>>>  ");
	scanf("%i", &op);
	
	printf("\nDigite outro número: ");
	scanf("%f", &num2);
	
	switch(op){
		case 1:
			res = num1 + num2;
			printf("\nResultado: %.2f + %.2f = %.2f\n\n", num1, num2, res);
			break;
		case 2:
			res = num1 - num2;
			printf("\nResultado: %.2f - %.2f = %.2f\n\n", num1, num2, res);
			break;
		case 3:
			res = num1 * num2;
			printf("\nResultado: %.2f * %.2f = %.2f\n\n", num1, num2, res);
			break;
		case 4:
			res = num1 / num2;	
			printf("\nResultado: %.2f / %.2f = %.2f\n\n", num1, num2, res);
			break;
		default:
			printf("\nOperação inválida!\n\n");	
	}
			
	return 0;
}


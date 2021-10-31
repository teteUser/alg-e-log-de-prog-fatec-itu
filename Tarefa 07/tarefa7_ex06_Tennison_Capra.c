#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 7 - Exerc�cio 6
// Tennison Capra

/*
	6. Implementar uma calculadora onde o usu�rio digita dois n�meros e uma op��o,
	que deve ser 1 para adi��o, 2 para subtra��o, 3 para multiplica��o e 4 para divis�o.
	Mostrar na tela caso seja informada uma op��o inv�lida.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	float num1, num2, res;
	int op;
	
	printf("-------------------------------\n");
	printf("----      CALCULADORA      ----\n");
	printf("-------------------------------\n\n");
	
	printf("\nDigite um n�mero: ");
	scanf("%f", &num1);
	
		printf("\nEscolha a opera��o.\n");
	printf("[1] - Soma\n");
	printf("[2] - Subtra��o\n");
	printf("[3] - Multiplica��o\n");
	printf("[4] - Divis�o\n\n");
	printf(">>>>  ");
	scanf("%i", &op);
	
	printf("\nDigite outro n�mero: ");
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
			printf("\nOpera��o inv�lida!\n\n");	
	}
			
	return 0;
}


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exerc�cio 5
// Tennison Capra

//	5. Receber dois n�meros e mostrar o maior deles. 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2;
	
	printf("\nDigite o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &num2);
	
	if(num1 > num2){
		printf("\nDos dois n�meros digitados, o maior foi: %.2f\n\n", num1);
	}else{
		printf("\nDos dois n�meros digitados, o maior foi: %.2f\n\n", num2);
	}
	
	return 0;
}


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 5 - Exercício 5
// Tennison Capra

//	5. Receber dois números e mostrar o maior deles. 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2;
	
	printf("\nDigite o primeiro número: ");
	scanf("%f", &num1);
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	
	if(num1 > num2){
		printf("\nDos dois números digitados, o maior foi: %.2f\n\n", num1);
	}else{
		printf("\nDos dois números digitados, o maior foi: %.2f\n\n", num2);
	}
	
	return 0;
}


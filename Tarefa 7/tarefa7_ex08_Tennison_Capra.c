#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 7 - Exerc�cio 8
// Tennison Capra

/*
	8. Fa�a um programa para calcular o peso ideal de uma pessoa.
	Ao iniciar o programa, pe�a a idade da pessoa, pois o �ndice n�o � preciso para crian�as e pessoas idosas.
	Assim, n�o calcule para pessoas maiores que 65 anos e menores que 12 anos.
	Atrav�s do sexo (1 para masculino, 2 para feminino) e da altura, calcular o peso ideal de uma pessoa. 
	Receber tamb�m o peso atual dela e indicar se a mesma est� no
	peso ideal (margem de erro de +- 5%), acima ou abaixo, conforme o c�lculo: 
	
	F�rmula do peso ideal do homem: (72.7 * altura) � 62 
	F�rmula do peso ideal da mulher: (62.1 * altura) � 48.7
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	float height, weight, idealWeight;
	int age, sex;
	
	printf("\nDigite a idade: ");
	scanf("%d", &age);
    
    if(age < 12 || age > 65)
    	printf("\nIdade fora do intervalo para c�lculo.\n\n");
	else{
		printf("\nDigite a altura: ");
		scanf("%f", &height);
		
		do{
			printf("\nDigite a op��o do sexo:\n");
			printf("[1] - Masculino\n");
			printf("[2] - Feminino\n");
			printf(">>>> ");
			scanf("%d", &sex);
			
			if(sex != 1 && sex != 2){
				printf("\nOp��o de sexo inv�lida!\n\n");
			}
		}while(sex != 1 && sex != 2);
		
		if(sex == 1)
			idealWeight = (72.7 * height) - 62;
		if(sex == 2)
			idealWeight = (62.1 * height) - 48.7;
		
		printf("\nO peso ideal para essa altura �: %.2f\n\n", idealWeight);
		printf("Digite o seu peso: ");
		scanf("%f", &weight);
		
		if(weight < idealWeight * 0.95)
			printf("\nVoc� est� abaixo do seu peso ideal!\n\n");
		else
			if(weight > idealWeight * 1.05)
				printf("\nVoc� est� acima do seu peso ideal!\n\n");
			else
				printf("\nVoc� est� com o peso ideal para a sua altura.\n\n");
	}
	
	return 0;
}


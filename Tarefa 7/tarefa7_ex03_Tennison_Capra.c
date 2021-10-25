#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Tarefa 7 - Exerc�cio 3
// Tennison Capra

/*
	3. Calcular o IMC (�ndice de Massa Corporal) de uma pessoa atrav�s da f�rmula IMC = Peso (kg) / (Altura * Altura) (m).
	Informe a classifica��o do IMC na tela de acordo com as regras abaixo:

	< 18,5 Abaixo do peso 
	De 18,5 a menor que 25,0 Saud�vel 
	De 25,0 a menor que 30,0 Sobrepeso
	De 30,0 a menor que 35,0 Obesidade Grau I 
	De 35,0 a menor que 40,0 Obesidade Grau II (severa) 
	De 40,0 em diante Obesidade Grau III (m�rbida)
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	float weight, height, bmi; //bmi = body mass index

    printf("\nDigite o peso (em KG): ");
    scanf("%f", &weight);
    printf("Digite a altura (em metros): ");
    scanf("%f", &height);
    
    bmi = weight / pow(height,2);
    
    if(bmi < 18.5)
    	printf("\n\t>>> Abaixo do peso <<<\n\n");
    else
    	if(bmi < 25)
    		printf("\n\t>>> Saud�vel <<<\n\n");
    	else
    		if(bmi < 30)
    			printf("\n\t>>> Sobrepeso <<<\n\n");
    		else
    			if(bmi < 35)
    				printf("\n\t>>> Obesidade Grau I <<<\n\n");
    			else
    				if(bmi < 40)
    					printf("\n\t>>> Obesidade Grau II <<<\n\n");
    				else
    					printf("\n\t>>> Obesidade Grau III (m�rbida) <<<\n\n");
    
	return 0;
}



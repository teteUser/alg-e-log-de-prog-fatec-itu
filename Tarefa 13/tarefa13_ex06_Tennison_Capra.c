// Tarefa 13 - Exercício 6
// Tennison Capra

/*
	6. Desenvolver um programa que recebe a altura e o sexo (1 para masculino, 2 para feminino) de 15 pessoas. 
    Este programa deverá mostrar no final:

	 - a menor altura do grupo;
	 - a média de altura das mulheres;
	 - o número de homens; 
	 - o sexo da pessoa mais alta. 
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int sex, cont, numHom=0, sexFem=0, sexAlt=0;
	float alt, menor=9, altMulher=0, maior=0;
		
	for(cont=1; cont<=15; cont++){
		printf("\nDigite a altura (em metros) da %iª pessoa: ", cont);
		scanf("%f", &alt);
		
		printf("Digite a opção de sexo da %iª pessoa.\n[1]Masculino\n[2]Feminino\n>>>: ", cont);
		scanf("%i", &sex);
		
		if(alt < menor){
			menor = alt;
		}
		
		if(sex == 2){
			altMulher += alt;
			sexFem++;
		}
		
		if(sex == 1){
			numHom++;
		}
		
		if(alt > maior){
			maior = alt;
			sexAlt = sex;
		}
	}
	
	printf("\n\n\tA menor altura do grupo é %.2fm\n", menor);
	printf("\tA média da altura das mulheres é de %.2fm\n", altMulher/sexFem);
	printf("\tO número de homens é: %i\n", numHom);
	
	if(sexAlt == 1){
		printf("\tA pessoa mais alta é do sexo MASCULINO\n");
	}else{
		printf("\tA pessoa mais alta é do sexo FEMININO\n");
	}
		
	return 0;
}

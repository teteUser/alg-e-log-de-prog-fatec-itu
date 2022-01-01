// Tarefa 13 - Exercício 8
// Tennison Capra

/*
8. Desenvolver um programa que recebe a quantidade de alunos que estão cursando o 3º semestre. 
   Para cada aluno receber a quantidade de disciplinas que cursou no 2º semestre e também a nota final relativa a cada disciplina.
   Calcular e mostrar a média de cada aluno para verificar o aproveitamento do último semestre cursado.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont, x, qtdAlunos, qtdDisci;
	float notaFinal, media=0;
	
	printf("Quantos alunos estão cursando o 3º semestre? ");
	scanf("%i", &qtdAlunos);
	
	for(cont=1; cont<=qtdAlunos; cont++){
		printf("\nQuantas disciplinas o %iº aluno cursou no segundo semestre? ", cont);
		scanf("%i", &qtdDisci);
		
		for(x=1; x<=qtdDisci; x++){
			printf("Digite a nota final da %iª disciplina: ", x);
			scanf("%f", &notaFinal);
			media += notaFinal;
		}
		
		printf("A média final do %iº aluno no segundo semestre foi: %.2f\n", cont, media/qtdDisci);
		media = 0;
	}
			
	return 0;
}

// Tarefa 13 - Exerc�cio 8
// Tennison Capra

/*
8. Desenvolver um programa que recebe a quantidade de alunos que est�o cursando o 3� semestre. 
   Para cada aluno receber a quantidade de disciplinas que cursou no 2� semestre e tamb�m a nota final relativa a cada disciplina.
   Calcular e mostrar a m�dia de cada aluno para verificar o aproveitamento do �ltimo semestre cursado.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont, x, qtdAlunos, qtdDisci;
	float notaFinal, media=0;
	
	printf("Quantos alunos est�o cursando o 3� semestre? ");
	scanf("%i", &qtdAlunos);
	
	for(cont=1; cont<=qtdAlunos; cont++){
		printf("\nQuantas disciplinas o %i� aluno cursou no segundo semestre? ", cont);
		scanf("%i", &qtdDisci);
		
		for(x=1; x<=qtdDisci; x++){
			printf("Digite a nota final da %i� disciplina: ", x);
			scanf("%f", &notaFinal);
			media += notaFinal;
		}
		
		printf("A m�dia final do %i� aluno no segundo semestre foi: %.2f\n", cont, media/qtdDisci);
		media = 0;
	}
			
	return 0;
}

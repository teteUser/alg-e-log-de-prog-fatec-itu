#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 12 - Exercício 7
// Tennison Capra

/*
	7. Para 30 alunos da turma de Algoritmos e Programação, receber a média de teoria e a média de laboratório,
	calcular a média final (final = teoria * 0.6 + laboratório * 0.4) e informar.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int count;
	float theoGrade, labGrade;

    for(count = 1; count <= 30; count++){
    	printf("\nDigite a nota de teoria do %iº aluno: ", count);
    	scanf("%f", &theoGrade);
    	printf("Digite a nota de laboratório do %iº aluno: ", count);
    	scanf("%f", &labGrade);
    	printf("A média final do %iº aluno é: %.2f\n", count, (theoGrade*0.6)+(labGrade*0.4));
	}

	return 0;
}


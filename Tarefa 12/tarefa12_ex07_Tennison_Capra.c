#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 12 - Exerc�cio 7
// Tennison Capra

/*
	7. Para 30 alunos da turma de Algoritmos e Programa��o, receber a m�dia de teoria e a m�dia de laborat�rio,
	calcular a m�dia final (final = teoria * 0.6 + laborat�rio * 0.4) e informar.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int count;
	float theoGrade, labGrade;

    for(count = 1; count <= 30; count++){
    	printf("\nDigite a nota de teoria do %i� aluno: ", count);
    	scanf("%f", &theoGrade);
    	printf("Digite a nota de laborat�rio do %i� aluno: ", count);
    	scanf("%f", &labGrade);
    	printf("A m�dia final do %i� aluno �: %.2f\n", count, (theoGrade*0.6)+(labGrade*0.4));
	}

	return 0;
}


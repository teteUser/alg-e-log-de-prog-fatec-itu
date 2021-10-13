#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exercício 8
// Tennison Capra

/*
	8. A disciplina Algoritmos e Programação é dividida em duas partes:	teoria
	e prática. Na teoria, são aplicadas duas provas (com nota de 0 a 10 cada).
	Na prática também vale a mesma fórmula. As notas das duas partes se juntam
	no final do semestre para compor a nota do aluno na disciplina, mas a teoria
	tem peso de 60%, enquanto a prática tem peso de 40%. Receba as notas de um
	aluno em cada prova teórica e prática e mostre a nota final do semestre dele
	na disciplina.	
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float pTeorica1, pTeorica2, pPratica1, pPratica2, mediaFinal;
		
	printf("\t\t>>> Exercício 8 <<<\n\n");
	
	printf("Digite a nota da primeira prova teórica: ");
	scanf("%f", &pTeorica1);
	printf("Digite a nota da segunda prova teórica: ");
	scanf("%f", &pTeorica2);
	printf("Digite a nota da primeira prova prática: ");
	scanf("%f", &pPratica1);
	printf("Digite a nota da segunda prova prática: ");
	scanf("%f", &pPratica2);
	
	mediaFinal = ((((pTeorica1 + pTeorica2)/100)*60) + (((pPratica1 + pPratica2)/100)*40))/2;
	
	printf("\nA média final será: %.2f.\n\n", mediaFinal);
	
	return 0;
}


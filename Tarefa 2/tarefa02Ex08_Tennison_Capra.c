#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exerc�cio 8
// Tennison Capra

/*
	8. A disciplina Algoritmos e Programa��o � dividida em duas partes:	teoria
	e pr�tica. Na teoria, s�o aplicadas duas provas (com nota de 0 a 10 cada).
	Na pr�tica tamb�m vale a mesma f�rmula. As notas das duas partes se juntam
	no final do semestre para compor a nota do aluno na disciplina, mas a teoria
	tem peso de 60%, enquanto a pr�tica tem peso de 40%. Receba as notas de um
	aluno em cada prova te�rica e pr�tica e mostre a nota final do semestre dele
	na disciplina.	
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float pTeorica1, pTeorica2, pPratica1, pPratica2, mediaFinal;
		
	printf("\t\t>>> Exerc�cio 8 <<<\n\n");
	
	printf("Digite a nota da primeira prova te�rica: ");
	scanf("%f", &pTeorica1);
	printf("Digite a nota da segunda prova te�rica: ");
	scanf("%f", &pTeorica2);
	printf("Digite a nota da primeira prova pr�tica: ");
	scanf("%f", &pPratica1);
	printf("Digite a nota da segunda prova pr�tica: ");
	scanf("%f", &pPratica2);
	
	mediaFinal = ((((pTeorica1 + pTeorica2)/100)*60) + (((pPratica1 + pPratica2)/100)*40))/2;
	
	printf("\nA m�dia final ser�: %.2f.\n\n", mediaFinal);
	
	return 0;
}


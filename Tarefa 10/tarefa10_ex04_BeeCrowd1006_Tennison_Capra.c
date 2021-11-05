// Tarefa 10 - Beecrowd # 4 - Ex 1006
// Tennison Capra

/*
	Leia 3 valores, no caso, vari�veis A, B e C, que s�o as tr�s notas de um aluno.
	A seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
	Considere que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.
	
	Entrada
	O arquivo de entrada cont�m 3 valores com uma casa decimal, de dupla precis�o (double).
	
	Sa�da
	Imprima a mensagem "MEDIA" e a m�dia do aluno conforme exemplo abaixo, com 1 d�gito ap�s o ponto decimal e
	com um espa�o em branco antes e depois da igualdade. Assim como todos os problemas, n�o esque�a de imprimir
	o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error".
	
	Exemplos
	Entrada			Sa�da
	5.0
	6.0
	7.0				MEDIA = 6.3
	
	5.0
	10.0
	10.0			MEDIA = 9.0
	
	10.0
	10.0
	5.0				MEDIA = 7.5
*/

#include <stdio.h>

int main(){
	double A, B, C;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	printf("MEDIA = %.1lf\n", ((A*2)+(B*3)+(C*5))/10);
	
	return 0;
}

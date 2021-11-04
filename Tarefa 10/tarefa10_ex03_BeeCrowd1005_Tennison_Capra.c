// Tarefa 10 - Beecrowd # 3 - Ex 1005
// Tennison Capra

/*
	Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno,
	abendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0,
	sempre com uma casa decimal.

	Entrada
	O arquivo de entrada contém 2 valores com uma casa decimal cada um.
	
	Saída
	Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, com 5 dígitos após o ponto decimal e com um espaço em branco antes
	e depois da igualdade. Utilize variáveis de dupla precisão (double) e como todos os problemas, não esqueça de imprimir o fim de linha após
	o resultado, caso contrário, você receberá "Presentation Error".

	
	Samples
	Input			Output
	5.0
	7.1				MEDIA = 6.43182
	
	0.0
	7.1				MEDIA = 4.84091
	
	10.0
	10.0			MEDIA = 10.00000
*/

#include <stdio.h>

int main(){
	double A, B;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	
	printf("MEDIA = %.5lf\n", ((A*3.5)+(B*7.5))/11);
	
	return 0;
}

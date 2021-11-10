// Tarefa 10 - Beecrowd # 9 - Ex 1015
// Tennison Capra

/*
	Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a dist�ncia entre eles,
	mostrando 4 casas decimais ap�s a v�rgula, segundo a f�rmula:
	
	Dist�ncia = raiz quadrada de ( (x2 - x1)^2 + (y2 - y1)^2 )
	
	Entrada
	O arquivo de entrada cont�m duas linhas de dados. A primeira linha cont�m dois valores de ponto flutuante: x1 y1 e a segunda linha cont�m dois valores de ponto flutuante x2 y2.
	
	Sa�da
	Calcule e imprima o valor da dist�ncia segundo a f�rmula fornecida, com 4 casas ap�s o ponto decimal.
	
	Exemplos
	Entrada				Sa�da
	1.0 7.0
	5.0 9.0				4.4721
	
	-2.5 0.4
	12.1 7.3			16.1484
	
	2.5 -0.4
	-12.2 7.0			16.4575
*/

#include <stdio.h>
#include <math.h>

int main(){
	double x1, x2, y1, y2;
	
	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);
	
	printf("%.4lf\n", sqrt((pow((x2-x1),2)+pow((y2-y1),2))));
	
	return 0;
}


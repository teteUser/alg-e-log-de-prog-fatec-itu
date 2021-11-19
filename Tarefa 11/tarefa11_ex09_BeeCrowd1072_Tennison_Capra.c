// Tarefa 11 - Ex #09 - Beecrowd #1072
// Tennison Capra

/*
	Leia um valor inteiro N. Este valor ser� a quantidade de valores inteiros X que ser�o lidos em seguida.
	Mostre quantos destes valores X est�o dentro do intervalo [10,20] e quantos est�o fora do intervalo, mostrando essas informa��es.
	
	Entrada
	A primeira linha da entrada cont�m um valor inteiro N (N < 10000), que indica o n�mero de casos de teste.
	Cada caso de teste a seguir � um valor inteiro X (-107 < X <107).
	 
	Sa�da
	Para cada caso, imprima quantos n�meros est�o dentro (in) e quantos valores est�o fora (out) do intervalo.

	Exemplo
	Entrada			Sa�da
	4				2 in
	14				2 out
	123
	10
	-25	
*/

#include <stdio.h>

int main(){
	int N, i, X, in=0, out=0;
	
	scanf("%i", &N);
	
	for(i=1;i<=N;i++){
		scanf("%i", &X);
		if(X>=10 && X<=20){
			in++;	
		}else{
			out++;
		}
	}
	
	printf("%i in\n%i out\n", in, out);
		
	return 0;
}


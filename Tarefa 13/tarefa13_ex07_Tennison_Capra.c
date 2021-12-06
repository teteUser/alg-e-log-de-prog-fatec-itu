// Tarefa 13 - Exerc�cio 7
// Tennison Capra

/*
	7. Implemente um programa que imprime a figura abaixo.
	A quantidade de linhas da figura abaixo dever� ser informada pelo usu�rio, sendo o m�ximo de linhas permitido de 20 linhas,
	e o m�nimo de 1 linha. No exemplo abaixo a quantidade de linhas � de 4.

     *
    ***
   ***** 
  ******* 
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, y, linhas=0;
	
	do{
		printf("Quantas linhas voc� deseja que a figura tenha: ");
		scanf("%i", &linhas);
		if(linhas<1 || linhas>20){
			printf("Escolha entre 1 e 20 linhas!\n\n");
		}
	}while(linhas<1 || linhas>20);
	
	for(x=1; x<=1; x++){
		for(y=linhas-x; y>=1; y--){
			printf(" ");
		}
		for(y=1; y<=x; y++){
			printf("*");
		}
	}
	
	printf("\n");
	
	for(x=1; x<=linhas; x++){
		for(y=linhas-x; y>=1; y--){
			printf(" ");
		}
		for(y=1; y<=x; y++){
			printf("*");
		}
		for(y=1; y<=x; y++){
			printf("*");
		}
		for(y=linhas-x; y>=1; y--){
			printf(" ");
		}
		
		printf("\n");
	}
			
	return 0;
}

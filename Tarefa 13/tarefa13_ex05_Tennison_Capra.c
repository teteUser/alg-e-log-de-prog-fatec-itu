// Tarefa 13 - Exerc�cio 5
// Tennison Capra

/*
	5. A prefeitura de uma cidade de 15 habitantes fez uma pesquisa coletando sal�rio e n�mero de filhos de cada um. 
    A prefeitura deseja saber: 
   
   - m�dia do sal�rio da popula��o; 
   - m�dia do n�mero de filhos; 
   - maior sal�rio; 
   - percentual de pessoas com sal�rio at� R$ 500,00. 
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont, fil;
	float sal, totSal=0, perc=0, maior=0, totFil=0;
	
	for(cont=1; cont<=15; cont++){
		printf("\nDigite o sal�rio da %i� pessoa: ", cont);
		scanf("%f", &sal);
		
		printf("Quantos filhos a %i� pessoa tem? ", cont);
		scanf("%i", &fil);
	
		totSal += sal;
		totFil += fil;
		
		if(sal > maior){
			maior = sal;
		}
		
		if(sal <= 500){
			perc++;
		}
		
	}
	
	printf("\n\n\t----------------------------------------------------------------");
	printf("\n\t| A m�dia do sal�rio da popula��o � de R$ %.2f por pessoa.   \n", totSal/15);
	printf("\t| A m�dia de filhos � de %.2f filhos por pessoa.               \n", totFil/15);
	printf("\t| O maior sal�rio digitado foi R$ %.2f                      \n", maior);
	printf("\t| O percentual de pessoas com sal�rio de at� R$500,00 � de %.1f%% \n", (perc/15)*100);
	printf("\t----------------------------------------------------------------\n\n\n");
	
	return 0;
}

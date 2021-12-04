// Tarefa 13 - Exercício 5
// Tennison Capra

/*
	5. A prefeitura de uma cidade de 15 habitantes fez uma pesquisa coletando salário e número de filhos de cada um. 
    A prefeitura deseja saber: 
   
   - média do salário da população; 
   - média do número de filhos; 
   - maior salário; 
   - percentual de pessoas com salário até R$ 500,00. 
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont, fil;
	float sal, totSal=0, perc=0, maior=0, totFil=0;
	
	for(cont=1; cont<=15; cont++){
		printf("\nDigite o salário da %iª pessoa: ", cont);
		scanf("%f", &sal);
		
		printf("Quantos filhos a %iª pessoa tem? ", cont);
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
	printf("\n\t| A média do salário da população é de R$ %.2f por pessoa.   \n", totSal/15);
	printf("\t| A média de filhos é de %.2f filhos por pessoa.               \n", totFil/15);
	printf("\t| O maior salário digitado foi R$ %.2f                      \n", maior);
	printf("\t| O percentual de pessoas com salário de até R$500,00 é de %.1f%% \n", (perc/15)*100);
	printf("\t----------------------------------------------------------------\n\n\n");
	
	return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

/* Tarefa 06 - Tennison Capra
	Instruções
	Receber a idade de uma pessoa.
	Classificar a pessoa conforme a sua idade:
	Bebê, Criança, Adolescente, Jovem, Adulto, Idoso e Matusalém.
	Se o usuário digitar uma idade menor que zero, mostrar uma mensagem de erro e finalizar a aplicação.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int age;
		
	printf("\nDigite a idade: ");
	scanf("%d", &age);
	
	if(age < 0)
		printf("\nIdade inválida!\n\n");
	else
		if(age >= 0 && age <= 2)
			printf("\nAlguém com essa idade é considerado(a) bebê.\n");
		else
			if(age > 2 && age < 11)
				printf("\nAlguém com essa idade é considerado(a) criança.\n");
			else
				if(age >= 11 && age <20)
					printf("\nAlguém com essa idade é considerado(a) adolescente.\n");
				else
					if(age >= 20 && age <= 24)
						printf("\nAlguém com essa idade é considerado(a) jovem.\n");
					else
						if(age > 24 && age <= 59)
							printf("\nAlguém com essa idade é considerado(a) adulto(a).\n");
						else
							if(age > 59 && age <= 110)
							 printf("\nAlguém com essa idade é considerado(a) idoso(a).\n");
							else
								printf("\nAlguém com essa idade é considerado(a) Matusalém.\n");

	
	return 0;
}

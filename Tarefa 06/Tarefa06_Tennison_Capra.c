#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

/* Tarefa 06 - Tennison Capra
	Instru��es
	Receber a idade de uma pessoa.
	Classificar a pessoa conforme a sua idade:
	Beb�, Crian�a, Adolescente, Jovem, Adulto, Idoso e Matusal�m.
	Se o usu�rio digitar uma idade menor que zero, mostrar uma mensagem de erro e finalizar a aplica��o.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int age;
		
	printf("\nDigite a idade: ");
	scanf("%d", &age);
	
	if(age < 0)
		printf("\nIdade inv�lida!\n\n");
	else
		if(age >= 0 && age <= 2)
			printf("\nAlgu�m com essa idade � considerado(a) beb�.\n");
		else
			if(age > 2 && age < 11)
				printf("\nAlgu�m com essa idade � considerado(a) crian�a.\n");
			else
				if(age >= 11 && age <20)
					printf("\nAlgu�m com essa idade � considerado(a) adolescente.\n");
				else
					if(age >= 20 && age <= 24)
						printf("\nAlgu�m com essa idade � considerado(a) jovem.\n");
					else
						if(age > 24 && age <= 59)
							printf("\nAlgu�m com essa idade � considerado(a) adulto(a).\n");
						else
							if(age > 59 && age <= 110)
							 printf("\nAlgu�m com essa idade � considerado(a) idoso(a).\n");
							else
								printf("\nAlgu�m com essa idade � considerado(a) Matusal�m.\n");

	
	return 0;
}

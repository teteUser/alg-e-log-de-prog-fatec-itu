#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exerc�cio 9
// Tennison Capra

/*
	9. Na Dinamarca todo cidad�o tem acesso � educa��o e sa�de de qualidade
	atrav�s do pagamento de um imposto �nico sobre o sal�rio, de 37%.
	Receber o sal�rio bruto (valor do sal�rio sem descontos) de um trabalhador
	dinamarqu�s e calcular o sal�rio l�quido (valor do sal�rio ap�s os descontos).	
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salarioBruto;
		
	printf("\t\t>>> Exerc�cio 9 <<<\n\n");
	
	printf("Digite o sal�rio bruto: ");
	scanf("%f", &salarioBruto);
	printf("\nO sal�rio l�quido ser� KR$%.2f.\n\n", salarioBruto*0.63);
	//Se tem desconto de 37%, ent�o o valor a receber � de 63% do sal�rio bruto, que em n�mero decimal � 0.63
	//Estamos calculando o sal�rio de um trabalhador dinamarqu�s, por isso o s�mbolo da coroa dinamarquesa no resultado (KR).
			
	return 0;
}


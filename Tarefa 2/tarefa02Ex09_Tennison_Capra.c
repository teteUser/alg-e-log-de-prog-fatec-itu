#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Tarefa 2 - Exercício 9
// Tennison Capra

/*
	9. Na Dinamarca todo cidadão tem acesso à educação e saúde de qualidade
	através do pagamento de um imposto único sobre o salário, de 37%.
	Receber o salário bruto (valor do salário sem descontos) de um trabalhador
	dinamarquês e calcular o salário líquido (valor do salário após os descontos).	
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salarioBruto;
		
	printf("\t\t>>> Exercício 9 <<<\n\n");
	
	printf("Digite o salário bruto: ");
	scanf("%f", &salarioBruto);
	printf("\nO salário líquido será KR$%.2f.\n\n", salarioBruto*0.63);
	//Se tem desconto de 37%, então o valor a receber é de 63% do salário bruto, que em número decimal é 0.63
	//Estamos calculando o salário de um trabalhador dinamarquês, por isso o símbolo da coroa dinamarquesa no resultado (KR).
			
	return 0;
}


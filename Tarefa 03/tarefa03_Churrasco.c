#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>>

/*	Tarefa 03 - Churrasco - Tennison Capra

	Rascunho de lista:
	1- Picanha - 50g por pessoa, por hora
	2- Cox�o mole - 50g por pessoa, por hora
	3- ac�m - 50g por pessoa, por hora
	4- cora��o - 50g por pessoa, por hora
	5- lingui�a apimentada - 40g por pessoa, por hora
	6- coxa de frango - 40g por pessoa, por hora
	7- asa de frango - 40g por pessoa, por hora
	8- p�o de alho - 2 por adulto e 1 por crian�a, por hora (4 por pacote)
	9- refrigerante - 2 latas por crian�a, por hora
	10- cerveja - 4 latas por homem e 3 latas por mulher, por hora
	
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int homens, mulheres, criancas, refri=0, cerveja=0;
	float tempo, picanha=0, coxaoMole=0, acem=0, coracao=0, linguica=0, coxa=0, asa=0, paodeAlho=0;
	
	printf("\t\t------- CHURRASCO TOP DAS GAL�XIAS -------\n\n");
	
	printf("Digite a quantidade de homens: ");
	scanf("%i", &homens);
	printf("Digite a quantidade de mulheres: ");
	scanf("%i", &mulheres);
	printf("Digite a quantidade de crian�as: ");
	scanf("%i", &criancas);
	printf("Digite o tempo estimado de dura��o do churrasco (em horas): ");
	scanf("%f", &tempo);
	
	picanha = (homens + mulheres + criancas) * 0.05 * tempo;
	coxaoMole = (homens + mulheres + criancas) * 0.05 * tempo;
	acem = (homens + mulheres + criancas) * 0.05 * tempo;
	coracao = (homens + mulheres + criancas) * 0.05 * tempo;
	linguica = (homens + mulheres + criancas) * 0.04 * tempo;
	coxa = (homens + mulheres + criancas) * 0.04 * tempo;
	asa = (homens + mulheres + criancas) * 0.04 * tempo;
	paodeAlho = ((homens + mulheres) * 2 + criancas) * tempo / 4;
	refri = criancas * 2 * tempo;
	cerveja = ((homens * 4) + (mulheres * 3)) * tempo;
	
	printf("\n\nComprar:\n");
	printf("1- Picanha: %.3fKG. (Arredondado: %.0fKG)\n", picanha, ceil(picanha));
	printf("2- Cox�o mole: %.3fKG. (Arredondado: %.0fKG)\n", coxaoMole, ceil(coxaoMole));
	printf("3- Ac�m: %.3fKG. (Arredondado: %.0fKG)\n", acem, ceil(acem));
	printf("4- Cora��o: %.3fKG. (Arredondado: %.0fKG)\n", coracao, ceil(coracao));
	printf("5- Lingui�a apimentada: %.3fKG. (Arredondado: %.0fKG)\n", linguica, ceil(linguica));
	printf("6- Coxa de frango: %.3fKG. (Arredondado: %.0fKG)\n", coxa, ceil(coxa));
	printf("7- Asa de frango: %.3fKG. (Arredondado: %.0fKG)\n", asa, ceil(asa));
	printf("8- P�o de alho: %.0f pacotes\n", ceil(paodeAlho));
	printf("9- Refrigerante: %i latas\n", refri);
	printf("10- Cerveja: %i latas\n\n", cerveja);
	
	return 0;
}


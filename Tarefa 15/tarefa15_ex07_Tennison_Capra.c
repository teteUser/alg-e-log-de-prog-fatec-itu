// Tarefa 15 - Exercício 7
// Tennison Capra

/*
    7. Faça um programa que receba valores para uma matriz de inteiro de tamanho 4X4,
	porém não deixar repetir valores dentro da matriz!
	No final imprimir a matriz.
*/

#include <stdio.h>
#include <locale.h>
#define lin 4
#define col 4

int main(){
    setlocale(LC_ALL, "Portuguese");
	int matriz[lin][col], i, j, x, y, num=-1, num2=-2, check;
	matriz[0][0] = -3;
	
	printf("\nDigite os valores da matriz %ix%i:\n", lin, col);
		
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			
			do {
				scanf("%i", &num);
				check = 0;
				
				if(num2 != num){
					for(x=i; x>=0; x--){
						for(y=j; y>=0; y--){
							if(matriz[x][y] == num){
								printf("\nNúmero repetido {%i}. Favor digitar outro número:\n", num);
								check = 1;
								num2 = num;
								if(j>0){
									j--;	
								}else{
									i--;
									j = col - 1;
								}
							}
						}
					}
				}else{
					printf("\nVocê acabou de digitar esse número. Digite um número diferente e que ainda não foi digitado!\n");
				}		
			} while (check);
			
			matriz[i][j] = num;
		}
	}
	
	printf("\n\n");
	printf("Segue abaixo a matriz digitada: \n");
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			printf("\t%i\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	
    return 0;
}

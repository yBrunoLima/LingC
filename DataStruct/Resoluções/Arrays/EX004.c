/*
 * EX004- Faça um programa C para ler do usuário dois valores inteiros X e Y. Alimente dois vetores de tamanhos X e Y com
 * números inteiros aleatórios, não repetitivos, sorteados no intervalo entre 0 e X+Y (inclusive). Faça a impressão das
 * seguintes informações:
 * a) Vetores X e Y; 	COMPLETO
 * b) Todos os números exclusivos do vetor X;
 * c) Todos os números exclusivos do vetor Y;
 * d) Os números existentes nos dois vetores;
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int x, y; //Tamanho dos vetores
	printf("Digite o tamanho de dois vetores X e Y:");
	scanf(" %d %d", &x, &y);
	int v1[x], v2[y], sorteio, cont = 0; //Alimentar os vetores com X e Y
	//Preencimento do Vetor 1
	printf("VETOR 1\n");
	do{
		int rep = 1; //Verificador de repetição de número
		sorteio = rand() % (x+y+1);
		for(int i = 0; i < x; i++){
			if(sorteio == v1[i]){
				rep = 0;
				break;
			};
		};
		if(rep){
			v1[cont] = sorteio;
			printf(" %d ", v1[cont]);
			cont++;
			};
	}while(cont < x);
	//Preencimento do Vetor 2
	cont = 0; //Zerar a variável contadora
	printf("\n");
	printf("VETOR 2\n");
	int i = 0;
	do{
		int rep = 1; //Verificador de repetição de número
		sorteio = rand() % (x+y+1);
		for(int i = 0; i < x; i++){
			if(sorteio == v2[i]){
				rep = 0;
				break;
			};
		};
		if(rep){
			v2[cont] = sorteio;
			printf(" %d ", v2[cont]);
			cont++;
			};
	}while(cont < y || sorteio == v1[i]);
	
	
	
	//Verificação de números eccluivos
	int exclusivo = 1, excl_x[x], excl_y[y], excl_x_y[x+y];
	cont = 0;
	for(int i=0; i < x; i++){
		exclusivo = 1;
		for(int j = 0; j < y; j++){
			if(v1[i] == v2[j]){
				exclusivo = 0;
				break;
			}
		}
		if(exclusivo){
			excl_x[cont] = v1[i];
			cont++;
			}
	}
	
	cont = 0;
	for(int i=0; i < y; i++){
		exclusivo = 1;
		for(int j = 0; j < x; j++){
			if(v2[i] == v1[j]){
				exclusivo = 0;
				break;
			}
		}
		if(exclusivo){
			excl_y[cont] = v2[i];
			cont++;
			}
	}
	
	
	
	
	
	
	
	int num_rep = 0, num_excl_x = 0, num_excl_y = 0;
	//Verificação de números iguais
		for(int i = 0; i < y; i++){
			for(int j = 0; j < x; j++){
				if(v1[j] == v2[i]){
					excl_x_y[num_rep] = v1[j]; 
					num_rep++;
					break;
				}
			}
		}
		num_excl_x = x - num_rep;
		num_excl_y = y - num_rep;
	printf("\n");
	printf("Números exclusívos de X: %d\n", num_excl_x);
	printf("Números exclusívos de Y: %d\n", num_excl_y);
	printf("Quantidade de números iguais nos dois vetores: %d\n", num_rep);
	printf("Números exclusivos em X: ");
	for(int i = 0; i < num_excl_x; i++)
		printf(" %d", excl_x[i]);
	printf("\nNúmeros exclusivos em Y: ");
	for(int i = 0; i < num_excl_y; i++)
		printf(" %d", excl_y[i]);
	printf("\nNúmeros Repetidos: ");
	for(int i = 0; i < num_rep; i++)
		printf(" %d", excl_x_y[i]);
	return 0;
}


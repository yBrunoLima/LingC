/*
 * EX001 - Um baralho tem N cartas, não-repetidas, numeradas entre 1 e N. Faça um programa que leia o valor de N 
 * e imprima o resultado do “embaralhamento” das cartas.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
		srand(time(NULL));
		int tam; //Tamanho do baralho
		printf("Digite o tamanho do Baralho:");
		scanf(" %d", &tam);
		int baralho[tam], sorteio = 0, cont = 0,rep;
		do{
			rep = 1;
			sorteio = (1 + rand() % tam);
			for(int i = 0; i < tam; i++){
				if(sorteio == baralho[i]){
					rep = 0;
					break;
				}	
			}
			if(rep){
					baralho[cont] = sorteio;
					cont++;
				}
		}while(cont < tam);
	
	for(int i = 0; i < tam; i++){
		if(i == tam - 1){
			printf(" %d", baralho[i]);
		}else
			printf(" %d -", baralho[i]);
	}
	return 0;
}


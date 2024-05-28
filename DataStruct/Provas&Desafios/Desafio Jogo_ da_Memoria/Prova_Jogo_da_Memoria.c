/*
 * PROVA JOGO DA MEMORIA */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	srand(time(NULL));
	int qntCartas;
	printf("Digite a quantidade de cartas do Jogo[Num == par]:");
	do{
		scanf(" %d", &qntCartas);
		qntCartas % 2 == 0?qntCartas:printf("Digite a quantidade de cartas do Jogo[Num == par]:");
		
	}while(qntCartas % 2 != 0);
	
	char game[qntCartas], aux[qntCartas];
	int div = qntCartas / 2;
	int i = 0, rep = 0;
	
	//Sortear as letras específicas
	for(i = 0; i < div; i++){
		int sort;
		do{
			rep = 0;
			sort = 65 + rand() % (90 - 65 + 1);
			for(int j = 0; j < div; j++){
				if(game[j] == sort){
					rep = 1;
					break;
					}
				}
			if(rep != 1){
				game[i] = sort;
				aux[i] = sort;
				break;
			}
		}while(1);
	}
	//Efetuar o embaralhamento da sequencia
	int aleat[div];
	for(i = 0; i < div; i++){
		int sort;
		do{
			rep = 0;
			sort = div + rand() % (qntCartas - div);
			for(int j = 0; j < div; j++){
				if(sort == aleat[j]){
					rep = 1;
					break;
					}
				}
			if(rep != 1){
				aleat[i] = sort;
				break;
				}
		}while(1);
		game[aleat[i]] = aux[i];
	}
	system("clear");	
	
	
	//Começo do jogo
	printf("COMEÇA O JOGO!!\n");
	int n1, n2, cont = 0, contpar = 0;
	do{
		for(i  = 0; i < qntCartas; i++){
			if(game[i] != -1)
				printf(" [%d]", i);
				}
			printf("\n");
			printf("Digite dois valores para encontrar as cartas:\n");
			scanf(" %d %d", &n1, &n2);
			cont++;
			printf("Você encontrou as letras: %c-%c\n", game[n1], game[n2]);
			if(game[n1] != game[n2]){
				printf("Infelizmente não é o par correto\n");
			}else{
				printf("Parabens você encontrou um par.\n");
				game[n1] = -1;
				game[n2] = -1;
				contpar++;
				}
		}while(contpar < div);
		system("clear");
		printf("PARABENS VOCÊ COMPLETOU O JOGO\n");
		printf("Você precisou de %d tentativas\n", cont);
				
	
	
	return 0;
}


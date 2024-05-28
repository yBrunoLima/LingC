/*
 * EX016 - Faça um programa que leia dois valores inteiros X e Y, tal que Y >= X. O programa deverá sortear N valores no
 * intervalo entre X e Y (inclusive). Obs.: Os números sorteados no intervalo entre X e Y não podem ser obtidos por
* tentativa e erro!
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int x, y, aux, cont = 1;
	printf("Digite um intervalo(X, Y):\n");
	scanf(" %d", &x);
	scanf(" %d", &y);
	if(x > y){
		aux = x;
		x = y;
		y = aux;
		}
	while(cont){
		printf("SORTEIO DE NÙMEROS ALEATÒRIOS\nDigite se deseja continuar( 0 = não | 1 = sim):\n");
		scanf(" %d", &cont);
		
		if(cont != 1) {
				break;
		}
		int sort = x + rand() % ((y - x)+ 1);
		printf("NÚMERO SORTEADO: %d\n", sort);
		
		}
	return 0;
}


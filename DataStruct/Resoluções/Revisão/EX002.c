/*
 * EX002 - Faça um programa que leia um par de valores inteiros(X,Y), tal que, obrigatoriamente Y>=X. 
 *O programa deve calcular e imprimir o valor da soma de todos os números inteiros do intervalo X,Y (inclusive).
 *A operação deve ser repetida até que os dois valores (X e Y) informados sejam negativos. (P.ex.: (7,11)==45; (53,68)==968).
 */


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x = 0, y = 0, soma = 0, num = 0;
	do
	{
		printf("Digite um valor inteiro X: ");
		scanf(" %d", &x);
		printf("Digite um valor inteiro Y: ");
		scanf(" %d", &y);
		if(y < x)
		{
		num = x;
		x = y;
		y = num;
		}	
			for(int n = x;n <= y; n++)
			{
				soma += n;
				}
			printf("(%d,%d) == %d\n", x, y, soma);
			soma = 0;
		}while(x >= 0 && y >= 0);
	return 0;
}


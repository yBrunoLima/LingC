/*
 * EX005 - Faça um programa que leia um valor inteiro N não-negativo. O programa deve calcular e imprimir o valor de N! N Fatorial. 
 * P.Ex.: 6! == 720; 9! == 362880. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, fatorial = 0;
	printf("Digite um valor qualquer: ");
	scanf(" %d", &n);
	if(n == 0)
	{
		fatorial = 1;
		}
	for(int i = 0; i < n; i++)
	{
		fatorial = n;
		fatorial *= (n-1);
		}
	printf("%d! == %d", n, fatorial);
}


/*
 * EX011 - Faça um programa que imprima na tela um triângulo equilátero formado por símbolos*.
 * Este triângulo deve ter altura de N linhas (N >= 2 e deve ser informado pelo usuário no início da execução)
 */


#include <stdio.h>

int main(void)
{
	int linha;
	printf("Número de linhas do triângulo(>=2): ");
	scanf(" %d", &linha);
	for(int i = 0; i < linha; i++)
	{	
		for(int j = 0; j <= linha - i; j++)
		{
			printf(" ");
			}
		for(int j = 0; j <= 2 * (i - 1); j++)
		{
			printf("*");
			}
		printf("\n");
		}
	return 0;
}


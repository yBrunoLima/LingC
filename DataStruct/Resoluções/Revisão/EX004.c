/*
 * EX004 - Faça um programa que leia um valor inicial N e uma razão R. 
 * Imprima uma sequência em P.A. contendo 10 valores, e uma sequência em P.G. contendo 10 valores. P.Ex.: N == 3 e R == 2. 
 * PA = 3 - 5 - 7 - 9 - 11 - 13 - 15 - 17 - 19 - 21
 * PG = 3 - 6 - 12 - 24 - 48 - 96 - 192 - 384 - 768 - 1536 
 */


#include <stdio.h>
#include <math.h>

int main(void)
{
	int num = 0, r = 0;
	printf("P.A e P.G\n");
	printf("Digite um valor: ");
	scanf(" %d", &num);
	printf("Digite a razão para ser calculada: ");
	scanf(" %d", &r);
	printf("\nPA = %d ", num);
	int pa = num, pg = num;
	for(int n = 0; n < 9; n++)
	{
		pa += r;
		printf("- %d ", pa);
		}
	printf("\nPG = %d ", num);
	for(int n = 0; n < 9; n++)
	{
		pg *= r;
		printf("- %d ", pg);
	}	
	return 0;
}


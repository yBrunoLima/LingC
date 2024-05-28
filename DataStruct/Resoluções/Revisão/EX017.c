/*
 * EX017 - Crie um programa que calcule o M.M.C (mínimo múltiplo comum) e o M.D.C (máximo divisor comum) entre dois
 * números lidos. (p. ex.: MMC (10, 15) = 30 e MDC (10, 15) = 5). 
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n1 = 0, n2 = 0, mmc = 1, mdc = 1;
	printf("Digite dois valores:\n");
	scanf(" %d", &n1);
	scanf(" %d", &n2);
	for(int i = 1;i <=  n1/2 || i <=  n2/2; i++){
		if((n1 % i == 0) || (n2 % i == 0)){
			mmc *= i;
			printf(" %d\n", mmc);
		}
		if(n1 % i == 0 && n2 % i == 0){
			mdc *= i;
		}
	}
	printf(" MMC: %d\n", mmc);
	printf(" MDC: %d\n", mdc);
	return 0;
}


/*
 * EX015 - Faça um programa que receba um número e verifique se ele é ou não um número perfeito.
 * Um número é perfeito quando a soma de todos os seus divisores inteiros – excluindo ele mesmo – é igual ao próprio
 * número. Ex: 28 = 1 + 2 + 4 + 7 + 14. 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 0, somaDiv = 0;
	printf("Digite um número: ");
	scanf(" %d", &num);
	for(int i = 1; i <= num / 2; i++){
		if(num % i == 0){
			somaDiv += i;
		}
	}
	if(somaDiv == num){
		printf("ESSE È UM NÙMERO PERFEITO");
	}else{
		printf("ESSE È UM NÙMERO PERFEITO");
		}
		
	return 0;
}


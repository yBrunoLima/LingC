/*
 * EX014 - Sabendo que o valor de pi pode ser calculado através da série Gregory-Leibniz:
 * π = (4/1) - (4/3) + (4/5) - (4/7) + (4/9) - (4/11) + (4/13) - (4/15) …
 * Faça um algoritmo para calcular e imprimir o valor de pi, com 15 casas decimais, obtido até o 999.999.999º termo da série. 
 * (Resposta correta: 3.141592654588051)
 */


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float pi = 0;
	long num = 999999999;
	for(int i = 1, c=0; i <= num; i += 2, c++){
		
		if(c % 2 == 0){
			pi += (float)  4/i;
		}else{
			pi -= (float) 4/i;
		}
		
	}
	printf("\nO VALOR DE PI: %.15f", pi);
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
 * Faça um programa que gere N números de matrícula no formato ABCD-V, onde V é um dígito verificador, no qual:
 * V = | A – B + C – D |
 * se V >= 10, então V = d1+d2 (a soma dos dois dígitos). 
 */

int main(void)
{
	srand(time(NULL));
	int num = 0;
	do{
		int n = rand() % 10000;
		printf("Digite um número natural: ");
		scanf(" %d", &num);
		if(num > 0){
		int a = 0, b = 0, c = 0, d = 0;
		a = n / 1000;
		b = (n / 100) % 10;
		c = (n / 10 ) % 10;
		d = (n % 10);
		int v = abs(a - b + c - d);
		if(v >= 10){
			int d1 = 0, d2 = 0;
			d1 = v / 10;
			d2 = v % 10;
			v = d1+d2;
		}
		printf("SEQUENCIA ABCD-V: %d-%d\n", n, v);
	}
	}while(num > 0);
	return 0;
}


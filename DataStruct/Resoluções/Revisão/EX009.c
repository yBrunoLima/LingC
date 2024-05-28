/*
 * EX009 - Faça um programa que declare duas variáveis do tipo char, faça a leitura, validando a entrada 
 * para que seja lido apenas símbolos numéricos (entre ‘0’ e ‘9’). Após isso, converta e imprima o valor da multiplicação dos números.
 */

#include <stdio.h>

int main(void)
{
	char n1, n2;
	printf("Digite um valor(0-9): ");
	scanf(" %[^\n]c", &n1);
	printf("Digite um valor(0-9): ");
	scanf(" %[^\n]c", &n2);
	int mult = 0;
	n1 = n1 - '0';
	n2 = n2 - '0';
	mult = n1*n2;
	printf("A multiplicação desses valores: %d", mult);
	return 0;
}


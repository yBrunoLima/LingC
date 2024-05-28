/*
 * EX006 - Sabia que a sequência Fibonacci está ligada intimamente à natureza? Os números da série são facilmente encontrados nos seres vivos e no meio ambiente.
 * Essa série é infinita e se inicia com os valores: 1, 1, 2, 3, 5, 8, 13, 21, 34, (...), onde o próximo valor sempre será a soma dos dois valores anteriores.
 * Faça um programa que leia um valor N, e imprima todos N primeiros termos da série Fibonacci. Após isso, imprima o resultado da divisão do último termo pelo penúltimo termo. 
 * Repita essa mesma operação para diversos valores de N diferentes, e veja o que acontece de interessante...
 * Dica: Pesquise na Internet o conceito de “Proporção Áurea" ou “Proporção Divina” 
 */


#include <stdio.h>
#include <math.h>

int main(void)
{
	int num_seq = 0;
	int n = 1;
	int fibonacci = 0;
	printf("Digite um valor: ");
	scanf(" %d", &num_seq);
	for(int i = 0; i < num_seq; i++)
	{
		fibonacci += n;
		printf("%d \n", fibonacci);
		n = fibonacci - n ;

		}
	float div = 0;
	div = (float)fibonacci / n;
	printf("\n%.2f", div);
	return 0;
}


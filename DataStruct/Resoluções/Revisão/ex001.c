/*
 * EX001 - Faça um programa que leia um número indeterminado de valores inteiros. A leitura somente será interrompida
 * quando o usuário informar o valor zero. Valores negativos devem ser ignorados para os cálculos.
 * O programa deve gerar os seguintes resultados(ignorando valor 0 e negativos): Soma dos números lidos, 
 * Média dos números lidos, Maior valor informado, Menor valor informado, Percentual de números pares
 * e o Percentual de Números ímpares.
*/


#include <stdio.h>
#include <stdlib.h>


void linha(int tam)
{
	int i;
		printf("\n");
	for(i = 0; i < tam; i++)
	{
		printf("-=");
	}
		printf("\n");
}
int main(void)
{
	int num = 0, soma = 0, par = 0, impar = 0, maior_valor = 0, menor_valor = 999999999, cont = 0;
	do{
		printf("Digite um número: ");
		scanf(" %d", &num);
		if(num > 0)
		{
			cont += 1;
			soma += num;
			if(num % 2 == 0)
			{
				par += 1;
			}else{
						impar += 1;
						}
			if(menor_valor > num)
			{
				menor_valor = num;
				}
			if(maior_valor < num)
			{
				maior_valor = num;
				
				}
			}
		
		
	}while(!num == 0);
		system(" clear");
		linha(30);
		printf("\t\t\tRESULTADO");
		linha(30);
		float media = 0;
		media = (float)soma / cont;
		float num_par = ((float)par*100)/cont;
		float num_impar = ((float)impar*100)/cont;
		printf("A média dos Valores: %.2f\n", media);
		printf("A soma dos números lidos: %d\n", soma);
		printf("O maior valor: %d\n", maior_valor);
		printf("O menor valor: %d\n", menor_valor);
		printf("Percentual de números pares: %.2f\n%%", num_par);
		printf("Percentual de números impares: %.2f\n%%", num_impar);
		linha(30);
	return 0;
}


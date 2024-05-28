/*
 * EX008 - Faça um programa que gere um número aleatório entre 0 e K. O programa deve imprimir
 * o número sorteado e a quantidade de dígitos que ele possui (p.ex.: O número 6958 possui 4 dígitos).
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
 {
	srand(time(NULL));
	int contador = 0, valor = 0;
	printf("Digite um valor limite para sortearmos um número aleatório: ");
	scanf("%d", &valor);
	int num = (rand() % valor);
	printf("\nO VALOR SORTEADO: %d\n", num);
    if (num == 0)
		contador = 1;
      else

         {
			do{
              contador  += 1;
              num /= 10;
           }while(num != 0);
	   }
      printf("O número de digitos: %d\n", contador);
     return 0;
}

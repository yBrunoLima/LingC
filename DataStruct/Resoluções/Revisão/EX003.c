/*
 * EX003 - CALCULADORA USANDO O SWITCH CASE 
 */


#include <stdio.h>
#include <math.h>

int potencia(int base, int expoente)
	{
		int result = 1;
			for(int n = 0; n <= expoente; n++)
			{
				result *= base;
				}
		return result;
		}
int main(void)
{
	int n1 = 0, n2 = 0;
	char op;
	printf("Digite um valor: ");
	scanf(" %i", &n1);
	printf("Digite outro valor: ");
	scanf(" %i", &n2);
	printf("=-=-=-=-=-=-=-=-=CALCULADORA PIKA DE CAVALO=-=-=-=-=-=-=-=-=\n Divisão(\\)\n Multiplicacão(*)\n Adição(+)\n Subtração(-)\n Resto(%%)\n Exponeciação(^)\n------------------------------------------------------------\n");
	printf("Digite o operador que deseja efetuar: ");
	scanf(" %c", &op);
	switch(op)
	{
		case '\\':
			float div = (float)n1/n2;
			printf(" %d \\ %d  = %.2f", n1, n2, div);
			break;
		case '*':
			printf(" %d * %d  = %d", n1, n2, n1*n2);
			break;
		case '-':
			printf(" %d - %d  = %d", n1, n2, n1-n2);
			break;
		case '+':
			printf(" %d + %d  = %d", n1, n2, n1+n2);
			break;
		case '%':
			float res = n1 % n2;
			printf(" %d %% %d  = %.f", n1, n2, res);
			break;
		case '^':
			printf(" %d ^ %d  = %d", n1, n2, potencia(n1, n2));
			break;
		}
	return 0;
}

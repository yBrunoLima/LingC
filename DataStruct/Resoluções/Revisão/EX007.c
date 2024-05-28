/*
 * EX007 - Faça um programa que receba do usuário o comprimento de três retas. 
 * O programa deve informar ao usuário se é possível ou não formar um triângulo com essas retas
 */


#include <stdio.h>

int main(void)
{
	int tri[3] = {}, num = 0;
	printf("=-=-=-=-=-=-=-=-=-=MONTANDO UM TRIÂNGULO=-=-=-=-=-=-=-=-=-=-=\n");
	for(int i = 0; i < 3; i++)
	{
		num++;
		printf("Digite um valor %d : ", num);
		scanf(" %d", &tri[i]);
		}
	if(tri[0] < tri[1] + tri[2] && tri[1] < tri[0] + tri[2] && tri[2])
	{
		printf("\nÉ possível formar um triângulo!!!");
		}else
		{
			printf("\nNão é possível formar um triângulo!!!"); 
			}
	return 0;
}


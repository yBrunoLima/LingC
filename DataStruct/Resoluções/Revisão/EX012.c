/*
 * EX012 - 
 */


#include <stdio.h>

int main(void)
{
	int num;
	do {
	printf("Digite um valor: ");
	scanf(" %d", &num);
	int s_n = 1;
	if(num == 2)
	{
		s_n = 1;
		}
	else if(num != 2 && num % 2 == 0)
	{
		s_n = 0;
		}
	else{
		for(int i = 3; i * i <= num; i += 2)
		{
			if(num % i == 0)
			{
				s_n = 0;
				break;
				}
			}
		}
		if(s_n){
				printf("\n%d é um número primo.\n", num);
		}
		else{
				printf("\n%d não é um número primo.\n", num);
			}
		
		}while(num >= 0);
	return 0;
}


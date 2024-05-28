/*
 * EX015 - Faça um programa que leia várias strings até que o usuário informe uma contendo apenas letras (‘A’-’Z’ ou ‘a’-’z’).
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
	char str[50];
	int c_iguais;
	printf("Digite um nome:");
	do{
		c_iguais = 0;
		scanf(" %[^\n]", str);
		for(int i = 0; str[i] != '\0'; i++){
			if(!isalpha(str[i])){
				c_iguais = 1;
				printf("Não contem somente letras do alfabeto.\n");
				break;
			}
		}
	}while(c_iguais);
	return 0;
}


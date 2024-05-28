/*
 * DESAFIO AMIGO OCULTO
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	srand(time(NULL));
	int numPessoas;
	printf("Números de participantes do Amigo Oculto:");
	scanf(" %d", &numPessoas);
	char amigo_oculto[numPessoas][100];
	printf("Nome dos participantes:\n");
	for(int i = 0; i < numPessoas; i++){
		scanf(" %[^\n]s", amigo_oculto[i]);
		}
	//Mudando para variavel inteira para facilitar a verificação
	int aux_troca[numPessoas];
	for(int i = 0; i<numPessoas; i++){
		aux_troca[i] = i;
		}
	//Embaralhamento dos números
	for(int i = numPessoas; i > 0; i--){
		int j = rand() % (i+1);
		int sorteio = aux_troca[i];
		aux_troca[i] = aux_troca[j];
		aux_troca [j] = sorteio; 
		}
	//Verificação se o número não irá se repetir
	for(int i = 0; i < numPessoas; i++){
		if(aux_troca[i] == i){
			int j = (i+1) % numPessoas;
			int sorteio = aux_troca[i];
			aux_troca[i] = aux_troca[j];
			aux_troca[j] = sorteio;
			}
		}
	
	for(int i = 0; i < numPessoas; i++){
		printf("%s -> %s\n", amigo_oculto[i], amigo_oculto[aux_troca[i]]);
		}
	return 0;
	
}


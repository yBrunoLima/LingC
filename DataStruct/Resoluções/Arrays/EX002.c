/*
 * Gere um vetor de K posições (0 < K < 1000) com valores aleatórios entre 0 e 1000. Conte e escreva quantos valores
 * pares e ímpares ele possui. Imprima o maior, o menor valor e a média aritmética. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int k;
	do{
		printf("Digite a quantidade de valores(0-1000):");
		scanf(" %d", &k);
		k > 1000 || k < 0 ? printf("O número é está fora do intervalo.\nPor Favor, digite outro valor.\n") : k;
	}while(k > 1000 || k < 0);
	int numPar = 0, numImpar = 0, numMaior, numMenor = 999999999, v[k], soma = 0;
	float media;
	for(int i = 0; i < k; i++){
		v[i] = rand() % 1001;
		v[i] % 2 == 0? numPar++: numImpar++;
		if(v[i] < numMenor)
			numMenor = v[i];
		if(v[i] > numMaior)
			numMaior = v[i];
		soma += v[i];
		printf(" %d\n", v[i]);
	}
	media = (float) soma / k;
	printf("Pares: %d\n", numPar);
	printf("Impares: %d\n", numImpar);
	printf("Maior número: %d\n", numMaior);
	printf("Menor número: %d\n", numMenor);
	printf("Média Aritmética: %.2f\n",media);
	return 0;
}

 /*
 * Gere dois vetores, V1 e V2, cada um com K valores aleatórios sorteados no intervalo entre 0 e X (0 < K < X). O
 * usuário deve informar o valor de K e X, desde que K < X. O programa NÃO deverá aceitar números repetidos no
 * mesmo vetor, e nem o mesmo número no mesmo índice dos dois vetores. Imprima os valores sorteados nos dois
 * vetores, e o resultado da multiplicação dos valores dos índices de V1 e V2.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int lim_intervalo, k, i;
	printf("Digite o valor limite do intervalo:");
	scanf(" %d", &lim_intervalo);
	do{
		printf("Digite o tamanho dos vetores(0 - %d):", lim_intervalo);
		scanf(" %d", &k);
		k > lim_intervalo || k < 0? printf("Esse número está fora do limite!!!\nPor favor, digite novamente.\n"): k;
	}while(k < 0 || k > lim_intervalo);
	int v1[k], v2[k], mult[k];
	int cont = 0;
	//Preencher o Vetor 1
	do{
		int rep = 1;
		int sorteio = rand() % (lim_intervalo+1);
		for(i = 0; i < k; i++){
			if(sorteio == v1[i]){
				rep = 0;
				break;
			}
		}
		if(rep){
			v1[cont] = sorteio;
			cont++;
		}
		}while(cont < k);
	//Preencher o vetor 2
	cont = 0;
	do{ 
		int rep = 1;
		int sorteio = rand() % lim_intervalo+1;
		for(i = 0; i < k; i++){
			if(sorteio == v2[i]){
				rep = 0;
				break;
			}
		for(int j=0; j<cont; j++){
			if(sorteio == v2[j]){
				rep = 0;
				break;
				}
			}
		}
			if(rep){
			v2[cont] = sorteio;
			cont++;
			}
		}while(cont < k);
		for(i = 0; i < k; i++){
			mult[i] = v1[i]*v2[i];
			printf("%d(Vetor1) X %d(Vetor2)= %d\n", v1[i], v2[i], mult[i]);
			}
			
	return 0;
}


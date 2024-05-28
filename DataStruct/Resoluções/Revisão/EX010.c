/*
 * EX010 - Um determinado material radioativo perde metade de sua massa a cada 50 segundos. 
 * Dada a massa inicial, em gramas, fazer um programa em C que calcule o tempo necessário para que essa massa se torne menor que 0,5 grama. 
 * O programa em C deve escrever a massa inicial, a massa final e o tempo calculado em horas, minutos e segundos. 
 */

#include <stdio.h>

int main(void)
{
	int seg;
	float massa = 0;
	printf("Digite a massa da material radiotivo: ");
	scanf(" %f", &massa);
	printf("MASSA INICIAL: %.2f\n", massa);
	do{
		seg += 50;
		massa /= 2;
		printf("\n%.2f", massa);		
		}while(massa > 0.5);
	int h = 0, min = 0;
	printf(" %d", seg);
	h = seg / 3600;
	min = (seg % 3600) / 60;
	printf(" %d RESTO\n", (seg % 3600));
	seg %= 60;
	printf("\nMASSA FINA: %.2f\n", massa);
	printf("HORARIO: %d horas %d minutos %d segundos", h, min, seg);
	return 0;
}


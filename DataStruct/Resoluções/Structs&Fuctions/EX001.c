/* */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

typedef struct{
	int hora, min, seg;
	int hora2, min2, seg2;
}Horario;
int main()
{
	char vet[] = __TIME__;
	printf("HORARIO AUTAL: %s\n", vet);
	
		Horario h;
		h.hora = (vet[0] - '0')*10 + (vet[1] - '0');
		h.min = (vet[3] - '0')*10 + (vet[4] - '0');
		h.seg = (vet[6] - '0')*10 + (vet[7] - '0');
		int totalseg1 = h.hora*3600 + h.min*60 + h.seg;
		printf("Digite um horário(H Min Seg): ");
		scanf(" %d %d %d", &h.hora2, &h.min2, &h.seg2);
		int totalseg2 = h.hora2*3600 + h.min2*60 + h.seg2;
		if(totalseg2 > totalseg1){
			int aux = totalseg1;
			totalseg1 = totalseg2;
			totalseg2 = aux;
			}
		int dif = totalseg1 - totalseg2;
		int hora3, min3, seg3;
		hora3 = dif / 3600;
		min3 = (dif % 3600) / 60;
		seg3 = (dif % 3600) % 60;
		printf(" Diferença de horario: %dh%dmin%dseg", hora3,min3,seg3);
	/*srand(time(NULL));
	Horario horario;
	int totalseg1;
	int totalseg2;
	printf(" %dh%dmin%dseg\n", horario.hora1,horario.min1,horario.seg1);
	totalseg1 = horario.hora1*3600 + horario.min1*60 + horario.seg1;
	scanf(" %d %d %d", &horario.hora2, &horario.min2, &horario.seg2);
	totalseg2 = horario.hora2*3600 + horario.min2*60 + horario.seg2;
	int dif = totalseg1 - totalseg2;
	int hora3, min3, seg3;
	hora3 = dif / 3600;
	min3 = (dif % 3600) / 60;
	seg3 = (dif % 3600) % 60;
	
	printf(" Diferença de horario: %dh%dmin%dseg", hora3,min3,seg3);*/
	
	return 0;
}


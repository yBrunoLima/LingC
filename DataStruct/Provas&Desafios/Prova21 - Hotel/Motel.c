/* Um hotel deseja desenvolver um sistema paraauxiliar na gestão das reservas dos seus quartos evocê foi chamado para desenvolver essa solução...
 * 
 * Desenvolvaum programa que implemente uma estrutura de dados chamada Quarto. As informações mínimas para esse quarto são:
 *     - Número identificador do quarto;
 *     - Quantidade máxima de Hospedes;
 *     - Se possui Ar Condicionado(S/N ou 0/1);
 *     - Valor por cada Diária;
 *  Ao inicializar, o sistema deverpa permitir que o usuario cadastre N quartos(até que seja informado um número de quarto com valor negativo).
 * 
 * 	Após o cadastro dos quartos, o sistema deverá permitir a reserva dos quartos, solicitando do usuário três informações Quantidade de hóspedes, se deseja um quarto com ou sem ar e a quantidade de diárias desejadas.
 * 	Com essas informações, o sistema deve buscar se existe ou não um quarto disponível conforme os critérios solicitados, e o valor total da estadia, caso haja quarto disponível.
 * 	Se a reserva for confirmada, este quarto não poderá mais ser oferecido para outro cliente.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

//struct para os Quartos

typedef struct{
    int num;
    int hosp;
    char air;
    float valuor;
    int disponivel;
}Rooms;

void line(int x){
    printf("\n");
    for(int i = 0;i<x;i++)
        printf("=");
    printf("\n");
}

int menu(){
    line(25);
    printf("\tMENU\n1 - Adicionar Quarto\n2 - Listar Quartos\n3 -Reservar Quartos");
    line(25);
    int x;
    printf("Opção Escolhida: ");
    scanf(" %d", &x);
    system("clear");
    return x;
}

Rooms cadastroRooms(){
	Rooms aux;
	line(25);
	printf("\tCADASTRO ROOM");
	line(25);
	printf("Digite o número do quarto: ");
	scanf(" %d", &aux.num);
	printf("Digite o máximo de hospedes: ");
	scanf(" %d", &aux.hosp);
	printf("Esse quarto possui ar-condicionado(S or N): ");
	scanf(" %c", &aux.air);
	printf("Valor da diária(R$): ");
	scanf(" %f", &aux.valuor);
	aux.disponivel = 1;
	return aux;
	sleep(1);
	system("clear");
}

void listRooms(Rooms v[], int cont){
	line(25);
	printf("\tLIST ROOMS");
	line(25);
	printf("Number\tMaxHosp\tAir\tValuor\n");
	for(int i = 0; i < cont; i++){
		if(v[i].disponivel)
			printf("%d\t  %d\t %c\t%.2f\n", v[i].num, v[i].hosp, toupper(v[i].air), v[i].valuor);
	}
	line(25);
	sleep(3);
	system("clear");
}

void reservaRoom(Rooms v[], int cont){
	
	int pMax, days;
	char air;
	line(25);
	printf("\tRESERVANDO ROOM");
	line(25);
	printf("Digite o número de pessoas para a reserva: ");
	scanf(" %d", &pMax);
	printf("O quarto necessita de ar-condicionado(S or N): ");
	scanf(" %c", &air);
	printf("Quantas diárias deseja: ");
	scanf(" %d", &days);
		//procura do quarto
		for(int i = 0; i < cont; i++){
			if((v[i].hosp >= pMax) && (toupper(v[i].air) == toupper(air))){
				
				line(25);
				printf("QUARTO ENCONTRADO");
				line(25);
				
				printf("Quarto: %d\nMáximo de Pessoas: %d\nAr-condicionado: %c\nDiária: R$%.2f", 
						v[i].num, v[i].hosp, v[i].air, v[i].valuor);
				printf("\n\nValor total a se pagar por %d dia(s): R$ %.2f\nDeseja Efetuar a Reserva(S or N): ", 
						days,days*v[i].valuor);
				//caso o usuário não gostou da opção dará mais opções até o usuário digitar SIM ou NÃO		
				char resp;
				scanf(" %c", &resp);
				system("clear");
				resp = toupper(resp); //devolver o caractere maiúsculo caso o usuário escreva em minúsculo
				
				if(resp == 'S'){
					line(25);
					printf("\tRESERVA FEITA"); 
					line(25);
					v[i].disponivel = 0;
					sleep(3);
					system("clear");
				}else if(i == cont-1){
					printf("Nenhum quarto Reservado");
				}
			//caso não encontrar nenhum quarto para o usuário
			}else{
				printf("Nenhum quarto encontrado para Reserva");
				break;
			}
		}
}

int main(){
    Rooms motel[100];
    int contRooms = 0;

    do{
        switch(menu()){
            case 1: motel[contRooms++] = cadastroRooms();
                break; 
            case 2: listRooms(motel, contRooms);
                break;
            case 3: reservaRoom(motel, contRooms);
                break;
            default: return 0;
        }
    }while(1);
}

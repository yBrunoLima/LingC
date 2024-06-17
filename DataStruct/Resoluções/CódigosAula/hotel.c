/* Um hotel deseja desenvolver um sistema paraauxiliar na gestão das reservas dos seus quartos evocê foi chamado para desenvolver essa solução...
 * 
 * Desenvolvaum programa que implemente uma estrutura de dados chamada Quarto. As informações mínimas para esse quarto são:
 *     - Número identificador do quarto;
 *     - Quantidade máxima de Hospedes;
 *     - Se possui Ar Condicionado(S/N ou 0/1)
 *     - Valor por cada Diária
 *  Ao inicializar, o sistema deverpa permitir que o usuario cadastre N quartos(até que seja informado um número de quarto com valor negativo).
 * 	Após o cadastro dos quartos, o sistema deverá permitir a reserva dos quartos, solicitando do usuário três informações. Quantidade de hóspedes, se deseja um quarto com ou sem ar e a quantidade de diárias desejadas.
 * 	Com essas informações, o sistema deve buscar se existe ou não um quarto disponível conforme os critérios solicitados, e o valor total da estadia, caso haja quarto disponível.
 * 	Se a reserva for confirmada, este quarto não poderá mais ser oferecido para outro cliente.
 * 
 * 
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Criação da Struct Quarto

typedef struct{
	int num;
	int maxPeople;
	int air;
	float preco;
	int disponivel;
}Room;



void line(int x){
	printf("\n");
	for(int i = 0;i<x;i++)
		printf("=-");
	printf("=\n");
}

//Cadastrar os quartos

void motel_roons(Room vet[], int *cont){
	do{
		line(20);
		printf("\tCADASTRO DE QUARTOS");
		line(20);
		printf("Digite o número do quarto: ");
		scanf(" %d", &vet[*cont].num);
		if(vet[*cont].num < 0)
			break;
		printf("Type it the max of peoples in the room: ");
		scanf(" %d", &vet[*cont].maxPeople);
		printf("The room has air condicionning(NO == 0 | YES == 1): ");
		scanf("%d", &vet[*cont].air);
		printf("Qual a diária desse quarto: ");
		scanf(" %f", &vet[*cont].preco);
		system("clear");
		line(20);
		printf("\tQUARTO ADICIONADO COM SUCESSO");
		line(20);
		sleep(1); //Função que deixa algo na tela por determinado tempo antes de executar um próximo comando
		system("clear");
		*cont = *cont+1;
	}while(vet[*cont-1].num >= 0);
};

//Reserva de Quartos

void reserva(Room v[], int *cont){
	//Até encontrar o um quarto que exista
	while(1){
		system("clear");
		line(20);
		printf("\tRESERVA DE QUARTOS");
		line(20);
		printf(" %p\n%d\n", (void*)cont, *cont);
		int r, r2, diarias, resp;
		printf("Quantidade de Hospedes: ");
		scanf(" %d", &r);
		printf("Deseja ar-condicionado(YES == 1 | NO == 0): ");
		scanf(" %d", &r2);
		printf("Quantos dias deseja estar hospedado(s): ");
		scanf(" %d", &diarias);
		for(int i = 0; i < *cont; i++){
			if(r <= v[i].maxPeople && r2 == v[i].air && v[i].disponivel != 1){
				system("clear");
				line(20);
				printf("\tQuarto Disponível Encontrado!!!");
				line(20);
				if(v[i].air)
					printf("Quarto: %d\nMáximo de Pessoas: %d\nAr-condicionado: SIM\nDiária: R$%.2f", v[i].num, v[i].maxPeople, v[i].preco);
				else
					printf("Quarto: %d\nMáximo de Pessoas: %d\nAr-condicionado: NÃO\nDiária: R$%.2f", v[i].num, v[i].maxPeople, v[i].preco);
				printf("\n\nO preço a se pagar pelo total de diárias: R$%.2f", diarias*v[i].preco);
				
				printf("Deseja efetuar a reserva?(YES == 1 | NO == 0): ");
				scanf(" %d", &resp);
				if(resp){
					v[i].disponivel = 1;
					system("clear");
					printf("OBRIGADO PELA PREFERENCIA DE RESERVA");
					sleep(1);
					break;			
					}
			}else{
					printf("Nenhum quarto encontrado ou disponível.\nPor favor digite novamente.");
					sleep(1);
					system("clear");
				}
		}
		printf("Proxímo cliente(YES == 1 || NO == 0): ");
		scanf(" %d", &resp);
		if(!resp)
			break;
	}
}
	 
int main(){
	int cont = 0;
	Room motel[100];
	motel_roons(motel, &cont);
	reserva(motel, &cont);
	
	
	return 0;
	}

/* FILAS IN C*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct Pessoa{
	char name[100];
	int age;
	struct Pessoa *prox; //Ponteiro utilizado para apontar a próxima pessoa a ser adicionada
}Pessoa;

void line(int num){
	for(int i = 0; i < num; i++)
		printf("=");
	printf("\n");	
}

Pessoa* setPerson(Pessoa* fim){
	Pessoa* new = malloc(sizeof(Pessoa));
	printf("Type it your name: ");
	scanf(" %[^\n]s", new->name);
	printf("Type it your age: ");
	scanf(" %d", &new->age);
	if(fim)
		fim->prox = new;
	new->prox = NULL; //quem está atrás desse indivíduo não é ninguem
	return new;
}

void getPerson(Pessoa* i){
	while(i){
		printf("Name: %s\nAge %d\n\n", i->name, i->age);
		i = i->prox;
		}
	setbuf(stdin,NULL);
	getchar();
	system("clear");
}

//Função para encontrar o nome da pessoa e retornar o ponteiro dela

Pessoa* remPerson(Pessoa* p){
	if(!p){
		printf("Não existe elementos na lista\n");
		return p;
	}
	Pessoa* alvo = p;
	Pessoa* novoTopo = p->prox;
	free(alvo);
	return novoTopo;
}


int menu(){
	line(20);
	printf("1 - Adicionar Pessoa\n2 - Remover Pessoa\n3 - Listar Pessoa(s)\n");
	line(20);
	int op;
	printf("Digite sua opção: ");
	scanf(" %d", &op);
	return op;
}

int main()
{
	Pessoa* inicio = NULL; //head
	Pessoa* fim = NULL; //tail	
	do{
		switch(menu()){
			case 1: fim = setPerson(fim);
					if(!inicio)
						inicio = fim;
					break;
			case 2: inicio = remPerson(inicio);
					if(!inicio)
						fim = NULL;
					break;
			case 3: getPerson(inicio);
					break;
			default: return 0;
		}
	}while(1);
}

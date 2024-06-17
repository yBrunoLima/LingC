/*PILHA(stacks)*/

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

Pessoa* pushPessoa(Pessoa* p){
	Pessoa* new = malloc(sizeof(Pessoa)); //malloc() -> função utilizada para saber quantos bytes de memória a próxima struct ocupará
	printf("Type it your name: ");
	scanf(" %[^\n]s", new->name);
	printf("Type it your age: ");
	scanf(" %d", &new->age);
	new->prox = p;
	setbuf(stdin,NULL);
	getchar();
	system("clear");
	return new;
}

void getPessoa(Pessoa* p){
	while(p){
		printf("Name: %s\nAge %d\n\n", p->name, p->age);
		p = p->prox;
		}
}

//Função para encontrar o nome da pessoa e retornar o ponteiro dela

Pessoa* popPerson(Pessoa* p){
	printf("Digite o nome da pessoa que deseja excluir: ");
	char str[100];
	scanf(" %[^\n]s", str);
	Pessoa* aux = p;
	Pessoa* aux2 = NULL;
	while(p){
		if(strcmp(str,p->name) == 0){
			printf("Você deseja mesmo excluir %s [S/N]?", p->name);
			char r;
			scanf(" %c", &r);
			if(r == 's'){
				if(aux2 == NULL){
					aux = p->prox; //Caso a exclusão seja a primeira
					}else{
						aux2->prox = p->prox;
						}
				free(p);
				return aux;
				
				}else
					break;
		}
		aux2 = p;
		p = p->prox;
	} 
	printf("Nenhum nome encontrado na pilha");
	return aux;
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
	Pessoa* top = NULL;	
	do{
		switch(menu()){
			case 1: top = pushPessoa(top);
					break;
			case 2: top = popPerson(top);
					break;
			case 3: getPessoa(top);
					break;
			default: return 0;
		}
	}while(1);
}

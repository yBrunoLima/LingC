/*
 * Persistência de Dados
 */


#include <stdio.h>

typedef Stuct{
	char name[100];
	int valor;
	char 
}Despesas;
//Para não excluir o arquivo ou reseta-lo
FILE* abreArquivo(char* nome){
	FILE* a;
	a = fopen(nome,"rb+"); //para arquivo já criados
	if(!a)
		a = fopen(nome,"wb+"); //para arquivos criados no momento
	if(!a)
		printf("Abertura de Arquivo Negada");
}

int main()
{
	FILE* arq = abreArquivo("fonte.txt");
	return 0;
}


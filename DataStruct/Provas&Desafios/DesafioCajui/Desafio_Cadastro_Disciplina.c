/*
 * DESAFIO - Cadastre N Disciplinas(NOME: S, PERIODO: I, CH: I) e os alunos(tem que conter nome) matriculados em cada uma Máx. 50 alunos/disciplina;
 * Alunos devem entrar na struct disciplina.
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 50
typedef struct{
	char nomeDisc[100];
	int periodo, cargaHora;
	char alunos[MAX_ALUNOS][100];
	int numAluno;
}Disciplina;

int main()
{
	Disciplina cadastro[100];
	char stop, stopName;
	int i;
	printf("CADASTRO DE DISCIPLINA");
	do{
		printf("Informe o nome da disciplina: ");
		scanf(" %s", cadastro[i].nomeDisc);
		printf("Periodo: ");
		scanf(" %d", cadastro[i].periodo);
		printf("Carga Horária: ");
		scanf(" %d", cadastro[i].cargaHora);
		do{
			
			
			
		}while(stopName == 's' || stopName == 'S');
		printf("Deseja continuar[S/N]? ");
		
		scanf(" %c", &stop);
		i++;
	}while(stop == 's' || stop == 'S');
	
	return 0;
}


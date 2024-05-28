/* Desafio Cajuí
 * Faça um programa que usando funções e structs simule o funcionamento do Cajuí. 
 * Deve permitir o cadastro de Alunos (Código Aluno, Nome do Aluno e Nome do Curso), 
 * Disciplinas (Código Disciplina, Nome Disciplina, Carga Horária, Curso e todos os códigos dos Alunos matriculados nesta disciplina).
 * 
 * Restrições:
 * Um mesmo aluno não pode se matricular na mesma disciplina mais de uma vez.
 * Um mesmo aluno não pode se matricular em disciplinas que somem mais de 400 horas.
 * Imprimir Relatório de todas as Disciplinas de um Curso
 * Imprimir Relatório de todos Alunos em uma Disciplina
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
typedef struct{
	int cod_aluno;
	char nome[100];
	char nomeCurso[100];
}CadastroAluno;
typedef struct{
	int cod_disciplina;
	int carga_hora;
	char curso[100];
	int codigos[100];
}Disciplinas;

void linha(int tam){
	printf("\n");
	for(int i = 0; i < tam; i++)
		printf("-=");
	printf("\n");
	
}
int interface(){
	linha(20);
	printf(" 1 - CADASTRO ALUNO\n 2 - CADASTRO DISCIPLINA\n 3 - RELATÓRIO DE TODAS AS DISCIPLINAS\n 4 - RELATÓRIO DE ALUNOS EM UMA DISCIPLINA");
	linha(20);
	int op;
	printf("Digite o que deseja fazer:");
	scanf(" %d", &op);
	return op;
}


void cadastroDisciplina(Disciplinas disciplinas[], int *cont){
	printf("Código da conta: %d", *cont + 1);
	*cont = *cont + 1;
	printf("\nDigite o nome da Disciplina: ");
	scanf(" %[^\n]s", disciplinas[*cont].curso);
	printf("Carga horária da matéria: ");
	scanf(" %d", &disciplinas[*cont].carga_hora);
	linha(20);
	printf("	DISCIPLINA CADASTRADA COM SUCESSO\n	Pressione ENTER para continuar...");
	linha(20);
	setbuf(stdin, NULL);
	getchar();
	
	}
int main()
{
	Disciplinas disciplinas[100];
	int resp;
	int cont = 0;
	while(1){
		resp = interface();
		if(resp == 1);
		if(resp == 2)
			cadastroDisciplina(disciplinas, &cont);
		if(resp == 3);
		if(resp == 4);
		if(resp == 5)
			break;
		}
	return 0;
}


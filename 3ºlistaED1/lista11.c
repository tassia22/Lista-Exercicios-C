#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Desenvolva um aplicativo "Livro de Receitas". Crie uma estrutura RECEITA com as seguintes informações:
//NOME da receita, TEMPO de preparo (em minutos), DIFICULDADE (F - M - D) e INGREDIENTES. Cada
//ingrediente possui as seguintes informações: DESCRIÇÃO do ingrediente, QUANTIDADE. Uma receita
//suporta até 30 ingredientes.
//Seu aplicativo deve oferecer as seguintes funcionalidades:
//● Cadastrar Receita (Uma por vez).
//● Consultar uma Receita (O usuário deve informar o nome ou apenas parte do nome de uma
//receita buscada).
//● Consultar todas as receitas que possuem um determinado ingrediente (ou parte do nome de um
//ingrediente) informado pelo usuário.

typedef struct{
	
	char descricao[1000];
	int quantidade;
	
	
	
}Ingrediente;




typedef struct{
	
	Ingrediente feito;
	char nome[50];
	int tempo;
	char dificuldade;
	

Receita setReceita(){
	Receita nova;
	printf("nome da receita\n");
	scanf(" %[^\n]s", nova.nome);
	printf("tempo de preparo\n");
	scanf(" %d", &nova.tempo);
	printf("dificuldade\n");
	scanf(" %c", &nova.dificuldade);
							
	
	
	
}
	
}Receita;

int main(){
	
	Receita qnt;
	
	
	
}

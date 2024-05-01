#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//Faça um programa que preencha o cadastro de N pessoas. “Pessoa” possui os atributos “Nome” (string)
//e “Data de Nascimento” (Dia, Mês e Ano). O usuário deve preencher apenas o campo Nome. A “Data de
//Nascimento” deve ser sorteada aleatoriamente pelo próprio sistema. Use a solução do Problema #01
//para coletar a data do sistema, calcular a idade de cada Pessoa, e imprimir o seguinte relatório,
//ordenado por idade decrescente.

typedef struct {
	
	char nome[50];
	int dia, mes, ano;
	
	
	
}Pessoa;


int main(){

	struct tm_anos;
	time
	Pessoa dados[100];
	int Contdados = 0;
	char exit;
	
	do{
		printf("informe o seu nome\n");
		scanf(" %[^\n]s", dados[Contdados].nome);
		printf("dia do nascimento\n");
		
		printf("deseja fazer mais algum cadastro?\n");
		scanf(" %c", &exit);
		
		system("clear");
		
		
		}while(exit != 'n');
		
		
		printf("dados cadastrais\n");
		for(int i = 0; i < Contdados; i++){
			printf("\nnome: %s", dados[i].nome);
	




}


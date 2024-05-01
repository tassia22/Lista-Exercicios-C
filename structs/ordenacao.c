#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//bubble sort


typedef struct{
	
	char nome[100];
	int matricula;

}Aluno; 


int menu(){
	
	system("clear");
	printf("1 - cadastrar aluno\n");
	printf("2 - ordenar turma\n");
	printf("3 - imprimir chamada\n");
	
	int opc;
	
	scanf(" %d", &opc);
	
	return opc;
	
}

Aluno setAluno(){
	
	Aluno novo;
	
	printf("informe o nome: ");
	scanf(" %[^\n]s", novo.nome);
	printf("informe a matricula: ");
	scanf(" %d", &novo.matricula);
	return novo;
}

void getAluno(Aluno vet[], int qtde){
	
	printf("NOME\t\tMATRICULA\n");
	for(int i = 0; i < qtde; i++){
		printf("%s\t\t\t%d\n", vet[i].nome,vet[i].matricula);
		
		}
		setbuf(stdin,NULL);
		getchar();
}

void bubbleSort(Aluno vet[], int qtde){
	
	for(int r = 0; r < qtde; r++)
		for(int i = 0; i < qtde-1; i++)
			if(strcmp(vet[i].nome,vet[i+1].nome) > 0){
				Aluno aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
				
			}

}

int main(){
	
	Aluno vetAluno[100];
	int contAluno = 0;
	
	do{
		
		switch(menu()){
			case 1: vetAluno[contAluno++] = setAluno();
					bubbleSort(vetAluno,contAluno);
					break;
			case 2: bubbleSort(vetAluno,contAluno);
					break;
			case 3: getAluno(vetAluno,contAluno);
					break;
			default: return 0;
			
		}
		setbuf(stdin,NULL);
		getchar();
	}while(1);
	
	
	}

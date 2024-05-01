#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Uma biblioteca deseja informatizar o arquivamento e a consulta do acervo de livros que possui. Faça um
//programa que utiliza structs do tipo Livro: Título (s), Autor (s), Área do Conhecimento (s), Ano (i) e
//Localização (i), para cadastrar “N” Livros.
//A informação de Localização não deve ser preenchida pelo usuário, mas pelo próprio sistema, dadas as
//seguintes regras...
// Após o usuário cadastrar as informações básicas dos “N” Livros, o programa deverá ordená-los
//pela “Área do conhecimento” e, dentro de cada Área, pelo “Título do livro”, como o exemplo
//abaixo:
//Uma vez organizados todos os livros da biblioteca, o programa deverá distribuí-los em
//prateleiras, seguindo a seguinte lógica: cada prateleira suporta, no máximo, 03 livros. Livros de
//Áreas de conhecimento diferentes não podem ficar na mesma prateleira.

typedef struct{
	
	char titulo[50];
	char autor[50];
	char areacon[50];
	int ano;
	int loc;
	
}Livro;

int getOpcao(){
	system("clear");
	printf("1- cadstrar livro\n");
	printf("2- ordenar livro\n");
	printf("3- imprimir\n");
	int opt;
	scanf(" %d", &opt);
	return opt;

}

Livro setLivro(){
	Livro novo;
	printf("informe o titutlo do livro\n");
	scanf(" %[^\n]s", novo.titulo);
	printf("informe o nome do autor\n");
	scanf(" %[^\n]s", novo.autor);
	printf("informe a area de conhecimento\n");
	scanf(" %[^\n]s", novo.areacon);
	printf("informe o ano\n");
	scanf(" %d", &novo.ano);
	printf("localizacao\n");
	
}

void getLivro(Livro vet[], int qntd){
	for(int i = 0; i < qntd; i++){
		printf("\ntitulo: %s", vet[i].titulo);
		printf("\nnome: %s", vet[i].autor);
		printf("\narea de conhecimento: %s", vet[i].areacon);
		printf("\nano: %d", vet[i].ano);
	}
	setbuf(stdin,NULL);
	getchar();
}
	
void bubbleSort(Livro vet[], int qntd){
	
	for(int j = 0; j < qntd; j++)
		for(int i = 0; i < qntd-1; i++)
			if(strcmp(vet[i].titulo,vet[i+1].titulo) > 0){
				Livro aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
		}
		
}

int main(){
	
	int n;
	
	printf("informa a quantidade de livro desejado\n");
	scanf(" %d", &n);
	
	Livro l[n];
	int cont = 0;
	
	do{
		switch(getOpcao()){
			case 1: l[cont++] = setLivro();
					bubbleSort(l,cont);
			case 2: bubbleSort(l, cont);
					break;
			case 3: getLivro(l, cont);
					break;
			case 0: return 0;
			
		}
		setbuf(stdin,NULL);
		getchar();
	}while(1);
			
	}


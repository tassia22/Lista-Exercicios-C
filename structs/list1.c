#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//quando é mais de uma pessoa se utiliza o vetor
//vetor de struct

typedef struct{

	char nome[100];
	int idade;
	float peso;
	float altura;
	char sexo;


}Pessoa;


int main(){

	Pessoa cad[100];
	int contCad = 0;
	
	//processedimento de cadastro
	char opcao;
	
	do{
		printf("digite o seu nome\n");
		scanf(" %[^\n]s", cad[contCad].nome);
		printf("digite a sua idade\n");
		scanf(" %d", &cad[contCad].idade);
		printf("digite o seu peso\n");
		scanf(" %f", &cad[contCad].peso);
		printf("digite a sua altura\n");
		scanf(" %f", &cad[contCad].altura);
		printf("digite o seu sexo\n");
		scanf(" %c", &cad[contCad].sexo);
		contCad++;
		
		
		printf("Deseja cadastrar uma nova pessoa?[s/n]\n");
		scanf(" %c", &opcao);
		
		system("clear");
	}while(opcao != 'n');
	
		//impressao do cadastro
		printf("dados do cadastro:\n");
		system("clear");
		for(int i = 0; i <contCad; i++){
			printf("\nnome: %s", cad[i].nome);
			printf("\nidade: %d", cad[i].idade);
			printf("\npeso: %1.0f", cad[i].peso);
			printf("\naltura: %1.0f", cad[i].altura);
			printf("\nnome: %c\n", cad[i].sexo);
			printf("-----------------------------");
	}
	
}

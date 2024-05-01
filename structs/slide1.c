#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1. Faça um programa que define um novo tipo de dados chamado Aluno.
//Cada registro de aluno deve conter os dados: Nome (s), Sexo (c),
//Matricula (i) e Periodo (i).
//a) Leia 5 registros de aluno.
//b) Após a leitura, pergunte ao usuário o nome de um aluno para ser
//pesquisado, e imprima todas as informações deste.
//c) Repita a operação da letra B, até que o usuário informe a palavra
//“exit”.
//2. Modifique o exemplo anterior, incluindo agora no registro de cada aluno,
//as notas das 5 disciplinas dele. (Obs: As notas devem ser armazenadas
//em uma estrutura do tipo vetor).
//3. Modifique novamente o exemplo, incluindo agora um registro de
//endereço [rua (s), numero (i), bairro (s)] para cada registro de Aluno.
//(Obs: Endereço deve ser criado como um novo struct).

typedef struct {
	
	char rua[50];
	int num;
	char bairro[50];
	
}Endereco;

typedef struct{
	
	Endereco local;
	char nome[100];
	char sexo;
	int matricula;
	int periodo;
	int nota[5];

}Aluno;

int main(){
	
	
	
	Aluno reg[5];
	int contReg;
	contReg = 0;
	char exit;
	int i,j;

	//processo do registro
	
	do{
		printf("Informe o seu nome\n");
		scanf(" %[^\n]s", reg[contReg].nome);
		printf("Informe o seu sexo\n");
		scanf(" %c", &reg[contReg].sexo);
		printf("Informe a sua matricula\n");
		scanf(" %d", &reg[contReg].matricula);
		printf("Informe o seu periodo\n");
		scanf(" %d", &reg[contReg].periodo);
		printf("Informe as 5 notas da diciplia\n");
		for(i = 0; i < 5; i++){
			scanf(" %d", &reg[contReg].nota[i]);
		}
		printf("informe o nome da sua rua\n");
		scanf(" %[^\n]s", reg[contReg].local.rua);
		printf("Informe o numero da sua casa\n");
		scanf(" %d", &reg[contReg].local.num);
		printf("Informe o nome do seu bairro\n");
		scanf(" %[^\n]s", reg[contReg].local.bairro);
		contReg++;
		
		printf("Deseja fazer um novo registro?\n");
		scanf(" %c", &exit);
		
		system("clear");
		
 	
		do{	
			char busca[50];
			printf("Informe o nome de um aluno para ser pesquisado\n");
			scanf(" %[^\n]s", busca);
			
			if(strcmp(busca,"exit") == 0)
				break;
			

			//impressao do registro
			printf("dados do registro\n");
			for(int i = 0; i < contReg; i++){
				if(strcmp(busca,reg[i].nome) == 0 ){
					printf("\nNome: %s", reg[i].nome);
					printf("\nSexo: %c", reg[i].sexo);
					printf("\nMatricula: %d", reg[i].matricula);
					printf("\nPeriodo: %d", reg[i].periodo);
					for(j = 0; j < 5; j++)
						printf("\nNota: %d", reg[i].nota[j]);
					printf("\nBairro: %s", reg[i].local.bairro);
					printf("\nRua: %s", reg[i].local.rua);
					printf("\nCasa %d", reg[i].local.num);
				}
			}

	}while(1);
	
	
	
	
	
	
	
	
}


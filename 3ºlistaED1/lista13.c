#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
	char nome[100];
	char email[100];
	char telefone[100];
	char afinidade[100];
}Contato;

typedef struct{
	char lista[100][100];
	int cont;
}Afinidades;

int interface(){
	printf('*',70);
	printf("[1] - Cadastrar Contato\n");
	printf("[2] - Buscar Contato por Afinidade\n");
	printf("[3] - Buscar Contato por Email\n");
	printf("[0] - ENCERRAR PROGRAMA\n");
	printf('*',70);
	int opt;
	scanf(" %d",&opt);
	return opt;
}

int validaEmail(char email[]){
	for(int i=1; i<strlen(email); i++)
		if(email[i] == '@')
			for(int j=i+2; j<strlen(email); j++)
				if(email[j] == '.')
					return 1;
	return 0;
}

void getGrAfin(Afinidades lstAfin){
	printf("Lista de Afinidades Cadastradas no Momento...\n");
	for(int i=0; i<lstAfin.cont; i++)
		printf("%s\n",lstAfin.lista[i]);
}

void setGrAfin(Afinidades* lstAfin, char grupo[]){
	for(int i=0; i<lstAfin->cont; i++)
		if(!strcmp(grupo,lstAfin->lista[i]))
			return;
	int aux = lstAfin->cont;
	strcpy(lstAfin->lista[aux],grupo);
	lstAfin->cont++;
}

Contato setContato(Afinidades* lstAfin){
	Contato novo;
	printf("Informe o Nome: ",novo.nome);
	do{
		leiaString("Informe o Email: ",novo.email);
	}while(!validaEmail(novo.email));

	printf("Informe o Telefone: ",novo.telefone);
	getGrAfin(*lstAfin);
	printf("Informe o Grupo de Afinidade: ",novo.afinidade);
	setGrAfin(lstAfin,novo.afinidade);
	return novo;
}

void getContatos(Contato contatos[], int cont){
	for(int i=0; i<cont; i++){
		printf("Nome: %s\n",contatos[i].nome);
		printf("Afinidade: %s\n",contatos[i].afinidade);
	}
}

int main(){

	Contato cadastro[100];
	int contCadastro = 0;

	Afinidades listaAfin;
	listaAfin.cont = 0;
	
	do{
		system("clear");
		switch(interface()){
			case 1: cadastro[contCadastro++] = setContato(&listaAfin); 
					break;
			case 2: getContatos(cadastro, contCadastro);
					break;
			case 0: return 0;
		}
		setbuf(stdin,NULL);
		getchar();
	}while(1);
}

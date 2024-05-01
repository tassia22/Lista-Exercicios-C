#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[100];
	int rg;
	float salario;
}Funcionario;

Funcionario* setFuncionario(){
	Funcionario* novo = malloc(sizeof(Funcionario));
	printf("Informe o Nome: ");
	scanf(" %[^\n]s",novo->nome);
	printf("Informe o RG: ");
	scanf(" %d",&novo->rg);
	printf("Informe o Salario: ");
	scanf(" %f",&novo->salario);
	return novo;
}

void getFuncionario(Funcionario* f){
	printf("Nome: %s\n",f->nome);
	printf("RG: %d\n",f->rg);
	printf("Salário: %.2f\n",f->salario);
}

int main(){
	Funcionario* f;
	f = setFuncionario();
	getFuncionario(f);
}


	




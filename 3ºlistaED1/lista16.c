#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
	char nome[100];
	int horas;
	char hospedagem;
	float fatura;
	float desconto;
}Cliente;

int interface(){
	
	printf("[1] - Cadastrar Cliente\n");
	printf("[2] - Extrato de Faturamento\n");
	printf("[0] - ENCERRAR PROGRAMA\n");

	int opt;
	scanf(" %d",&opt);
	return opt;
}

Cliente setCliente(){
	Cliente novo;
	printf("Informe o Nome do Cliente: ");
	scanf(" %[^\n]s", novo.nome);
	printf("Informe a Quantidade de Horas: ");
	scanf(" %i", &novo.horas);
	printf("Informe se Possui Hospedagem (s/n): ");
	scanf(" %c", &novo.hospedagem);
	novo.fatura = 0;
	novo.desconto = 0;
	return novo;
}

int getMelhorCliente(Cliente cadastro[], int cont){
	int maior = 0;
	for(int i=0; i<cont; i++)
		if(cadastro[i].horas > maior)
			maior = cadastro[i].horas;
	return maior;
}

float calculaFaturas(Cliente cadastro[], int cont){
	int maiorConsumo = getMelhorCliente(cadastro,cont);
	float soma = 0;
	for(int i=0; i<cont; i++){
		if(cadastro[i].horas>0)
			cadastro[i].fatura += 80;
		if(cadastro[i].horas>100)
			cadastro[i].fatura += (cadastro[i].horas - 100)*1.85;
		if(cadastro[i].hospedagem == 's')
			cadastro[i].fatura += 20;
		if(cadastro[i].horas == maiorConsumo)
			cadastro[i].desconto = cadastro[i].fatura * 0.20;
		soma += cadastro[i].fatura - cadastro[i].desconto;
	}
	return soma;
}

void getFaturamento(Cliente cadastro[], int cont){
	float totalFaturamento = calculaFaturas(cadastro, cont);
	printf("NOME\t\tHORAS\tHOSP.\tFATURA\tDESCONTO\tTOTAL\n");
	for(int i=0; i<cont; i++){
		printf("%s\t\t",cadastro[i].nome);
		printf("%i\t",cadastro[i].horas);
		printf("%c\t",cadastro[i].hospedagem);
		printf("%.2f\t",cadastro[i].fatura);
		printf("%.2f\t\t",cadastro[i].desconto);
		printf("%.2f\n",cadastro[i].fatura-cadastro[i].desconto);
	}
	printf("\nTOTAL FATURAMENTO GERAL: R$ %.2f",totalFaturamento);
}

int main(){
	Cliente cadastro[100];
	int contCadastro = 0;	
	do{
		system("clear");
		switch(interface()){
			case 1: cadastro[contCadastro++] = setCliente();
					break;
			case 2: getFaturamento(cadastro,contCadastro);
					break;
			case 0: return 0;
		}
		setbuf(stdin,NULL);
		getchar();
	}while(1);
}

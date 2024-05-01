#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//Uma pequena mercearia deseja informatizar o seu processo de estoque e vendas. Faça um programa
//que alimente um vetor com até 100 registros de Produto: Código de Barras (i), Descrição (s), Qtde. em
//Estoque (i), Valor Unitário (f).
//Após cadastrar o estoque, o programa entrará em modo de venda, neste modo, o programa segue o
//seguinte fluxo:
//Usuário informa o Código de Barra do produto a ser vendido;
//Programa imprime as informações do produto (ou se ele não existe);
//Usuário informa a Quantidade que deseja comprar deste item;
//Programa verifica se possui em estoque a quantidade desejada;
//Caso seja possível a venda, o programa contabiliza o valor a ser pago e atualiza a quantidade no
//estoque;
//O Programa repete o processo de vendas, até que Código de Barras informado seja um valor negativo;
//Caso seja informado um código negativo, o programa imprime o valor total da venda realizada, o valor
//pago e o troco a ser devolvido.


typedef struct{
	
	int codbarra;
	char descricao[1000];
	int quantidadeEst;
	float valuni;
	
}Produto;

//interface do produto
int getOpcao(){
	printf("1-cadastrar codigo de barra\n");
	printf("2-nome dos produtos\n");
	printf("3-quantidade em estoque\n");
	printf("4-valor do produto\n");
	printf("0-encerrar\n");
	int opt;
	scanf(" %d", &opt);
	return opt;
}

Produto setProduto(){
	Produto novo;
	printf("informe o codigo de barras\n");
	scanf(" %d", &novo.codbarra);
	printf("informe o nome do produto\n");
	scanf(" %[^\n]s", novo.descricao);
	printf("informe a quantidade em estoque do produto\n");
	scanf(" %d", &novo.quantidadeEst);
	printf("informe o valor do produto\n");
	scanf(" %f", &novo.valuni);
	return novo;
}

void getProduto(Produto* x, int cont){
	for(int i = 0; i < cont; i++){
		printf("codigo de barra: %d\n", x[i].codbarra);
		printf("nome do produto: %s\n", x[i].descricao);
		printf("quantidade em estoque: %d\n", x[i].quantidadeEst);
		printf("valor do produto: %f\n", x[i].valuni);
		
	}
	
}



int main(){
	Produto p[500];
	int cont = 0;
	
	do{
		switch(getOpcao()){
			case 0: return 0;
					break;
			case 1: p[cont++] = setProduto();
					break;
			case 2: getProduto(p,cont);
					break;
			case 3: getProduto(p,cont);
					break;
			case 4: getProduto(p,cont);
					break;
			
			}

		
	
		setbuf(stdin,NULL);
		getchar();
	}while(1);
	
	
	
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Uma pequena mercearia deseja informatizar o seu processo de estoque e vendas. 
//Faça um programa que alimente um vetor com até 100 registros de Produto: Código de Barras (i), 
//Descrição (s), Qtde. em Estoque (i), Valor Unitário (f). Informe um Código de Barras negativo para encerrar o cadastro de estoque.

//Após cadastrar o estoque, o programa entrará em modo de venda, neste modo, o programa segue o seguinte fluxo:
//. Usuário informa o Código de Barra do produto a ser vendido;
//. Programa imprime as informações do produto (ou se ele não existe);
//. Usuário informa a Quantidade deste item que será vendido;
//. Programa verifica se possui em estoque a quantidade desejada;
//. Caso seja possível a venda, o programa contabiliza o valor a ser pago e atualiza a quantidade no estoque;

//O Programa repete vendas, até que Código de Barras informado seja um valor negativo;
//Caso o código seja negativo, o programa informa o valor total da venda realizada;


typedef struct{
	
	int codbarras;
	char descricao;
	int qtdeEstoque;
	float valorunitario;
	
	
}Produto;

int main(){
	
	Produto regp[100];
	int contRegp = 0;
	int barras;
	
	do{
		printf("Informe o codigo de barra\n");
		scanf(" %d", &regp[contRegp].codbarras);
		printf("Informe a descricao do produto\n");
		scanf(" %c", &regp[contRegp].descricao);
		printf("Informe a quantidade de item desejada\n");
		scanf(" %d", &regp[contRegp].qtdeEstoque);
		
		
		
		
		}while(barras < 0);
	
	
	
}

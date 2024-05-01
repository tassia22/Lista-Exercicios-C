#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
//Faça um programa que realize simulações de empréstimo financeiro. Modele a struct Proposta: Valor
//Emprestado (f), Prazo (i) e Taxa de juros (f). Calcule o valor de cada parcela e o valor total pago ao final
//do empréstimo. Faça novas simulações até que o usuário informe o Valor de Empréstimo negativo.
//Obs.: Utilize a fórmula de “juros compostos” para realizar os cálculos.

typedef struct{
	
	float valemp;// capital c
	int prazo;// tempo t
	float taxaJuros;// juros i
	
}Emprestimo; 

int main(){
	
	Emprestimo financeiro;
	float montante, i, p;

	
	printf("digite o valor que voce quer emprestado\n");
	scanf(" %02f", &financeiro.valemp);
	printf("digite o prazo\n");
	scanf(" %d", &financeiro.prazo);
	printf("digite a taxa de juros\n");
	scanf(" %02f", &financeiro.taxaJuros);
	
	
	i = 1+(taxaJuros/100);
	prazo = (i, prazo);
	
	parcela = valoremp*p;
	
	printf("total a pagar: R$ %.2f", parcela);
	
	
	
	

	

	



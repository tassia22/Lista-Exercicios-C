#include <stdlib.h>
#include <stdio.h>

//A conjectura de Goldbach foi apresentada por Christian Goldbach em uma carta a Leonhard Euler no ano de 1742, e
//diz: “Todo número par maior do que dois pode ser representado pela soma de dois números primos.”
//Apesar de não ter sido provada até hoje, a conjectura funcionou para todos os casos que foram experimentados.
//Faça um programa que lê um valor N (inteiro, par e maior que dois) e exibe os dois valores primos em que N pode
//ser decomposto



int numero, cont, testanumero, testacont;

int primo(){

	int x, cont, testaprimo;
	cont = 2;

	while(cont<x) {

	testaprimo = x%cont;

	if(testaprimo==0){

	return(0);break;

	}else{

	cont+=1;

	}

	}

	}

	int main () {

	int primo ();

	do {

	printf("Digite um numero par:\n");

	scanf("%d", &numero);

	} while((numero%2) != 0);

	numero -= 1;

	cont=1;

	do {

	testanumero = numero;

	testacont = cont;

	primo(testanumero);

	primo(testacont);

	if(testanumero && testacont){

	printf("= %d + %d\n", numero, cont);

	}

	numero -=2;

	cont += 2;

	} while (numero > 0);

	system("pause");

	}


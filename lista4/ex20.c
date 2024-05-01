#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em um
//vetor com 10 posições. Preencha um segundo vetor apenas com os números ı́mpares
//do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.

int main(){
	
	int n, soma; 
	soma = 0;
	
	printf("informe o valor do numero\n");
	scanf(" %d", &n);
	
	soma = n + 0,50;
	
	int v[10];
	
	for(int i = 0; i < 10; i++){
		v[i] = n;
		printf(" %d\n", v[i]);
	}
	
	
	



	return 0;
}


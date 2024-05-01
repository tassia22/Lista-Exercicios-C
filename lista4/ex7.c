#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima
//o vetor, o maior elemento e a posição que ele se encontra.

int main(){

	int v[10],maior, posicao = 0;

	
	for(int i = 0; i < 10; i++){
		scanf(" %d", &v[i]);
	
	}
	
	maior = v[0];
	for(int i = 1; i < 10; i++)
		if(maior < v[i]){
			maior = v[i];
			posicao = i;
		}	
	
	printf(" maior valor: %d\n", maior);
	printf(" posicao do indice: %d\n", posicao+1);

	return 0;
}


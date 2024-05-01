#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima
//o vetor, o maior elemento e a posição que ele se encontra.



int main(){
	
	int v[10], maior;
	
	for(int i = 0; i < 10; i++){
		scanf(" %d", &v[i]);
	}
		
		for(int i = 0; i < maior; i++){
			if(maior < v[i])
			printf("\nmaior numero eh: %d", maior);
				maior++;
		}
	
	
	

	return 0;
	}

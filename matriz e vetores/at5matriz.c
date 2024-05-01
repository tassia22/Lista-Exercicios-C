#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca
//desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensa-
//gem de “não encontrado”.

int main(){
	
	int l = 5;
	int c = 5;
	
	int m[l][c], x, valor = 0;
	
	for(int l = 0; l < 5; l++){
		for(int c = 0; c < 5; c++)
		printf("[%d][%d]\n", l, c);
		scanf(" %d", &m[l][c]);
		}
		
	printf("digite um valor: ");
	scanf(" %d", &x);
	
		for(int l = 0; l < 5; l++)
			for(int c = 0; c < 5; c++)
			
	
			if(m[l][c] == valor){
				printf("\no valor esta localizado na linha: %d e coluna: %d", l+1,c+1);
			}
	
	return 0;
}

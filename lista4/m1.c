#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

//Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

int main(){


	int l = 4, c = 4;
	
	int m[l][c], cont;
	
	for(int l = 0; l < 4; l++){
		for(int c = 0; c < 4; c++){
			printf("Informe o valor da posicao[%d][%d]", l,c);
			scanf(" %d", &m[l][c]);
	
	
		}
	
	
	}
	cont = 0;
	for(int l = 1; l < 4; l++){
		for(int c = 0; c < 4; c++){
			if(m[l][c] >= 10)
				cont++;
				
	
	
		}
	
	
	}
	
	printf("valores maiores que 10: %d", cont);
	
	





	return 0;
}

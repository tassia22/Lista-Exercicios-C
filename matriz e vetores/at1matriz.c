#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

int main(){
	
	int l = 4;
	int c = 4;
	
	int m[l][c], cont;
	cont = 0;
	
	for(int l = 0; l < 4; l++){
		for(int c = 0; c < 4; c++){
			printf("informe o valor da posicao [%d][%d]\n", l,c);
			scanf(" %d", &m[l][c]);
		}
	}
		for(int l = 0; l < 4; l++)
			for(int c = 0; c < 4; c++)
				if(m[l][c] > 10)
					cont++;			
			
	printf("foram encontrados %d numeros maiores que dez", cont);
	
	
	
	
	return 0;
	}

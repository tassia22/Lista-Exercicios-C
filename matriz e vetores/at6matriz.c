#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>



//Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição
//das matrizes lidas.

int main(){
	

	int l = 4;
	int c = 4;
	int m1[l][c], m2[l][c],m3[l][c];
	
	//primeira matriz
	for(int l = 0; l < 4; l++)
			for(int c = 0; c < 4; c++){
			printf("\n[%d][%d]\t", l+1,c+1);
			scanf(" %d", &m1[l][c]);
		}
	
	//segunda matriz

	
	for(int l = 0; l < 4; l++)
			for(int c = 0; c < 4; c++){
			printf("\n[%d][%d]\t", l+1,c+1);
			scanf(" %d", &m2[l][c]);
	}
	
	for(int l = 0; l < 4; l++)
			for(int c = 0; c < 4; c++){
			if(m1[l][c] > m2[l][c])
				m3[l][c] = m1[l][c];
			else m3[l][c] = m2[l][c];
		printf("\no maior numero da posição[%d][%d] é: %d", l+1,c+1, m3[l][c]);
	}
	
	return 0;
}

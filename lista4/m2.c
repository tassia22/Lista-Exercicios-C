#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

//Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
//elementos. Escreva ao final a matriz obtida.

int main(){
	
	int m[5][5];
	
	for(int l = 0; l < 5; l++){
		for(int c = 0; c < 5; c++){
			printf("[%d][%d]",l,c);
			scanf(" %d", &m[l][c]);
		
		
		}
	
	
	}
	
	for(int l = 0; l < 5; l++){
		for(int c = 0; c < 5; c++){
		printf(" a matriz obtida foi: [%d][%d]-\n", m[l][c]);


		}
	}



	return 0;
}


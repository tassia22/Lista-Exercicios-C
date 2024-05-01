#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

//Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do
//maior valor.

int main(){
	
	int m[4][4] = {1,2,3,4,5,6,7,9,10,12,13,15,14,2,5,8}, maior;
	
	
	for(int l = 0; l < 4; l++){
		for(int c = 0; c < 4; c++)
			printf("%d ",m[l][c]);
		printf("\n");
		
	}
	
	maior = m[0][0];
	
	for(int l = 1; l < 4; l++){
		for(int c = 1; c < 4; c++){
			if( m[l][c] > maior){
				maior = m[l][c];
			
			}
	
			
		}
	}
	
	printf(" o maior valor é: %d", maior);
	



	return 0;
}


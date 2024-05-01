#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do
//maior valor.


int main(){
	
	int l = 4;
	int c = 4;
	
	int m[l][c];
	int valmaior;
	
	for(int l = 0; l < 4; l++){
		for(int c = 0; c < 4; c++)
		printf("informe os valores [%d][%d]\n", l, c);
		scanf( "%d", &m[l][c]);
		}
		
		printf("\n");
		
		for(int l = 0; l < 4; l++){
			for(int c = 0; c < 4; c++)
			if(valmaior < m[l][c])
				valmaior =  m[l][c];
			}
		
			printf("o maior numero eh: %d\n", valmaior);
			
		for(int l = 0; l < 4; l++){
			for(int c = 0; c < 4; c++)
			if(valmaior == m[l][c]){
			}
		}
			printf("o maior numero se encontra na posicao: [%d][%d]\n", l+1, c+1);



	return 0;
}

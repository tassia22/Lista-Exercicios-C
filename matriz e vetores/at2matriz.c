#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
//elementos. Escreva ao final a matriz obtida.

int main(){

	int l = 5;
	int c = 5;
	
	int m[l][c];
	
	for( int l = 0; l < 5; l++){
		for( int c = 0; c < 5; c++)
		scanf(" %d", & m[l][c]);
		
			if( l == c)
				m[l][c] = 1;
			else
				m[l][c] = 0;
			}
	//print matriz
	for( int l = 0; l < 5; l++){
		for( int c = 0; c < 5; c++)
		printf("\n[%d][%d]", l, c);
		}
		printf("a matriz obitida foi: %d", m[l][c]);



return 0;
}

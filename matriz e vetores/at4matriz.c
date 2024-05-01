#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da
//coluna de cada elemento. Em seguida, imprima na tela a matriz.

int main(){
	
	int l = 4;
	int c = 4;
	
	int m[c][l];
	
	for(int l = 0; l < 4; l++){
		for(int c = 0; c < 4; c++)
		scanf("%d", &m[l][c]);
	}
	
	for(int l = 0; l < 4; l++){
		for(int c = 0; c < 4; c++)
		m[c][l] = l * c;
		printf("%d", m[c][l] );
		}
		
		printf("\n");
	
 return 0;	
}

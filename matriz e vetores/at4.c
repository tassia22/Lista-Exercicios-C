#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois va-
//lores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
//deverá escrever a soma dos valores encontrados nas respectivas posições X e Y .

int main(){
	
	int v[8], x,y, soma;
	
	for(int i = 1; i < 8; i++)
		scanf(" %d", &v[i]);
	
	printf("digite dois valores\n");
	scanf(" %d%d", &x, &y);
	
	soma = v[x] + v[y];
	
	printf("\nsoma: %d", soma);
	
		
			
	
	
	
	
	
	
	 return 0;
	}

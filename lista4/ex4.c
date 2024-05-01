#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois va-
//lores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
//deverá escrever a soma dos valores encontrados nas respectivas posições X e Y .

int main(){

	int v[8];

	
	for(int i = 0; i < 8; i++){
		scanf( "%d", &v[i]);
	
	}
	
	int x, y, soma;
	soma = 0;
	
	printf("informe o valor x e y\n");
	scanf(" %d", &x);
	scanf(" %d", &y);
	soma  = v[x] + v[y];
	printf("a soma é: %d\n", soma);
	
	
	



	return 0;
}

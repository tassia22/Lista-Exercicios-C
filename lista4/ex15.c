#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando ele-
//mentos repetidos.
int main(){
	
	int v[20],aux,j;
	
	aux = j;
	j = aux;
	
	for(int i = 0; i < 10; i++){
		scanf(" %d", &v[i]);
	
	}
	
	for(int i = 0; i < 10; i++){
		for(int j = i+1; j < 10; j++){
			if(v[i] == v[j]){
				aux = v[i];
			
			}		
		}
	}
	
	for(int i = 0; i < 10; i++){
	printf(" %d-", v[i]);
	}
	
		printf("\nvetor igual: %d\n", aux);
	
	
	return 0;
}



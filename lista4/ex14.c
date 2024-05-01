#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais
//e os escreva na tela.

int main(){
	
	int v[10],aux,j;
	
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


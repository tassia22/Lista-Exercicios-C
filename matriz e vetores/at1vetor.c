#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Um apostador joga um dado para o ar N vezes. Sabendo que um
//dado possui 6 faces, faça um programa que simule o experimento, e
//imprima quantas vezes que cada face caiu para cima.

int main(){
	
	
	int n;
	
	printf("digite a quantidade de vezes que você jogou o dado para o ar\n");
	scanf(" %d", &n);
	 
	 int v[n];
	 
	 
	srand(time(NULL));
	
	for(int i = 0; i < n; i++){
	  v[i] = rand()%6; 
	  
	 }
	 
	 int cont;
	 
	 
	
	
	for( int busca = 0; busca < 6; busca++){
		cont = 0;
	 for(int i = 0; i < n; i++)
		if(v[i] == busca)
		cont++;
	printf("%d apareceu %d vezes\n", busca+1, cont);
	}
	 
     
     return 0;
	}
	
	
	
	

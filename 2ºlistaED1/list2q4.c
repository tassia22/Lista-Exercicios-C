
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Faça um programa C para ler do usuário dois valores inteiros X e Y. Alimente dois vetores de tamanhos X e Y com
//números inteiros aleatórios, não repetitivos, sorteados no intervalo entre 0 e X+Y (inclusive). Faça a impressão das
//seguintes informações:
//a) Vetores X e Y;
//b) Todos os números exclusivos do vetor X;
//c) Todos os números exclusivos do vetor Y;
//d) Os números existentes nos dois vetores;

int main(){
	
	srand(time(NULL));
	int x, y, soma,s, repete,i;
	
	soma = 0;
	
	
	printf("Informe dois valores inteiros x e y\n");
	scanf(" %d%d", &x, &y);
	
	int v1[x], v2[y];
	
	soma = x + y;
	
	
	printf("soma do intervalo: %d\n", soma);
	
	do{
	repete = 0;
	
	s = rand()%x;
		for(int i = 0; i < s; i++)
			if(v1[i] == s)
				repete = 1;
					break;
				
		if(!repete)
			v1[i] = s;
				i++;
		
		
		
		}while(i < x);
	
	
	for(int i = 0; i < x; i++){
	printf(" vetor X: %d\n", v1[i]);
	
	}
		
	do{
	repete = 0;
	
	s = rand()%y;
		for(int i = 0; i < s; i++)
			if(v2[i] == s)
				repete = 1;
					break;
				
		if(!repete)
			v2[i] = s;
				i++;
		
		
		
		}while(i < y);
	
	
	for(int i = 0; i < y; i++){
	printf(" Vetor Y: %d\n", v2[i]);
	
	}
	
	for(int i = 0; i < x; i++){
	printf("numeros exclusivos do vetor X: %d\n", v1[i]);
	
	}
	
	for(int i = 0; i < y; i++){
	printf("numeros exclusivos do vetor Y: %d\n", v2[i]);
	
	}




	return 0;
}

#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//4. Faça um programa C para ler do usuário dois valores inteiros X e Y. Alimente dois vetores de tamanhos X e Y com
//números inteiros aleatórios, não repetitivos, sorteados no intervalo entre 0 e X+Y (inclusive). Faça a impressão das
//seguintes informações:
//a) Vetores X e Y;
//b) Todos os números exclusivos do vetor X;
//c) Todos os números exclusivos do vetor Y;
//d) Os números existentes nos dois vetores;

int main(){
	
	int x, y, s, soma;
	soma = 0;
	
	printf("digite o valor de x e y\n");
	scanf( " %d", &x);
	scanf( " %d", &y);
	
	int v1[x];
	int v2[y];
	
	soma = x + y;
	
	
	for(int i = 0; i < x; i++){
		s = rand()%x;
		v1[i] = s;
		for(int j = 0; i < x; j++)
			if(v1[i] == v1[j]){
				s = rand()%x;
				v1[i] = s;
				i--;
			}
	}
	
	for(int i = 0; i < y; i++){
		s = rand()%y;
		v2[i] = s;
		for(int j = 0; i < x; j++)
			if(v2[i] == v2[j]){
				s = rand()%x;
				v2[i] = s;
				i--;
			}
		
	}
	
	printf("soma do intervalo: %d\n", soma);
	
	
	for(int i = 0; i < x; i++){
		printf("\nvetor de X: %d\n", v1[i]);
		}
	
	for(int i = 0; i < y; i++){
		printf("\nvetor de Y: %d\n", v2[i]);
		}
	
	for(int i = 0; i < x; i++){
		printf("Os numeros exclusivos do vetor X são: %d\n", v1[i]);
		}
		
	for(int i = 0; i < y; i++){
		printf("Os numeros exclusivos do vetor Y são: %d\n", v2[i]);
		}
	
	for(int i = 0; i < x; i++)
	
	for(int i = 0; i < y; i++)
	

	printf("Os numeros existentes nos dois vetores são: %d\n e %d", v1[i], v2[i]);
	
	
	
	return 0;
}

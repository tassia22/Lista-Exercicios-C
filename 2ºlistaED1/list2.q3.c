#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>



//Gere dois vetores, V1 e V2, cada um com K valores aleatórios sorteados no intervalo entre 0 e X (0 < K < X). O
//usuário deve informar o valor de K e X, desde que K < X. O programa NÃO deverá aceitar números repetidos no
//mesmo vetor, e nem o mesmo número no mesmo índice dos dois vetores. Imprima os valores sorteados nos dois
//vetores, e o resultado da multiplicação dos valores dos índices de V1 e V2.


int main(){
	
	srand(time(NULL));

	int k = -1,x = 0, aux;
	
	
	do{
		
		if(k < x){
			printf("informe o valor de k e x\n");
			scanf(" %d", &k);
			scanf(" %d", &x);
		
		}
		
		}while(k > x);
	
	
	
	int v1[k], v2[k], mult,i;
	mult = 0;
	
	
	for(int i = 0; i < k; i++){
		v1[i] = rand()%x;
		for(int j = 0; j < i; j++){
			if(i!= j)
				if(v1[i] == v1[j])
					i--;
				
		}
	}
	
	
	for(i= 0; i < k; i++){
		printf(" numeros sorteados no v1: %d\n", v1[i]);
		
		}
		printf("\n");
	aux = k;
	do{
		
		if(k < x){
			printf("informe o valor de k e x\n");
			scanf(" %d", &k);
			scanf(" %d", &x);
		
		}
		
	}while(k > x);
			
		
	for(int i = 0; i < k; i++){
		v2[i] = rand()%x;
			for(int j = 0; j < i; j++)
			if(i!= j)
				if(v2[i] == v2[j])
					i--;
	}
	
	
		
		
	for(i= 0; i < k; i++){
		printf(" numeros sorteados no v2: %d\n", v2[i]);
			
		}
	
		mult = k * aux;
		printf("multiplicação: %d\n", mult);
	
	
		

	return 0;
}

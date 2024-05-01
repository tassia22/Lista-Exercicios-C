#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//QUESTAO 8

//Faça um programa que preencha um vetor com N números aleatórios, sorteados no intervalo entre X e Y. O
//programa deve informar a posição (índice) onde se encontra o menor número sorteado, seguido da posição onde se
//encontra o segundo menor número sorteado, e assim sucessivamente...

int main (){
	
	int n, menor,x,y;
	n = 0, x = 0, y = 0, menor = 0;
	
	printf("Informe o valor de n\n");
	scanf(" %d", &n);
	printf("Informe o valor de x\n");
	scanf(" %d", &x);
	printf("Informe o valor de y\n");
	scanf(" %d", &y);
	
	int v[n];
	
	for(int i = 0; i < n; i++){
		v[i] = x + rand()%(y-x+1);
		printf("%d-", v[i]);
	}
	
	printf("\n\n\n");
	
	for(int k = 0; k < n; k++){
		menor = 0; 
		for(int i = 1; i < n; i++){
			if(v[menor] > v[i])
				menor = i;
		
		}
		
		printf("%d[%d]-",menor,v[menor]);
		v[menor] = 99999;
	}	
		
	

	return 0;
}

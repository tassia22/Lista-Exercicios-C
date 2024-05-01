#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Faça um programa que preencha um vetor com N números aleatórios, sorteados no intervalo entre X e Y. O
//programa deve informar a posição (índice) onde se encontra o menor número sorteado, seguido da posição onde se
//encontra o segundo menor número sorteado, e assim sucessivamente...
	


int main(){
	
	srand(time(NULL));
	int n, x, y, posicao,i;
	posicao = 0;
	
	printf("valor de n\n");
	scanf(" %d", &n);
	printf("valor de x\n");
	scanf(" %d", &x);
	printf("valor de y\n");
	scanf(" %d", &y);
	
	int v[n];
	
	
	for(int i = 0; i < n; i++)
		v[i] = x + rand()%(y-x+1);
	
	for(int i = 0; i < n; i++)
		printf("vetor: %d\n",v[i]);
	
	for(int i = 1; i < n; i++)
		if(v[i] < v[posicao]){
			posicao = i;

	}
	
	printf("o menor numero sorteado se encontra na posicao: %d", i+1, posicao);


	return 0;
}



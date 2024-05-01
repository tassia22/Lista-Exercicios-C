#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Um baralho tem N cartas, não-repetidas, numeradas entre 1 e N. Faça um programa que leia o valor de N e imprima
//o resultado do “embaralhamento” das cartas.


int main(){
	
	srand(time(NULL));
	
	int n, v[n],i = 0;
	
	printf("informe o valor de N\n");
	scanf(" %d", &n);
	
	for(int i = 0; i < n; i++){
		v[i] = rand()%n;
	}
	
	for(int emb = 0; emb < 0; emb++){
	for(int i = 0; i < n; i++)
		if(v[i] > v[emb])
			v[i] = v[emb];
	}
	printf("o resultado do embaralhamento é: %d\n", v[i]);




	return 0;
}

#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>



//Um baralho tem N cartas, não-repetidas, numeradas entre 1 e N. Faça um programa que leia o valor de N e
//embaralhe todas as cartas. Imprima ao final a sequencia de cartas do baralho.

int main() {
	int n;
	
	printf(" digite a quantidade de cartas\n");
	scanf(" %d", &n);
	
	int v[n];
	
	srand(time(NULL));
	
	for(int i = 0; i < n; i++){
	v[i] = rand()%n;
	}
	
	int i;
	i = 0;
	
	for(int seq = 0; seq < 0; seq++){
	for(int i = 0; i < n; i++)
		if(v[i] > v[seq])
			v[i] = v[seq];
	}
	
	printf("a sequencia de cartas e: %d", v[i]);

 
 return 0;
}

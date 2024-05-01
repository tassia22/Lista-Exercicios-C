#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Leia do usuário um valor X, tal que X seja um valor PAR maior ou igual a 10. Gere aleatoriamente X números inteiros
//não-repetitivos e armazene-os em uma estrutura do tipo Array. Imprima os números gerados na seqüência em que
//foram sorteados. Após a impressão,

int main(){
	
	int x, s;

	
	printf("digite o valor de x\n");
	scanf(" %d", &x);
	
	int v[x];
	
	srand(time(NULL));
	for(int i = 0; i < x; i++){
		s = rand()%x;
		x = s;
	}
	
	for(int i = 0; i < x; i++)
		printf(" os numeros gerados foram: %d\n", v[i]);
	
	
	
	
	
	
   return 0;
}

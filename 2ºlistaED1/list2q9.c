#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Leia do usuário um valor X, tal que X seja um valor PAR maior ou igual a 10. Gere aleatoriamente X números inteiros
//não-repetitivos e armazene-os em uma estrutura do tipo Array. Imprima os números gerados na seqüência em que
//foram sorteados. Após a impressão, troque no vetor a posição da metade inicial dos números sorteados pela metade
//final. Repita a impressão do vetor.

int main(){
	
	srand(time(NULL));
	
	int x,i;
		
	do{
		
		printf("Informe o valor de x\n");
		scanf(" %d", &x);
		
		
		if(x%2 >= 10){
			

		}
		
		}while(x%2 >= 10);
	
	int v[x];
		
	
		for(int i = 0; i < x; i++)
			v[x] = rand()%10;
				for(int j = 0; j < i; j++)
					if(i != j)
						if(v[x] == j)
						i--;
	
	for(int i = 0; i < x; i++){
	printf("%d", v[i]);
	
	}
	printf("\n");
	


	return 0;
}

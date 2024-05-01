#include <stdlib.h>
#include <stdio.h>

//Faça um programa que leia dois valores inteiros X e Y, tal que Y >= X. O programa deverá sortear N valores no
//intervalo entre X e Y (inclusive). Obs.: Os números sorteados no intervalo entre X e Y não podem ser obtidos por
//tentativa e erro!

int main(){
	
	int x, y;
	
	printf("insira o primeiro valor\n");
	scanf(" %d", &x);
	printf("insira o segundo valor\n");
	scanf(" %d", &y);
	
	if(y >= x){
		for(int i = 0; i < 1; i++){
        printf(" %d", rand() % 10);
	
	}
	
}
	
	
	return 0;
  }

#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

int main(){

	int v[10], par;
	par = 0;
	
	for(int i = 0; i < 10; i++){
		scanf(" %d", &v[i]);
	}
	
	
	for(int i = 0; i < 10; i++)
		if(v[i]%2 == 0){
			par++;
	
	}
	
	printf("a quantidade de numeros pares são: %d\n", par);


	return 0;
}

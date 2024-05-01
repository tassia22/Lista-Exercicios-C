#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.



int main(){

	
	int v[10], i, vpar[10], cont;
	cont = 0;
	
	
	for(int i = 0; i < 10; i++){
		printf("digite o %d numero: ", i+1);
		scanf(" %d", &v[i]);
	}
		if(v[i] % 2 == 0){
           vpar[i] = v[i];
             cont++;
      }
		for(int i = 0; i < cont; i++){
		printf("\nvetor par: %d", vpar[i]);
		}
	
	
	return 0;
	}

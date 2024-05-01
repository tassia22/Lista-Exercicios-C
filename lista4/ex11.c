#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a
//quantidade de números negativos e a soma dos números positivos desse vetor.

int main(){

	int v[10], soma;
	soma = 0;
	
	for(int i = 0; i < 10; i++){
		scanf(" %d", &v[i]);
	}
	
	for(int i = 0; i < 10;i++){
		if(v[i] < 0){
			printf("numeros negativos: %d\n", v[i]);
		
		}
	}
	
	for(int i = 0; i < 10;i++){
		if(v[i] > 0){
			soma+=v[i];
		
		}
	}
		
		printf("soma dos numeros positivos: %d\n", soma);
	
	


   return 0;
}

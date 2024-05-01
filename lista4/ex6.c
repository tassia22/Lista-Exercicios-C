#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
//ser impresso o maior e o menor elemento do vetor.

int main(){

	int v[10], maior, menor;
	
	for(int i = 0; i < 10; i++){
		scanf(" %d", &v[i]);
	
	}
	
	maior = v[0];
	for(int i = 0; i < 10; i++)
		if(maior < v[i]){
			maior = v[i];
		}

	menor = v[0];
	for(int i = 0; i < 10; i++)
		if(menor > v[i]){
			menor = v[i];
		}
	
	
	printf("maior numero: %d\n", maior);
	printf("menor numero: %d\n", menor);

	return 0;
}


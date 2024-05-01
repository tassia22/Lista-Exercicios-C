#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
//ser impresso o maior e o menor elemento do vetor.



int main(){
	
	int v[10], maior = 0, menor = 0;

	for(int i = 0; i < 10; i++){	
		scanf(" %d", &v[i]);
	
	if(menor > v[i])
		menor++;
		
	if(maior < v[i])
		maior++;
	}	
	
	printf("os menores elementos do vetor sao: %d\n", menor);
	printf("os maiores elementos do vetor sao: %d\n", maior);
		

	 return 0;
	}

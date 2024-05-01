#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
//juntamente com o maior, o menor e a média dos valores.

int main(){

	int v[6], maior, menor,soma,i;
	i = 0;
	soma = 0;
	float media;
	media = 0;
	
	for(int i = 0; i < 6; i++){
		scanf(" %d", &v[i]);
	
	}
	
	maior = v[0];
	for(int i = 1; i < 6; i++){
		if(maior < v[i])
			maior = v[i];
	}
	
	menor = v[0];
	for(int i = 1; i < 6; i++){
		if(menor > v[i])
			menor = v[i];
	}
	
	
	for(int i = 0; i < 6; i++){
		soma += v[i];
	}
	
	media = soma / v[i];
	
	printf(" maior numero: %d\n", maior);
	printf(" menor numero: %d\n", menor);
	printf(" media numero: %.2f\n", media);






	return 0;
}

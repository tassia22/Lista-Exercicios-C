#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encon-
//tram o maior e o menor valor.

int main(){
	
	int v[5], maior, menor, posiMaior, posiMenor; 
	
	for(int i = 0; i < 5; i++){
		scanf(" %d", &v[i]);
	
	}
	
	maior = v[0];
	for(int i = 1; i < 5; i++){
		if(maior < v[i]){
			maior = v[i];
			posiMaior = i;
		}			
	}
	
	menor = v[0];
	for(int i = 1; i < 5; i++){
		if(menor > v[i]){
			menor = v[i];
			posiMenor = i;
		}			
	}
	
	printf("posicao onde se encontra o maior valor: %d\n", posiMaior);
	printf("posicao onde se encontra o menor valor: %d\n", posiMenor);

	return 0;
}

#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
//juntamente com o maior, o menor e a média dos valores.

int main(){
	
	int v[5], maior, menor;
	float media = 0;
	
	for(int i = 0; i < 5; i++){
		scanf(" %d", &v[i]);
	
		if(i == 0){
			maior = v[i];
			menor = v[i];
			media = v[i];
		}
	
		if(v[i] > maior){ 
			maior = v[i];
		}

		if(v[i]< menor){
			menor = v[i];
		}
	
		for(int i = 0; i < 5; i++){
			media+= v[i];
		}
		
		
	}
		
		printf("\nMaior valor: %d", maior);
		printf("\nMenor valor: %d", menor);
		printf("\nmedia: %.1f", media/5);
  
  return 0;	
}

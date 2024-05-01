#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encon-
//tram o maior e o menor valor.

int main(){
	
	int v[5], maior, menor, maiorp, menorp;
	
	for(int i = 0; i < 5; i++){
		printf("informe os valores\n");
		scanf(" %d", &v[i]);
		
		if( i == 0){
			maior = v[i];
			menor = v[i];
			maiorp = v[i];
			menorp = v[i];
			
		}
		
		if(v[i] > maior){
			maior = v[i];
			maiorp = v[i];
			}
		if(v[i] < menor){
			menor = v[i];
			menorp = v[i];
		}
	
	}
	
		printf("\nMaior valor: %d posição: %d", maior, maiorp);
		printf("\nMenor valor: %d posição: %d", menor, menorp);
	
	
	
  return 0;
}

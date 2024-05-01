#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Gere um vetor de K posições (0 < K < 1000) com valores aleatórios entre 0 e 1000. Conte e escreva quantos valores
//pares e ímpares ele possui. Imprima o maior, o menor valor e a média aritmética.


int main(){
	
	srand(time(NULL));
	
	int k;
	
		
	scanf(" %d", &k);

	
	int v[k],par, impa, maior, menor, soma;
	float media;
	soma = 0;
	par = 0;
	impa = 0;
	media = 0;
	
	
	for(int i = 0; i < k; i++){
		v[i] = rand()%1000;
	}
		for(int i = 0; i < k; i++){
		printf("%d ", v[i]);
	}
		printf("\n");

	
	maior = v[0];
	
	for(int i = 1; i < k; i++)
			if(maior < v[i])
			maior = v[i];


	
	menor = v[0];
	for(int i = 1; i < k; i++)
			if( menor > v[i])
			menor = v[i];

		
		
		for(int i = 0; i < k; i++){
			if( v[i]%2 == 0){
				par++;
		
		}else{
			impa++;
			
		}
	}
	
	for(int i = 0; i < k; i++){
		soma+= v[i];
		
		}
		
		media = soma / k;

	
	
	printf("quantidade de numeros pares: %d\n",par);
	printf("quantidade de numeros impares: %d\n",impa);
	printf("maior valor: %d\n", maior);
	printf("menor valor: %d\n", menor);
	printf("media: %.2f\n",media);
	
	




	return 0;
}

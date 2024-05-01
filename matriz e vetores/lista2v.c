#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Gere um vetor de K posições (0 < K < 1000) com valores aleatórios entre 0 e 1000. Conte e escreva quantos valores
//pares e ímpares ele possui. Imprima o maior e o menor valor. Calcule também a média destes valores, e a
//quantidade de números acima da média.

int main(){
	
	srand(time(NULL));
	int k, i;
	i = 1000;
	
	
	for(int i = 0; i < k; i++)
		k = rand()%k;
		
	scanf(" %d", &k);
	
	
	int v[k], par,imp, maior, menor;
	float media;
	par = 0;
	imp = 0;
	media = 0;
	
	if(i == 0){
		maior = v[i];
		menor = v[i];
		media = v[i];
	}

	
	for(int i = 0; i < k; i++){
		v[i] = rand()%100;
	
		}
		
		if(v[i] % 2 == 0){
			par++;
			}else{
				imp++;
		}
		
		if(v[i] > maior){ 
			maior = v[i];
		}

		if(v[i]< menor){
			menor = v[i];
		}
			

		media+=v[i];
			
		
		printf("os numeros escolhidos foram: %d\n", k);
		printf(" possui %d valores pares\n", par);
		printf(" possui %d valores impares\n", imp);
		printf(" os maiores valores são: %d\n", maior);
		printf(" os menores valores são: %d\n", menor);
		printf(" a media é: %f", media/k);
		
		
	

	
	
	
	return 0;
}

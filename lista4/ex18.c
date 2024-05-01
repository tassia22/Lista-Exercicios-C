#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Faça um programa que leia um vetor de 10 números. Leia um número x. Conte os
//múltiplos de um número inteiro x num vetor e mostre-os na tela.


int main(){
	
	int v[10],x,mult; 
	
	
	for(int i = 0; i < 10; i++){
		scanf(" %d", &v[i]);
	
	}
	
	printf("informe o valor de x\n");
	scanf(" %d", &x);
	
	int vet[x];
	
	mult = v[0];
	for(int i = 0; i < x; i++){
		if(vet[i]%10 == 0){
			mult*= vet[i];
			break;
		}
	
	
	}
	
	for(int i = 0; i < 10; i++){
	printf(" vetores: %d\n", v[i]);
	}
	
	for(int i = 0; i < x; i++){
	printf(" vetores multiplos de X: %d\n", vet[i]);
	}
	
	



	return 0;
}

#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores
//lidos na ordem inversa.
int main(){

	int v[6];
	
	for(int i = 0; i < 6; i++){
		scanf(" %d", &v[i]);
	}
	
	for(int i = 6; i >= 0; i--)
		printf(" %d", v[i]);
		
	
	

	return 0;
}


#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.


int main(){

	int num[6];
	
	printf("digite 6 numeros\n");
	for(int i = 0; i < 6; i++){
		printf("digite o %d valor: ", (i+1));
		scanf(" %d", &num[i]);
	}
	
	




 return 0;
}

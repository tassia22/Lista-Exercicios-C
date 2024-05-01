#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Faça um programa que leia um vetor de 5 posições para números reais e, depois, um
//código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem
//direta; se for 2, mostre o vetor na ordem inversa. Caso, o código for diferente de 1 e 2
//escreva uma mensagem informando que o código é inválido.
int main(){
	
	int v[5], cod;
	
	printf("informe o valor de 5 vetores\n");
	
	for(int i = 0; i < 5; i++){
		scanf(" %d", &v[i]);
	}
	
	printf("informe o valor do codigo\n");
	scanf(" %d", &cod);
	
	if(cod == 0){
		system("pause");
	
	}
	
	if(cod == 1){
		for(int i = 0; i < 5; i++){
		printf(" %d\n", v[i]);
		
		}
	}
	
	if(cod == 2){
		for( int i = 5-1; i>= 0; i--){
			printf(" %d\n", v[i]);
	
		
		}
	
	}
	
	if(cod != 1 || cod != 2){
		printf("codigo invalido!\n");
	
	}
	
	
	
	
	return 0;
}



#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
//e imprima a média geral.

int main(){

	int nota[15], soma,i = 0;
	soma = 0;
	float media;
	media = 0;
	
	for(int i = 0; i < 15; i++){
		scanf(" %d", &nota[i]);
	}
	
	for(int i = 0; i < 15; i++){
		soma += nota[i];
	
	}
	
	media = soma / nota[i];
	
	printf("media: %.2f", media);



	return 0;
}

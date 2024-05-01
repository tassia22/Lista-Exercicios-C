#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
//e imprima a média geral.

int main(){

	
	float n[15], media;
	media = 0;

		
	for(int i = 0; i < 15; i++){
		printf("digite a nota do %d aluno\n", i+1);
		scanf("	%f", &n[i]);
	}
	
		for(int i = 0; i < media; i++){
			media += n[i];
		}
		
		printf("\nmedia: %.1f", media/15.0);





	return 0;
	}

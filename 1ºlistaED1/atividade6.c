#include <stdlib.h>
#include <stdio.h>


//Faça um programa que declare duas variáveis do tipo char, leia as variáveis em formato de símbolo e após isso
//imprima o valor da multiplicação destes dois números.

int main(){
	
	char letra='x', letra1='y';
	int mult;

	printf("insira a primeira letra\n");
	scanf(" %c", &letra);
	printf("insira a segunda letra\n");
	scanf(" %c", &letra1);
	

	
	mult = letra * letra1;
	printf(" %d", mult);
	
	
	
	
	
	
	 return 0;
	}

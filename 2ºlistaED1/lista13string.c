#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Faça um programa que leia, em formato de string, um valor numérico representado na base binária. O programa
//deve validar se o valor informado pelo usuário realmente é um número binário. Em caso positivo, o programa deve
//informar o valor correspondente na base decimal.

int main(){
	
	char str[100];
	int valido, i;
	
	do{
	
	printf(" informe o valor em binario: ");
	scanf(" %s ", str);
	
	valido = 1;

	for( i = 0; i < strlen(str); i++)
		if(str[i] != '0' && str[i] != '1')
			valido = 0;
		
	}while(!valido);
	
	
	
   return 0;
}

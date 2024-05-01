#include <stdlib.h>
#include <stdio.h>

//Faça um programa que leia um valor inteiro N não-negativo. O programa deve calcular e imprimir o valor de N!
//N Fatorial. P.Ex.: 6! == 720; 9! == 362880.


int main(){
	
	int n,resultado;
	
	printf("digite um numero\n");
	scanf(" %d", &n);
	resultado = n;
	
	
	for(int i = n-1; i > 1; i--)
		n *= i;
		
	printf(" %d! == %d\n",resultado,n);
	
	
	




	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Faça um programa que gera aleatoriamente uma aposta da lotofácil
//(15 números não repetitivos no intervalo entre 01 e 25).

int main(){
	
	int v[15];
	int i;
	int cont = 0;
	
	do{
	 v[i] = rand()%15;
	for( i = 0; i < cont; i++)
		if( cont < v[i])
			cont++;
		if v[i] == cont)
			cont = 0;
	
	
	}while( i < 15);
	
	
	return 0;
}

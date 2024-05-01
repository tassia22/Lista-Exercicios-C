#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Gere dois vetores, V1 e V2, cada um com K valores aleatórios sorteados no intervalo entre 0 e X (0 < K < X). O
//usuário deve informar o valor de K e X, desde que K < X. O programa NÃO deverá aceitar números repetidos no
//mesmo vetor, e nem o mesmo número no mesmo índice dos dois vetores. Imprima os valores sorteados nos dois
//vetores, e o resultado da multiplicação dos valores dos índices de V1 e V2.

int main(){
	
	int k, x;
	printf("escolha o tamanho dos vetores: ");
	scanf(" %d", &k);
	int v1[k];
	int v2[k];
	printf("escolha o intervalo do sorteio: ");
	scanf(" %d", &x);
	
	//sorteia numeros aleatorios não-repetitivos
	//não repetitivos para v1
	int cont1 = 0;

	do{
	int s = rand()%x;
	int valido = 1;
	for(int i = 0; i < cont1; i++)
		if(s == v1[i])
			valido = 0;
	if(valido){
		v1[cont1] = s;
		cont1++;
	}
	
	}while( cont1 < k);
	
	for( int i = 0; i < k; i++)
		printf("%d\n", v1[i]);
		
	//não repetitivos para v2
	int cont2 = 0;

	do{
	int s = rand()%x;
	int valido = 1;
	for(int i = 0; i < cont2; i++)
		if(s == v2[i])
			valido = 0;
	
	if(v2[cont2] == s)	
		valido = 0;
	
	if(valido){
		v1[cont2] = s;
		cont2++;
	}
	
	}while( cont2 < k);
	
	//imprimindo resultados
	for(int i = 0; i < k; i++)
		printf("%d * %d == %d\n", v1[i], v2[i], v1[i] * v2[i]);
	
	
	
	
	return 0;
}

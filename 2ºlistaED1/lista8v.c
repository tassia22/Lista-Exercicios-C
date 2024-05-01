#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Faça um programa que preencha um vetor com N números inteiros, sorteados no intervalo entre 0 e X. O programa
//deve imprimir os números sorteados, e ao final, o seguinte resumo: 1) Quantos números diferentes foram sorteados;
//2) O número mais vezes sorteado; 3) O número menos vezes sorteado; 4) Quantidade de números não-repetitivos
//sorteados;

int main(){
	
	
	srand(time(NULL));
	int n, x, dis = 1, dif = 0;
	
	
	printf("digite o valor de N\n");
	scanf(" %d", &n);
	printf("maior numero do sorteado\n");
	scanf( "%d", &x);
	
	int v[n], vaux[n];
	
	for(int i = 0; i < n; i++)
		v[i] = rand()%x;
	
	vaux[0] = v[0];
	
	for(int i = 0; i < n; i++)
		printf(" %d", v[i]);
	
	
	//quantidade de numeros diferentes sorteados
	for(int i = 0; i < n; i++){
		for(int j = 0; j < dis; j++){
			if(v[i] != vaux[j]){
				dif = 1;
			}else{
				dif = 0;
			}	break;
		}		
	}		
	
	printf("\nquantidade de numeros diferentes: %d", dis);
	
	
	return 0;
}

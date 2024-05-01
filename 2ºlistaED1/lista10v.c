#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Faça um programa que preencha aleatoriamente um vetor de N números inteiros com valores entre X e Y (inclusive).
//Após isto, imprima o vetor, e as seguintes informações:
//a) média
//b) moda
//c) mediana
//d) desvio padrão.


int main(){

	
	int n, x, y, i, j, moda;
	i = 0;
	j = 0;

	float media, mediana, soma, aux, conta;
	
	media = 0;
	mediana = 0;
	soma = 0;
	aux  = 0;
	conta = 0;
	
	
	printf("digite a quantidade do vetor\n");
	scanf(" %d", &n);
	printf("menor numero sorteado: ");
	scanf(" %d", &x);
	printf("maior numero sorteado: ");
	scanf(" %d", &y);
	int v[n], cont[n];
	
	if(n > 0){
		
		for(int i = 0; i < n; i++){
			scanf(" %d", &v[i]);
			
			soma+=v[i];
			
			}
		
		
		}
		//media
		media = soma/n;
	 
	 //mediana
	 for(int i = 0; i < n-1; i++){
		for(int j = i+1; i < n; j++){
		
			if(v[i] > v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
				
				}
		 
			}
		}
	
		if(n%2){
			mediana = v[n/2];
			}else{
				 mediana = (v[n/2-1]+v[n/2])/2;
			}
			
		printf("a mediana dos vetores e de: %2.f\n", mediana);
		
		//moda
		for(int i = 0; i < n; i++){
			for(j = i+1; j < n; j++){
				if(v[i] == v[j]){
					cont[i]++;
						if(cont[i] > conta){
							conta = cont[i];
							moda = i;
							
							}
					}
				
			}
        cont[i]=0;
    }	
	
		printf("a moda dos vetores e de: %d", moda);

return 0;
}

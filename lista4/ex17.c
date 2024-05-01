#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuı́rem
//valores negativos.


int main(){
	
	int v[10]; 
	
	
	for(int i = 0; i < 10; i++){
		scanf(" %d", &v[i]);
	
	}
	
	
	for(int i = 0; i < 10; i++){
		if(v[i] < 0){
		
		v[i] = 0;
	
	
	}
		printf(" %d\n", v[i]);
	
	
	}




	return 0;
}

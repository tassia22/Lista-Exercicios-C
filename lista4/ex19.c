#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5 ∗ i)%(i + 1), sendo
//i a posição do elemento no vetor. Em seguida imprima o vetor na tela.


int main(){
	
	int v[50];
	
	for(int i = 0; i < 50; i++){
		scanf("%d", &v[i]);
		
	}
	for(int i = 0; i < 50; i++){
		if(i + 5 ∗ i)%(i + 1){
			printf("-%d-", v[i]);
	
		}
	
	}
	


	return 0;
}

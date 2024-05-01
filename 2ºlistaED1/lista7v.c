#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Faça um programa que sorteie aleatoriamente N números, no intervalo entre X e Y (inclusive). Após o sorteio, o
//programa deve imprimir os números sorteados originalmente. Após isso, e a cada iteração, o programa deve imprimir
//novamente a relação, mas agora trocando as posições do MAIOR elemento pelo MENOR elemento.
//Uma vez trocadas as posições, estes mesmos número não poderão ser mais trocados. Repita essa operação até
//quando for possível...

int main(){
	
	srand(time(NULL));
	int n, x, y, maior, menor;

	 scanf(" %d", &n);
	 scanf(" %d", &x);
	 scanf(" %d", &y);
	
	int v[n];
	maior = v[n];
	menor = v[n];
	
	
	for(int i = 0; i < n; i++){
		n = (rand()%(y+1-x))+x;
	}
	
	for(int i = 0; i < x; i++){
		n = rand() % x;
	}
	
	for(int i = 0; i < y; i++){
		n = rand() % y;
	}
	
	printf(" os numeros  sorteados foram\n N= %d\n X= %d\n Y= %d\n", n, x, y);
	
	for(int i = 1; i < n; i++){
		if(menor > (v[n] + i))
			menor = v[n] + i;
		
		if(maior <(v[n] + i))
			maior = v[n] + i;
		
		}
	
	
  return 0;	
}

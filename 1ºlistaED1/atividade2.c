#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define pow


//Faça um programa que leia um valor inicial N e uma razão R. Imprima uma sequência em P.A. contendo 10 valores,
//e uma sequência em P.G. contendo 10 valores. P.Ex.: N == 3 e R == 2.
//PA = 3 - 5 - 7 - 9 - 11 - 13 - 15 - 17 - 19 - 21
//PG = 3 - 6 - 12 - 24 - 48 - 96 - 192 - 384 - 768 - 1536



int main() {
	
	int n,r,pa,pg,m;
	
	printf("digite o valor e a razao contendo 10 valores\n");
	scanf(" %d%d", &n,&r);
	printf("PA = valor: %d, razao: %d\n",n,r);
	printf("Pg = valor: %d, razao: %d\n",n,r);
	m = n;
	
	for(int i = 1; i < 10; i++){
		pa = n + r;
		n = pa;
		pg = m * r;
		m = pg;
		
		printf("\n%d",pa);
		printf("\n%d",pg);
		
		}
	
	

	return 0;
}

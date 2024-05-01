#include <stdlib.h>
#include <stdio.h>


//Crie um programa que receba um número e verifique se ele é um número triangular. Um número é triangular quando
//é resultado do produto de três números consecutivos. Exemplo: 120 = 4 x 5 x 6.

int main(){

int n,n1,t;
 n1 = 1;
 
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	t = n1 * (n1 + 1) * (n1 + 2);

	while (t < n){
    n1++;
	t = n1 * (n1 + 1) * (n1 + 2);
	}
	if (t == n){
	printf("e triangular\n");
	}else{
		printf("nao e triangular");
	}
 
 
 return 0;
 
}

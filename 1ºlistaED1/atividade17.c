#include <stdlib.h>
#include <stdio.h>

//Escreva um programa que lê um número N, e então imprima o primeiro número primo imediatamente anterior e o
//primeiro primo imediatamente posterior à N.

int main(){
	
	
	int n,p,q;
	
	scanf("%d",&n);
	p = n;
	
	while(n%2 == 0 || n%3 == 0 ){
		n++;
		q = n;
	}
	
	n--;
	while(p%2 == 0 || p%3 == 0 ){
		p--;
	}
	printf(" %d , %d ",q,p);
	
	
	
	
	
	 return 0;
	}

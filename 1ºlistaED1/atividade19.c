#include <stdlib.h>
#include <stdio.h>

//Calcular o valor total de um financiamento bancário de X anos, onde o valor da prestação inicial é K, e os juros
//mensais compostos são de Y% ao mês.

int main(){
	          
	
	
	float montante,valor,parcela,taxa,i,p;
	printf("valor\n");
	scanf("%lf",&valor);
	
	printf("parcela\n");
	scanf(" %lf",&parcela);
	
	printf("taxa\n");
	scanf(" %lf",&taxa);
	
	i = 1+(taxa/100);
	
	p = (i, parcela);
	
	montante = valor*p;
	
	printf("Total a pagar :R$%.2lf",montante);
	
	
	
	
	 return 0;
	}
	

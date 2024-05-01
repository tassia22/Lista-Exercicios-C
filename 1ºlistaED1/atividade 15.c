#include <stdio.h>
#include <stdlib.h>

//Dado um país A, com ‘Pa’ número de habitantes e taxa de natalidade de X % ao ano, e um país B com ‘Pb’ número
//de habitantes e taxa de natalidade de Y % ao ano, faça um programa que leia o valor dessas variáveis e informe em
//quanto tempo o país com menor população irá superar o país de maior população, ou se isso nunca acontecerá.

int main(){ 
	int num,p,i;
	i = 1;
	scanf("%d",&num);
	p = i * i;
	while (p < num ){
		i = i +1;
		
		p = i * i;
		
	}
		if(p == num){
			printf("e quadrado perfeito");
		}
		else{
			printf("nao e numero perfeito");
		}	
	
	return 0;
}

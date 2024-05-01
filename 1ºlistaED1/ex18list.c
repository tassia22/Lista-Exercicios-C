#include <stdlib.h>
#include <stdio.h>

//Crie um programa que receba um número e verifique se ele é um número triangular. Um número é triangular quando
//é resultado do produto de três números consecutivos. Exemplo: 120 = 4 x 5 x 6.

int main(){
	
	int n,mult;
	mult = 0;
	
	printf("Informe um numero\n");
	scanf("%d", &n);
	
	for(int i = 1; i <=n*1; i++){
		mult = n *= i;
		
		}
	if(mult > 0){
		printf("é triangular\n");
		
	}else{
		printf("nao é triangular\n");
		
		}
	
	





   return 0;
}

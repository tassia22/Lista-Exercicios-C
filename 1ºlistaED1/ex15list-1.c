#include <stdlib.h>
#include <stdio.h>

//Faça um programa que receba um número e verifique se ele é ou não um número perfeito.
//Um número é perfeito quando a soma de todos os seus divisores inteiros – excluindo ele mesmo – é igual ao próprio
//número. Ex: 28 = 1 + 2 + 4 + 7 + 14.

int main(){
	
	int n, soma;
	soma = 0;
	
	printf("informe um numero\n");
	scanf("%d", &n);
	
	for(int i = 1; i<=n/2; i++){
		if(n % i == 0){
			soma += i;
			
			}
		
		}
		
		if(soma == n){
			printf("é um numero perfeito\n");
			
			}else{
				printf("nao é um numero perfeito\n");
				}


	
	 return 0;
	}

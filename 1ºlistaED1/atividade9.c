#include <stdlib.h>
#include <stdio.h>

//Faça um programa que receba um número informado pelo usuário e imprima a informação se este é um número
//primo ou não. O programa deve testar vários números, até que o usuário digite qualquer valor negativo.

int main(){
	
	int i, n, resul;
	

	printf("digite um valor para saber se ele é primo\n");
      
      do{
		resul = 0;
		scanf("%d", &n);
     

		for( i = 2; i < n; i++){
		if( n % i == 0){
			resul++;
			break;
			}
		}
        if(resul== 0){
			printf(" %d é um numero primo\n", n);
		}else{
			printf(" %d não é um numero primo\n", n);
			}
        
		
		}while(n > 0);


	
	 return 0;
	}

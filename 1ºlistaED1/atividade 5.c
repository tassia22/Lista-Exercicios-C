#include <stdlib.h>
#include <stdio.h>




//Faça um programa que gere um número aleatório entre 0 e K. O programa deve imprimir o número sorteado e a
//quantidade de dígitos que ele possui (p.ex.: O número 6958 possui 4 dígitos).

int main(){
	
	int k, cont, digito;
	cont = 0;
	digito = 0;
	
    
     for(int i = 0; i < 1; i++){
	  k = rand()%100;
	 }
	 
	 do{
         cont++;			
		 
		 }while( 0 >= k);
		 
		 printf("o número sorteado foi:%d\n", k);
		
		do{
			 digito = digito +1;
			 k = k / 10;
			 
			 }while( k != 0);
		
		 printf(" o numero sorteado possui %d digitos\n", digito);
		 
		 
	
	
	
	 return 0;
	}

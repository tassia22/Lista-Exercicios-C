#include <stdlib.h>
#include <stdio.h>

//Faça um programa que gere um número aleatório entre 0 e K. O programa deve imprimir o número sorteado e a
//quantidade de dígitos que ele possui (p.ex.: O número 6958 possui 4 dígitos).


int main(){
	
	
	int k,cont,digito;
	cont = 0;
	digito = 0;
	
	
	
	for(int i = 0; i < k; i++){
	k = rand()%100;

	}
	
	while( 0 >= k){
		cont++;
	}
	printf("o numero sorteado foi: %d\n",k);
	
	
	
	 while(k != 0){
		
		digito = digito+1;
		 k/=10;
	 }
	
	printf("o numero sorteado possui %d digitos",digito);
	
	
	
	
  return 0;
}


#include <stdlib.h>
#include <stdio.h>


//Faça um programa que receba do usuário o comprimento de três caibros de madeira. O programa deve informar ao
//usuário se é possível ou não formar um triângulo com as peças.

int main(){
	
	int c1, c2, c3;
	
	printf("digite o comprimento de três caibros de madeira\n");
	scanf(" %d%d%d", &c1, &c2, &c3);
	
	if( c1 + c2 > c3 && c1 + c3 > c2 && c2 + c3 > c1){
		printf("È possivel formar o triangulo\n");
		
	}else{
	 printf("Não é possivel formar um triangulo\n");
			
	    }
	
   return 0;
}

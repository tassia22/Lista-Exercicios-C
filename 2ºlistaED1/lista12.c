#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdio.h>


//12. Faça um programa que leia, em formato de string, dois números inteiros excepcionalmente grandes e imprima a
//soma destes números. P.ex.: “25996478547851225” e “1452565475541” = 25997931113326766

int main(){
	
	char n1[100];
	char n2 [100];
	int soma;
	soma = 0;
	
	

	
	printf("Digite o primeiro numero\n");
	gets(n2);
	
	printf("Digite o segundo numero\n");
	gets(n2);
	
	if(strcat(n1,n2) != '\0'){
		soma+= strcat(n1,n2);
	}
	printf(" resultado: %s + %s = %d", n1, n2, soma);
	
	
	
	
	
	
  return 0;
}

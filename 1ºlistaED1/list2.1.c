#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Utilizando a estrutura condicional Switch-Case, implemente uma calculadora que recebe um valor inteiro A, um sinal
//de operação e outro valor inteiro B. Imprima o resultado da operação correspondente. As operações permitidas são:
//+ Adição % Resto de Divisão
//- Subtração ^ Exponenciação
//* Multiplicação
//Divisão

int main(){
	
	int a, b;
	int adicao, restDiv, subtracao,mult, divisao;
	int opc;
	
	scanf(" %d", &a);
	scanf(" %d", &b);
	
	
	do{
	
		printf("1-adicao\n");
		printf("2-resto da divisao\n");
		printf("3-subtracao\n");
		printf("4-multiplicacao\n");
		printf("5-divisao\n");
		printf("6-sair\n");
		scanf(" %d", &opc);
		
		switch(opc){
		
			case 1: printf("adicao\n");
			adicao = a + b;
			printf("%d + %d = %d\n",a, b, adicao);
			break;
			
			case 2: printf("resto da divisao\n");
			restDiv = a / b;
			printf("%d / %d = %d\n", a, b, restDiv);
			break;
			
			case 3: printf("subtracao\n");
			subtracao = a - b;
			printf("%d - %d = %d\n", a, b, subtracao);
			break;
			
			case 4: printf("multiplicacao\n");
			mult = a * b;
			printf("%d * %d = %d",a,b,mult);
			
			case 5: printf("divisao\n");
			divisao = a / b;
			printf(" %d / %d = %d", a,b,divisao);
			break;
			
			
			
			
			}
	
		
		}while(1);
	
	
	
	
	
	return 0;
} 

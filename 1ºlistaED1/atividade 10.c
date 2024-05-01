#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

//Utilizando a estrutura condicional Switch-case desenvolva uma calculadora para cálculo de áreas, apresentando o
//seguinte menu ao usuário. A calculadora poderá realizar inúmeros cálculos, até que a opção de sair seja executada.
//1 - Área de Retângulo
//2 - Área de Trapézio
//3 - Área de Triângulo
//4 - Área de Círculo
//5 - Sair
int main(){

	float area, base, altura, basemt, raio, pi=3.14;
	int opc;
	
	
	
	
	do{
		printf("\n1 - area do retangulo");
		printf("\n2 - area do trapezio");
		printf("\n3 - area do triangulo");
		printf("\n4 - area do circulo");
		printf("\n5 - sair");
		
	
		scanf(" %d", &opc);
		
		if( area > 0 && area < 5){
			
		switch(opc){
	    case 1:
	        printf("digite a altura\n");
			scanf(" %f", &altura);
			printf("digite a base\n");
			scanf(" %f", &base);
			area = base * altura;
			printf("area do retangulo: %.2f\n", area);
			break;
		case 2:
		    printf("digite a altura\n");
			scanf(" %f", &altura);
			printf("digite a base\n");
			scanf(" %f", &base);
			printf("digite a base menor do trapezio\n");
			scanf(" %f", &basemt);
			base = (base + basemt) * altura / 2;
			printf("area do trapezio: %.2f\n", base);
			break;
		case 3:
		    printf("digite a altura\n");
			scanf(" %f", &altura);
			printf("digite a base\n");
			scanf(" %f", &base);
			printf(" digite a area\n");
			scanf(" %f", &area);
			area = (base * altura) / 2;
			printf("area do triangulo: %.2f\n", area);
			break;
		case 4:
			printf(" digite a area\n");
			scanf(" %f", &area);
			printf("digite o raio\n");
			scanf(" %f", &raio);
			printf("digite o pi\n");
			scanf(" %f", &pi);
			area = pi * raio * raio;
			printf("area do circulo: %.2fm2\n",  area);
			break;
		case 5:
			printf("sair");
			break;
		default:
			printf("opcao invalida.\nEscreva outra opcao: ");
		}
	}else{
		printf("numero não valido");
		}
	
	}while( area != 0);
	
	
	  
    return 0;
 }

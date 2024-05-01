#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>




//Faça um programa que leia um número indeterminado de valores inteiros (até que o usuário informe um valor
//negativo). Após isto, o programa deve informar os seguintes resultados: Soma dos números lidos, Média dos
//números lidos, Maior valor informado, Menor valor informado, Percentual de números pares e o Percentual de
//Números ímpares.

int main(){

	int s, soma, maior = 0, menor = -1, pares, impares, total;
	soma = 0;
	pares = impares = 0;
	float m, media;
	media = 0;
	float ppares, pimpares;
	
	 
	
	do{
		scanf("%d", &s);
		scanf("%f", &m);
		
		if( s > 0){
		 soma = soma + s;
		
		}
		
		if ( m > 0){
		 media = (media + m) / 2;
		}
		
		if(s < 0){
			menor = s;
		}
		
		
		if( s > maior){
			maior = s;
		}
			
		if(s%2 == 0){
			pares++;
			
		}else{
			impares++;
		}
		
		
		} while(s > 0);
		pares --;
		total = pares + impares;
		ppares = (pares * 100.0) / total;
		pimpares = (impares * 100.0) / total;
		
		
		printf("resultado da soma: %d\n", soma);
		printf("resultado da media: %f\n", media);
		printf("maior número: %d\n", maior);
		printf("menor número: %d\n", menor);
		printf("total de numeros pares: %d\n", pares);
		printf("total de numeros impares: %d\n", impares);
		printf("porcentagem pares: %.2f\n", ppares);
		printf("porcentagem impares: %.2f\n", pimpares);
		
		
		
			
			
           
	return 0;
}


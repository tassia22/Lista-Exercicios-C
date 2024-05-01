#include <stdio.h>
#include <stdlib.h>

//Sabia que a sequência Fibonacci está ligada intimamente à natureza? Os números da série são facilmente
//encontrados nos seres vivos e no meio ambiente. Essa série é infinita e se inicia com os valores: 1, 1, 2, 3, 5, 8, 13,
//21, 34, (...), onde o próximo valor sempre será a soma dos dois valores anteriores.
//Faça um programa que leia um valor N, e imprima os dois primeiros termos da série Fibonacci maiores que N.
//Após isso, imprima o resultado da divisão do maior termo pelo menor termo.
//Repita essa mesma operação para diversos valores de N diferentes, e veja o que acontece de interessante...
//Dica: Pesquise na Internet o conceito de “Proporção Área” ou “Proporção Divina”.



int main(){
	
	int n, aux;
	scanf(" %d", &n);
	int s1, s2;
	s1 = s2 = 1;
	
	do{
		
		aux = s1;
		s1 = s2;
		s2 += aux;
		
		
		
		
	}while( s1 <= n);
	printf(" os valores %d e %d são os proximos da serie \n", s1, s2);
	
	printf ("A divisão do maior valor atual, com o menor tem o valor de %d", s2/s1);
	
	
	
	
	
	
	
	
	
	
	 return 0;
	}

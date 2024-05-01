#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Faça um programa que leia uma string S, e criptografe-a com o seguinte algoritmo: sorteie um vetor de strlen(S)
//números, com valores aleatórios e não-repetitivos entre 0 e strlen(s)-1 (inclusive). Após o sorteio, embaralhe
//as letras da mensagem original, de acordo com as posições sorteadas no vetor. Atenção, todos os caracteres tem
//que ter sua posição inicial alterada!

int main(){
	
	srand(time(NULL));
	
	char s[6];
	int n;
	

	
	printf("digite uma palavra: ");
	scanf(" %[^\n]s", s);
	
	
	
	
	//sorteio do vetor
	for(int i = 0; i < strlen(s); i++)
		n = rand()%strlen(s)-1+6;
	
	int v[n], aux, v[cont];
	v[cont] = 0;
	
	
	
	
	
	
	
	
	
  return 0;
}

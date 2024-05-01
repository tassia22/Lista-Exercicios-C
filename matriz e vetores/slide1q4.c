#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Sorteie números aleatórios para preencher uma tabela NxN (o valor
//N definido pelo usuário). Imprima os nºs em formato de tabela.

	int n;
	printf("escolha o tamanho da matriz quadrada: ");
	scanf(" %d", &n);
	
	int m[n][n];
	
	for(int l = 0; l < n; l++)
		for(int c = 0; c < n; c++)
			m[l][c] = rand()%100;
	
	for(int l = 0; l < n; l++){
		printf("\n");
		for(int c = 0; c < n; c++)
			printf("%02d\t", m[l][c]);
	}

#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da
//diagonal principal.

int main(){
	
	int l = 3;
	int c = 3;
	
	int m[l][c], soma = 0;
	
	for(int l = 0; l < 3; l++){
		for(int l = 0; l < 3; l++)
		printf("[%d][%d]\t", l+1,c+2);
		scanf("	%d", &m[l][c]);
	}
	
	
	soma = m[0][0] + m[1][1] + m[2][2];
	printf(" a soma da diagonal principal da matriz é: %d", soma);
	
	
	
	return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>


//Gere aleatoriamente uma matriz N x N de inteiros sorteados no intervalo entre X e Y (inclusive).
//Peça ao usuário o número de duas linhas, e faça a permutação das linhas. Faça o mesmo com duas colunas
//escolhidas pelo usuário. Imprima o resultado das permutações.

int main() {
	
	srand(time(NULL));
	
	int x,y,n;
	
	printf("digitie o n,x, e y: \n");
	scanf(" %d%d%d", &x,&y,&n);

	
	int m[n][n],ma[n][n], auxC=0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			m[i][j] = ma[i][j] = x+ rand()%(y-x+1);
			printf ("%d\t",m[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
			
	int l1,l2,c1,c2;
	printf ("quais as linhas que vão permutar? de 0 a N \n");
	scanf(" %d%d",&l1,&l2);
	
	
	printf("\n");
	
	printf("LINHAS:\n");
	
	for( int j= 0; j<n; j++){
		auxC = m[l1][j];
		m[l1][j]= m[l2][j];	
		m[l2][j] = auxC;
	}
	
	
	for( int i= 0; i<n; i++){
		for (int j= 0; j<n; j++){
		
			printf ("%d\t",m[i][j]);
		}
		printf("\n");
	}
	
	printf ("quais as colunas que vão permutar? de 0 a N\n");
	scanf(" %d%d",&c1,&c2);
	printf("\n");
	
	printf("COLUNAS: \n");
	for( int j= 0; j<n; j++){
		int t = ma[j][c1];
		ma[j][c1]= ma[j][c2];
		ma[j][c2] = t;
	}
	
	
	for( int i= 0; i<n; i++){
		for (int j= 0; j<n; j++){
			printf ("%d\t",ma[i][j]);
		}
		printf("\n");
	}
		
	
	return 0;
}

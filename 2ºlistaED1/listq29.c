#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Gere aleatoriamente uma matriz N x N de inteiros sorteados no intervalo entre X e Y (inclusive).
//Imprima-a em formato de tabela, e os valores que compõem a coluna que resulta na maior soma, e os valores da
//linha que resulta na menor soma.

int main(){
	
	srand(time(NULL));
	int n, x, y,i,j;
	i = 0;
	j = 0;
	
	printf("informe o valor de n:");
	scanf(" %d", &n);
	
	int m[n][n];
	
	printf("informe o valor de x e y\n");
	scanf(" %d%d", &x, &y);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			m[i][j] = x + rand()%(y-x+1);
			printf(" %d", m[i][j]);
		
		
		}
		printf("\n");
	
	
	}
	
	int soma, somal[n], somac[n], maiorc, menorl;
	soma = 0;
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j < n; j++){
			soma+=m[i][j];
		
		}
	
		somac[j] = soma;
	
	}
	
	//encontrando a linha do menor valor
	menorl = somal[0];
	for(int i = 1; i < n; i++){
		if(menorl > somal[i])
			menorl = somal[i];
	
	}
	
	//encontrando a coluna do maior valor
	maiorc = somac[0];
	for(int j= 1; j < n; j++){
		if(maiorc > somac[i])
			maiorc  = somac[i];
	
	}
	
	printf("valor da coluna maior: %d\n", maiorc);
	printf("valor da linha menor: %d\n", menorl);
	
	//imprimindo os valores da soma das linhas e colunas
	for(int i = 0; i < n; i++){
		printf("soma da linha %d: %d\n", i+1,somal[i]);
	
	}
	for(int i = 0; i < n; i++){
		printf("soma da coluna %d: %d\n", i+1,somac[i]);
	
	}
	

	 
	
  return 0;	
}


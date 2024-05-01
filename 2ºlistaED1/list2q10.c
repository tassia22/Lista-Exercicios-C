#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Faça um programa que sorteie aleatoriamente N números, no intervalo entre X e Y (inclusive). Após o sorteio, o
//programa deve imprimir os números sorteados originalmente. Após isso, e a cada iteração, o programa deve imprimir
//novamente a relação, mas agora trocando as posições do MAIOR elemento pelo MENOR elemento.
//Uma vez trocadas as posições, estes mesmos número não poderão ser mais trocados. Repita essa operação até
//quando for possível...

int main(){
	
	srand(time(NULL));
	
	int t, x, y;
	
	printf("digite o tamanho do vetor\n");
	scanf(" %d", &t);
	
	printf("digite o tamanho dos sorteios\n");
	scanf(" %d%d", &x, &y);
	
	int vet[t], foiTrocado[t];
	
	for(int i = 0; i < t; i++){
		vet[i] = x + rand()%(y-x+1);
		foiTrocado[i] = 0;
		printf("%02d-\n", vet[i]);
	
	}
	
	//processo das trocas
	int maior = 0, menor = 0;
	
	do{
		//procurando o menor valor
		for(int i = menor+1; i < t; i++){
			if(vet[menor] > vet[i] && (!foiTrocado[i]))
				menor = i;
		}
		
		//procurando o maior valor
		for(int i = maior+1; i < t; i++){
			if(vet[maior] < vet[i] && (!foiTrocado[i]))
				maior = i;
		}
		//trocando de lugar
		int aux = vet[menor];
		vet[menor] = vet[maior];
		vet[maior] = aux;
		foiTrocado[menor] = 1;
		foiTrocado[maior] = 1;
		
		//procurando indice para comparação
		menor = -1;
		
		for(int i = 0; i < t; i++)
			if(!foiTrocado[i]){
				menor = i;
				maior = i;
				break;
			
			}
		
	}while(menor >=0);
	
	printf("resultado\n");
	for(int i = 0; i < t; i++){
		printf("%02d-", vet[i]);
	
	}
		
	
	
	
  return 0;	
}


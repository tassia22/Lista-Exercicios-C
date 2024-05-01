#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
//componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm
//10 elementos cada. Imprimir todos os conjuntos.


int main(){

	float v[10], quadrado[10];

	for(int i = 0;i < 10;i++){
		printf("digite o conjunto de numeros reais:\n");
		scanf("%f",&v[i]);
    
		quadrado[i] = v[i]*v[i];
    
		printf("%.1f e o seu quadrado é: %.1f\n",v[i],quadrado[i]);
}
	
	



 return 0;
}

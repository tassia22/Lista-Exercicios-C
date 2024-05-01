#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//leia um numero inteiro  e verifique se é palindromo

int main(){
	
	 
	int normal, invertido, aux;
	printf("Digite o valor de N: ";
	scanf("%d", &normal);

/* Consistência de N (Não pode ser menor ou igual a zero) */
	while (normal <= 0) {
	printf("Por favor, digite um valor de N maior do que zero: ");
	scanf("%d", &normal);
	}

	invertido = 0; // Deve começar valendo zero, a ideia é construir o número a partir do resto da divisão do normal por 10
	aux = normal; // Como devemos comparar os valores normal e invertido, devemos preservar o valor normal e usar essa variável auxiliar para modificações

/* Construção do número invertido */
	while (aux > 0) {
	invertido = (invertido*10) + (aux % 10);
	aux = aux / 10;
	}

	printf("\nNumero normal: %d\nNumero invertido: %d\n", normal, invertido);

	if (normal == invertido) printf("Sao palindromos.\n\n");
	else printf("Nao sao palindromos.\n\n");
		
		
    return 0;
}

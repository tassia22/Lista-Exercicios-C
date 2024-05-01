#include <stdlib.h>
#include <stdio.h>

//Dado um país A, com ‘Pa’ número de habitantes e taxa de natalidade de X % ao ano, e um país B com ‘Pb’ número
//de habitantes e taxa de natalidade de Y % ao ano, faça um programa que leia o valor dessas variáveis e informe em
//quanto tempo o país com menor população irá superar o país de maior população, ou se isso nunca acontecerá.

int main()
{
	int a,b,an,paisMaior,paisMenor;
	an = 0;
	printf("informe a populacao do pais maior\n");
	scanf("%d",&paisMaior);
	
	printf("informe a taxa de natalidade anual do pais maior\n");
	scanf("%d",&a);
	
	printf("informe a populacao do pais menor 2\n");
	scanf("%d",&paisMenor);
	
	printf("informe a taxade natalidade anual do pais menor 2\n");
	scanf("%d",&b);
		
		while(paisMenor <= paisMaior){
		paisMaior = a + paisMaior;
		paisMenor = b + paisMenor;
		an = an +1;

	}
	
	
	
	
	printf(" o pais menor vai superar o maior em %d anos",an);
	
	
	
	
	
	


	
	return 0;
}

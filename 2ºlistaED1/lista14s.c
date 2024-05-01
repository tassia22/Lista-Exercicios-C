#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


//14. Faça um programa que leia em formato de string, o número de uma conta-corrente que possui 5 dígitos numéricos.
//(Não devem ser aceitos letras e/ou símbolos que não sejam numéricos). O quinto dígito é um DV (Dígito Verificador),
//que serve para verificar se a sequencia de dígitos informados atendem a uma regra específica que valida o número
//da conta. A regra para cálculo do DV é a seguinte: 1º dígito multiplicado por 3; 2º dígito por 5; 3º dígito por 7 e o 4º
//dígito por 9. O quinto dígito (DV) deverá ser o resto da divisão inteira da soma destes produtos por 10.
//O programa deverá informar se a seqüência informada corresponde ou não a um número de conta válido.


int main(){
	
	char str[5];
	
	printf("Informe o numero da conta corrente (somente numeros)\n");
	scanf( "%s", str);
	
	if(strlen(str) != 5){
		printf("digitos incompletos");
		return 0;
		}
	
	
	for(int i = 0; i < 5; i++)
		if(str[i]<'0' || str[i]>'4'){
			printf("contem símbolos inválidos!\n");
			return 0;
		}
	
	int dv1 = str[5]-'0';
	int mult = 0;
	
	
	for(int i = 0 < 5; i++;){
	mult*= (str[i]-'0')*(i+1);
	}

	if(mult%5 != dv1){
		printf("conta-corrente invalido\n");
		return 0;
		}
		
	printf("conta-corrente completa!");
	
 
}

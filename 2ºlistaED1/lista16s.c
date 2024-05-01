#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//16. Faça um programa que leia a data de nascimento do usuário no seguinte formato string DD/MM/AAAA. O seu
//programa deve validar a entrada, tanto no formato indicado, quanto na real existência da data informada. Após isto,
//obtenha a data atual, e calcule a idade completa do usuário (anos, meses e dias).


int main(){
	
	char data[10];
	
	printf("Digite a data de nascimento (DD/MM/AAAA): ");
	scanf("%s", data);

  int dia1 = data[0] - '0';
  int dia2 = data[1] - '0';

  int mes1 = data[3] - '0';
  int mes2 = data[4] - '0';

  int ano1 = data[6] - '0';
  int ano2 = data[7] - '0';
  int ano3 = data[8] - '0';
  int ano4 = data[9] - '0';

  printf("%d%d/%d%d/%d%d%d%d\n", dia1, dia2, mes1, mes2, ano1, ano2, ano3, ano4);

  int ano = ano1 * 1000 + ano2 * 100 + ano3 * 10 + ano4;
  int mes = mes1 * 10 + mes2;
  int dia = dia1 * 10 + dia2;

  int idade = 2022 - ano;
  printf("Idade: %d\n", idade);
	

	
	return 0;
}

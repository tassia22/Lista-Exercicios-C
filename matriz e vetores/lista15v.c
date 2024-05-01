#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//Faça um programa que calcule quantos segundos já se passaram no dia de hoje.

int main(){
	
	time_t horario = time(NULL);
	printf("%s",asctime(localtime(&horario)));
	
	char tempo[100];
	strcpy(tempo, asctime(localtime(&horario)));
	int hora, min, seg;

	hora = (tempo[11]-'0')*10+(tempo[12]-'0');
	
	min = (tempo[14]-'0')*10+(tempo[15]-'0');
	
	seg = (tempo[17]-'0')*10+(tempo[18]-'0');
	
	int segundosTotais = hora*3600 + min*60 + seg;
	
	printf("após %i:%i:%i temos %i segundos passados", hora,min,seg,segundosTotais);
	
	
	
	
		
  return 0;	
}


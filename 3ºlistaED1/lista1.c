#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Faça um programa em C que cria uma struct Horário, contendo informações de Horas, Minutos e
//Segundos. Utilizando a constante __TIME__ faça a alimentação de uma variável do tipo Horário.
//Imprima na tela a hora atual com base na struct preenchida.

typedef struct{
	
	int horas;
	int minutos;
	int segundos;
	
	
}Horario;


int main(){
	
	struct tm tempo;
	time_t tempoSeg;
	
	time(&tempoSeg);
	tempo = *localtime(&tempoSeg);
	
	Horario agora;
	
	agora.horas = tempo.tm_hour;
	agora.minutos = tempo.tm_min;
	agora.segundos = tempo.tm_sec;
	
	printf("são %02d:%02d:%02d horas.\n", agora.horas, agora.minutos, agora.segundos);
	
	
	return 0;
}

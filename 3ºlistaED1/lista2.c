
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Continue o desenvolvimento do Problema #01, agora fazendo com que o usuário também alimente um
//horário. Após isto, o programa deve preencher uma terceira variável do tipo Horário contendo a
//diferença entre a hora atual e a hora cadastrada pelo usuário. Imprima na tela o resultado do cálculo.
 

typedef struct {
	int horas;
	int minutos;
	int segundos;
		
}horario;
	
int main(){
	
	struct tm tempo;
	time_t tempoSeg;
	
	time(&tempoSeg);
	tempo = *localtime(&tempoSeg);
	
	horario agora;
	
	agora.horas = tempo.tm_hour;
	agora.minutos = tempo.tm_min;
	agora.segundos = tempo.tm_sec;
	
	printf("sao %02d:%02d:%02d horas\n",agora.horas,agora.minutos,agora.segundos);
	
int horas2,h,m,s,mh,mm,ms,Mh,Mm,Ms;
	
	printf("iforme as horas incluindo os segundo:\n");
	scanf(" %d",&horas2);
	
	s = horas2%100;
	
	m = (horas2/100)%100;
	
	h = horas2/10000;
	
	printf(" horas informada %d:%d:%d\n",h,m,s);
	
	
	if(h > agora.horas){
		Mh = h;
		mh = agora.horas;
		
	}
	else{
		Mh = agora.horas;
		mh = h;
	}
	if(m > agora.minutos){
		Mm = m;
		mm = agora.minutos;
	}
	else{
		Mm = agora.minutos;
		mm = m;
	}
	if(s > agora.segundos){
		Ms = s;
		ms = agora.segundos;
	}
	else{
		Ms = agora.segundos;
		ms = s;
	}
	
	printf(" subtracao da hora atual e informada: %d:%d:%d",Mh - mh,Mm - mm,Ms - ms);
	
	return 0;
	
	
}

#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct{
	
	int matricula;
	char nome[100];
	
}Aluno;

int main(){
	Aluno *a;
	
	a = malloc(sizeof(Aluno));
	scanf(" %d", &a->matricula);
	scanf(" %[^\n]s", a->nome);
	free(a);	


}

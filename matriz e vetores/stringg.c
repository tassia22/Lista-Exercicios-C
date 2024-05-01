#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Como você faz para copiar um string? 

int main(){
	
	char str1[12]; /*reserva espaço para 12 caracteres*/
	char str2[12]; /*reserva espaço para 12 caracteres*/

	printf("Seu string: ");
	gets(str1);

	/* copio o conteúdo de str1 para str2 */
	strcpy(str2,str1);

	printf("%s\n",str1);
	printf("%s\n",str2);
	
	//como concatenar dois strings, ou seja, como grudar um ao final do outro
	
	
	char str1[24]; /*reserva espaço para 24 caracteres*/
	char str2[12]; /*reserva espaço para 12 caracteres*/

	/* carrego o primeiro string */
	strcpy(str1,"oba oba");

	/* carrego o segundo string */
	strcpy(str2,"eba");

	/* concateno str2 ao final de str1 */
	strcat(str1, str2);

	printf("%s\n",str1);
	
	//E a saída é:

	oba obaeba
	
	//comparar dois strings? strcmp(s1,s2). Esta função retorna 0 se os strings forem iguais, 
	//um número < 0 se s1 < s2 e > 0 se s1 > s2. Vamos ver o uso:
	
	char str1[12]; /*reserva espaço para 12 caracteres*/
	char str2[12]; /*reserva espaço para 12 caracteres*/

	/* carrego o primeiro string */
	strcpy(str1,"oba oba");

	/* carrego o segundo string */
	strcpy(str2,"oba oba");

	if (!strcmp(str1,str2)) printf("iguais\n");
	else printf("diferentes\n");

	/* mudo o valor de str2 */
	strcpy(str2,"oba ");

	if (!strcmp(str1,str2)) printf("iguais\n");
	else printf("diferentes\n");

	/* vejo qual é maior (alfabeticamente) */
	if (strcmp(str1,str2)>0) printf("\"%s\" maior que \"%s\"\n",str1,str2);

	/* mudo o valor de str2 */
	strcpy(str2,"oba obb");

	/* vejo qual é menor (alfabeticamente) */
	if (strcmp(str1,str2)<0) printf("\"%s\" menor que \"%s\"\n",str1,str2);
	
	//Notou que a comparação se dá caracter a caracter? E a saída será:

	iguais
	diferentes
	"oba oba" maior que "oba "
	"oba oba" menor que "oba obb"
		
		
	//Mais do que isso, ele compara usando a tabela ascii, olhe este programa:
	
	char str2[12]; /*reserva espaço para 12 caracteres*/

	/* carrego o primeiro string */
	strcpy(str1,"oba oba");

	/* carrego o segundo string */
	strcpy(str2,"oba oba");

	printf("%d\n",strcmp("a","A"));
	printf("a = %d\n",'a');
	printf("A = %d\n",'A');
}
		

//Cuja saída é:

	32
	a = 97
	A = 65
		
	
 //Vamos ver um exemplo. Suponha que você receba um string contendo um nome, 
 //e queira ter certeza de que o nome possui iniciais maiúsculas. Como faria? 
// Uma solução seria:
  
  char nome[50];
	int i = 0; /*contador*/
	int pos_espaco = 1; /*indica se a letra veio após um espaço*/

	/* leio o nome */
	printf("nome: ");
	gets(nome);

	while (nome[i]!='\0') {
		/* se veio após um espaço, deixo maiúscula */
		if (pos_espaco) nome[i] = toupper(nome[i]);

		pos_espaco = nome[i] == ' ';

		i++;
	}

	/* mostro o string */
	printf("%s\n",nome);
	
	
  
  
  
  
  
  
  
  
  
  
  
  return 0;
}

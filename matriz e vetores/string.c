#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

///array � uma estrutura de dados que permite a agrega��o de um conjunto
///de variaveis de mesmo tipo, sendo referenciadas por um identificador comum.

///vetor == array unidimensional
/// int v[30];

///matriz == array multidimensional
///int m[10][10]

///string � qualquer sequencia de caracteres: nome, endere�o e etc.
///string � vetor do tipo char.

//string � um tipo de vetor
int main(){

    //em C toda string � armazenada como vetor do tipo char
    char nome[100];

    scanf("%[^\n]s", nome);
    //para ler strings nao precisa do & no scanf

    printf(" o nome lido foi: %s\n", nome);
    
    
    //strcpy(destino, origem): Copia o conte�do de uma string da origem para o destino
    //strcat(str1,str2): Concatena duas na primeira e n�o verifica o tamanho
    //strcmp(str1,str2): Verifica se duas strings s�o id�nticas (retorno 0)
    //Se str1 > str2 ent�o o retorno � positivo.
    //Se str2 > str1 ent�o o retorno � negativo.
    //strlen(string): Retorna o comprimento da string fornecida.
    //O caractere final (nulo) n�o � considerado.
    
    char nome1[100]
    char nome2[10]
    
     scanf("%[^\n]s", nome1);
     scanf("%[^\n]s", nome2);
     
     strcpyn (aux, nome1);
     strcpy (nome1, nome2);
     strcpy (nome2, aux);
     printf("%s %s", nome1, nome2);

    return 0;
}

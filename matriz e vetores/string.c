#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

///array é uma estrutura de dados que permite a agregação de um conjunto
///de variaveis de mesmo tipo, sendo referenciadas por um identificador comum.

///vetor == array unidimensional
/// int v[30];

///matriz == array multidimensional
///int m[10][10]

///string é qualquer sequencia de caracteres: nome, endereço e etc.
///string é vetor do tipo char.

//string é um tipo de vetor
int main(){

    //em C toda string é armazenada como vetor do tipo char
    char nome[100];

    scanf("%[^\n]s", nome);
    //para ler strings nao precisa do & no scanf

    printf(" o nome lido foi: %s\n", nome);
    
    
    //strcpy(destino, origem): Copia o conteúdo de uma string da origem para o destino
    //strcat(str1,str2): Concatena duas na primeira e não verifica o tamanho
    //strcmp(str1,str2): Verifica se duas strings são idênticas (retorno 0)
    //Se str1 > str2 então o retorno é positivo.
    //Se str2 > str1 então o retorno é negativo.
    //strlen(string): Retorna o comprimento da string fornecida.
    //O caractere final (nulo) não é considerado.
    
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

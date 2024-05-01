#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char letra[100];

  printf("Insira um texto: ");
  scanf("%s", letra);

  int tam = strlen(letra);
  int naoLetra = 0;

  for (int i = 0; i < tam; i++)
  {
   
    

    // 65 90
    if (!( letra >= 'a' && letra <= 'z') && !(letra >= 'A' && letra <= 'Z')){
      naoLetra = 1 ;
  }

  if (naoLetra)
    printf("Seu texto contém caracteres que não são letras!");
  else
    printf("Seu texto só contém letras!");

  return 0;
}

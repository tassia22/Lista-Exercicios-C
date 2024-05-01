#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdio.h>


int main(){

    char frase1[50];
    char frase2[50];
	int i = 0;
	
	

	scanf("%[^\n]s", frase1);
	
	while(frase1[i] != '\0'){
		//deixar maisculo
		frase2[i] = toupper(frase1[i]);
		i++;
		
		}
		
		
		
		scanf("%[^\n]s", frase2);
	
		while(frase2[i] != '\0'){
			//deixar menusculo
			frase2[i] = tolower(frase1[i]);
			i++;
		}
		
		
		printf("%s\n", frase1);
		printf("%s\n", frase2);


}
	
	
	
	


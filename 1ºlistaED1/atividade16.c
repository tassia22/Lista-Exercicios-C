#include <stdlib.h>
#include <stdio.h>

//Faça um programa que leia do usuário dois números X e Y tal que Y >= X. Faça com que o programa imprima todos
//os números primos existentes entre X e Y, inclusive.

int main(){
	int x,y;
        
        
        while(1){
        printf("digite x : ");
        scanf(" %d",&x);
        printf("digite y : ");
        scanf(" %d",&y);
        
        if(x<=y){
            break;
        }else{
        printf("\ny tem que ser maior que x\n\n");
        }
        }
        printf("\nnumeros primos entre %d e %d :\n",x,y);
       
        for(int m = x; m <= y; m++){
			 int d=0;
        
        for(int i = m; i > 0; i--){
            if((m%i)==0){
            d++;
            }
        }

        if(d < 3 && d!=1 && d!=0){
          printf("%d ",m);
        }
        
        }
	
	
	
	
	
	 return 0;
	}

#include <stdlib.h>
#include <stdio.h>

//Faça um programa que imprima na tela um triângulo equilátero formado por símbolos *.
//Este triângulo deve ter altura de N linhas (N >= 2 e deve ser informado pelo usuário no início da execução).




int main()
{
    
    int num = 0;
    
		while(1){
		printf("quantidade de linha\n ");
		scanf(" %d",&num);
   
		if(num >=2 && num<=40){
		}else{
			printf("o valor deve ser maior que 1 e menor que 41 \n");
    }
    }
		int r=num,c=0,p=0;
			for(int i=0; i<num; i++){
		while (1){
			p++;
            if(p<r){
            printf(" ");
            }else{
                for(int t=0; t<=c; t++){
                    printf("*");
            }
            printf("\n");
            c+=2;
            p=0;
            break;
        }
    }
    r--;
    }



    return 0;
}

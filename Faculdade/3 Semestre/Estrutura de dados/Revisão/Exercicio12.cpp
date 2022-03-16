/*
12) Escrever um programa que incremente uma variável iniciando em 0 e terminando
em 200. A cada passagem pela variável, se o valor for par, este deverá ser
 acumulado em uma variável e, se for impar, acumulado em outra.
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    int i, par = 0, impar = 0;
    // processamento saida
    for(i=0;i<=200;i++){
        if(i%2==0){
            par+=i;
        }else{
            impar+=i;
        }
    }
    printf("\nO valor total de par e %i\n",par);
    printf("\nE o valor total de impar e %i\n",impar);  
    return 0;
}

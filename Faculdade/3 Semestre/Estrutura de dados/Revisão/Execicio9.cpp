/*
9)  Escrever um programa que calcule o fatorial de um n�mero.
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    // vari�veis
    int fat, i, r=1;
    // entrada
    printf("Digite o numero do fatorial: ");
    scanf("%i",&fat);
    fflush(stdin);
    // processamento
    for(i=fat;i>1;i--){
        r*=i;
    }
    // saida 
    printf("O fatoria e %i",r);
    return 0;
}

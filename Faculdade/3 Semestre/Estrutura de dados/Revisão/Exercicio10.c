/*
10) Elaborar um programa que mostre os 10 primeiros termos da s�rie de Fibonacci.
Esta s�rie � definida pela seguinte regra: A partir do terceiro elemento, cada 
termo � a soma dos dois anteriores.
1  2  3  5  8  13  ...
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // vari�veis
    int ant = 1, atu = 1, pro, i;
    // procesamento com saida
    for(i=1;i<=10;i++){
        printf("%i, ",atu);
        pro=ant+atu;
        ant=atu;
        atu=pro;
    }
    return 0;
}

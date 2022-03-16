/*
10) Elaborar um programa que mostre os 10 primeiros termos da série de Fibonacci.
Esta série é definida pela seguinte regra: A partir do terceiro elemento, cada 
termo é a soma dos dois anteriores.
1  2  3  5  8  13  ...
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
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

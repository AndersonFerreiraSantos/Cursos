/*
3. Construa um programa que imprime a serie do fibonacci, sabendo que ela é 1, 1, 2, 3, 5, 8, 13, ...
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    int i, anterior=0, atual=1, aux;
    for(i=1;i<=8;i++){
        printf("%i ",atual);
        aux=anterior;
        anterior=atual;
        atual=aux+atual;
    }
    return 0;
}

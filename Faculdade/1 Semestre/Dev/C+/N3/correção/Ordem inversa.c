/*
5. Construa um algoritmo que leia um vetor de 15 palavras e mostre-os na ordem inversa.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    char palavras[15][30];
    int i;
    // entrada
    for(i=0;i<15;i++){
        printf("Digite %i palavra: ",i+1);
        gets(palavras[i]);
        fflush(stdin);
    }
    // saída
    for(i=14;i>=0;i--){
        printf("%s\n",palavras[i]);
    }
    return 0;
}

/*
3. Construa  um  algoritmo  que  leia  um  vetor  de  10  n�meros  reais  e  mostre-os  na ordem inversa.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // vari�veis
    float vetor[10];
    int i;
    // entrada
    for(i=0;i<10;i++){
        printf("Digite %i numero: ",i+1);
        scanf("%f",&vetor[i]);
        fflush(stdin);
    }
    // sa�da 
    for(i=9;i>=0;i--){
        printf("%f, ",vetor[i]);
    }
    return 0;
}

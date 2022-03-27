/*
10. Construa  um  algoritmo  que  leia  um  vetor  de  20  elementos  e  
coloque-os em ordem crescente.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    int vetor[20], aux, i, j;
    // entrada
    for(i=0;i<20;i++){
        printf("Digite o %i valor: ",i+1);
        scanf("%i",&vetor[i]);
        fflush(stdin);
    }
    // prossamento
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            if(vetor[i]<vetor[j]){
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }
    // saída
    for(i=0;i<20;i++){
        printf("%i, ",vetor[i]);
    }
    return 0;
}

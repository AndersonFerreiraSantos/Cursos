#include <stdio.h>
#include <stdlib.h>
#define TAM 5
// prototipo
void ordenacao(int v[]);
void imprimir(int v[]);
void entrada(int v[]);
int main (void){
    // variáveis
    int vetor[TAM];
    entrada(vetor);
    ordenacao(vetor);
    imprimir(vetor);
    return 0;
}
//funcação ordenação
void ordenacao(int v[]){
    int i, j, aux;
    // prossamento
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            if(v[i]<v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}
void imprimir(int v[]){
    // saída
    int i;
    for(i=0;i<TAM;i++){
        printf("%i, ",v[i]);
    }
}
void entrada(int v[]){
        // entrada
    int i;
    for(i=0;i<TAM;i++){
        printf("Digite o %i valor: ",i+1);
        scanf("%i",&v[i]);
        fflush(stdin);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

 

int bomb=1,linha,coluna;
int matriz_inicio [10][10];

 

void popula_matriz_inicio(){
    int linha,coluna;
    for(linha=0;linha<=10;linha++){
        for(coluna=0;coluna<=10;coluna++){
            matriz_inicio[linha][coluna]=0;
        }
    }
    
}

 

int imprime_matriz_inicio(){
    int linha,coluna;
    for(linha=0;linha<=10;linha++){
        for(coluna=0;coluna<=10;coluna++){
            printf("%d   ",matriz_inicio[linha][coluna]);
        }
        printf("\n");
    }
}

 

int main(void){
        
    imprime_matriz_inicio();
    
    
}

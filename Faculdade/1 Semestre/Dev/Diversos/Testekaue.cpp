#include <stdio.h>
#include <stdlib.h>

int main (void){
    
    char nome[]="kaue", aux;
    int i, j;
    
    
    
    for(i=0; i<=3; i++){
        for(j=0; j<=3; j++){
            if(nome[i] < nome[j]){
                aux=nome[i];
                nome[i] = nome[j];
                nome[j] = aux;
            }                    
        }
    }
    
    puts(nome);
    return 0;
}

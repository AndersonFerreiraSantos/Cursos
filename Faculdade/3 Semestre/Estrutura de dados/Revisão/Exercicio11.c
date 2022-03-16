/*
11) Crie um programa que incremente uma variável inteira iniciando em 0 e
 terminando em 50, mostrando os valores múltiplos de 8, o número da ocorrência em
  cada exibição e quantas vezes o múltiplo ocorreu.
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    int i, cont=0;;
    // processamento saida
    for(i=0;i<=50;i++){
        if(i%8==0){
            printf("%i, ",i);
            cont++;
        }
    }
    printf("\nO numero de ocorrencia e %i\n",cont);
    return 0;
}

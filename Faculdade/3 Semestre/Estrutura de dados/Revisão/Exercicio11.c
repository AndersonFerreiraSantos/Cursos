/*
11) Crie um programa que incremente uma vari�vel inteira iniciando em 0 e
 terminando em 50, mostrando os valores m�ltiplos de 8, o n�mero da ocorr�ncia em
  cada exibi��o e quantas vezes o m�ltiplo ocorreu.
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // vari�veis
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

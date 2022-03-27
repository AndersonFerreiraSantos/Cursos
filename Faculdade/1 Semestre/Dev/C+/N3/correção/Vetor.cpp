#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    float numeros[5], soma, multiplicacao;
    int i;
    // entrada
    for(i=0;i<5;i++){
        printf("Digite %i numero: ",i+1);
        scanf("%f",&numeros[i]);
        fflush(stdin);
    }
    // processamento
    soma=0;
    multiplicacao=1;
    for(i=0;i<5;i++){
        soma+=numeros[i];
        multiplicacao*=numeros[i];
    }
    // saída
    printf("A soma dos numeros e %f\n",soma);
    printf("A multiplicacao dos numeros e %f\n",multiplicacao);
    printf("O numeros sao: ");
    for(i=0;i<5;i++){
        printf("%f, ",numeros[i]);
    }
    return 0;
}

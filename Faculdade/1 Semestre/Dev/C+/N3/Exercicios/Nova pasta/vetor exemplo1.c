#include <stdio.h>
#include <stdlib.h>
int main (void){
	
    // variáveis
    int vetor[10], soma, i;
    // entrada
    for(i=0;i<=9;i++){
        printf("Digite %i numero: ",i+1);
        scanf("%i",&vetor[i]);
        fflush(stdin);
    }
    // processamento
    soma=0;
    for(i=0;i<=9;i++){
        soma+=vetor[i];
    }
    // saída
    printf("Os numero sao: ");
    for(i=0;i<=9;i++){
        printf("%i, ",vetor[i]);
    }
    printf("\nA soma dos numeros e %i",soma);
    return 0;
}

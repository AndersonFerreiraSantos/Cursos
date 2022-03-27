#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    int vetor[5], soma, multiplicacao, i;
    // entrada
    for(i=0;i<=4;i++){
        printf("Digite %i numero: ",i+1);
        scanf("%i",&vetor[i]);
        fflush(stdin);
    }
    // processamento
    soma=0;
    multiplicacao=1;
    
    for(i=0;i<=4;i++){
        soma+=vetor[i];
        multiplicacao*=vetor[i];
    }
  

  
    }
    printf("\nA soma dos numeros e %i, a multiplicação e %i",soma, multiplicacao);
    
    return 0;
}

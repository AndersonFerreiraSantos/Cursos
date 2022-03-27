#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    int matriz[3][3], a, linha, coluna;
    // entrada
    for (linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            printf("Digite o valor (%i,%i): ",linha, coluna);
            scanf("%i",&matriz[linha][coluna]);
            fflush(stdin);
        }
    }
    printf("Digite o valor de A: ");
    scanf("%i",&a);
    // processamento
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            matriz[linha][coluna]+=a;
        }
    }
    // saída
    printf("O valor da matriz e: \n");
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            printf("%i\t",matriz[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}

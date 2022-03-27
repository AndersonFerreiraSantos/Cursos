#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    int a[3][3], b[3][3], r[3][3], i, j;
    // entrada de dados
    printf("Digite os valores da matriz A: \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor (%i,%i): ",i,j);
            scanf("%i",&a[i][j]);
            fflush(stdin);
        }
    }
    printf("\nDigite os valores da matriz B: \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor (%i,%i): ",i,j);
            scanf("%i",&b[i][j]);
            fflush(stdin);
        }
    }
    // processamento
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            r[i][j]=a[i][j]+b[i][j];
        }
    }
    // saída de dados
    printf("\nO valor da matriz R e:\n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%i\t",r[i][j]);
        }
        printf("\n");
    }
    return 0;
}

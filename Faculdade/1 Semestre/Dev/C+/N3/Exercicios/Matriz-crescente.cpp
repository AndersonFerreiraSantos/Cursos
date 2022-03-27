/*
8. Construa  um  algoritmo  que  leia  uma  matriz quadrada  de  ordem  3.  
Leia  uma constante  K, diminuia  diagonal  principal  por  esta  constante  e  
imprima  a  matriz resultante.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    int matriz[4][3], k, i, j;
    // entrada
    printf("Dados da matriz: \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor (%i,%i): ",i,j);
            scanf("%i",&matriz[i][j]);
            fflush(stdin);
        }
    }
    printf("Digite o valor de K: ");
    scanf("%i",&k);
    fflush(stdin);
    // processamento
    for(i=0;i<3;i++){
        matriz[i][i]-=k;
    }
    // saída
    printf("\nMatriz resultante: \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%i\t",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

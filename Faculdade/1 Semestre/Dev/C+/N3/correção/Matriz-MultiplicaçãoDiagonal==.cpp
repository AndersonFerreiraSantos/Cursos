/*
9. Construa  um  algoritmo  que  leia  uma  matriz  quadrada  de  ordem  4.  
Leia  uma constante K, multiplique a diagonal principal por esta constante e 
imprima a matriz multiplicada.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    int mat[4][4], k, i, j;
    // entrada
    printf("Dados da matriz: \n\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite os valores (%i,%i): ",i, j);
            scanf("%i",&mat[i][j]);
            fflush(stdin);
        }
    }
    printf("\nDigite o valor para K: ");
    scanf("%i",&k);
    fflush(stdin);
    // processamento
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==j){
                mat[i][j]*=k;
            }
        }
    }
    // saída
    printf("\nDados da matriz multiplicada: \n\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%i\t",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

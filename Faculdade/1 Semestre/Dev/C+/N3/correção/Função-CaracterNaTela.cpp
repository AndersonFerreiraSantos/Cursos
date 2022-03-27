/*
2. Faça  uma  função  que  desenhe  linhas  de  caracteres  na  tela,  
a  função receberá como argumento o tipo de caractere e o número de linhas que deverá imprimir.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
// prototipo da função
void imprimir(char c, int n);
int main (void){
    // variáveis
    char caracter;
    int numero;
    // entrada
    printf("Digite o caracter desejado: ");
    scanf("%c",&caracter);
    fflush(stdin);
    printf("Digite a quantidade de linhas: ");
    scanf("%i",&numero);
    fflush(stdin);
    // saída 
    imprimir(caracter,numero);
    return 0;
}
void imprimir(char c, int n){
    // variáveis locais
    int i, j;
    // processamento
    for(i=1;i<=n;i++){
        for(j=1;j<=79;j++){
            printf("%c",c);
        }
        printf("\n");
    }
}

/*
2. Fa�a  uma  fun��o  que  desenhe  linhas  de  caracteres  na  tela,  
a  fun��o receber� como argumento o tipo de caractere e o n�mero de linhas que dever� imprimir.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
// prototipo da fun��o
void imprimir(char c, int n);
int main (void){
    // vari�veis
    char caracter;
    int numero;
    // entrada
    printf("Digite o caracter desejado: ");
    scanf("%c",&caracter);
    fflush(stdin);
    printf("Digite a quantidade de linhas: ");
    scanf("%i",&numero);
    fflush(stdin);
    // sa�da 
    imprimir(caracter,numero);
    return 0;
}
void imprimir(char c, int n){
    // vari�veis locais
    int i, j;
    // processamento
    for(i=1;i<=n;i++){
        for(j=1;j<=79;j++){
            printf("%c",c);
        }
        printf("\n");
    }
}

/*
7. Fa�a um programa que gere a tabuada de 1 a 10 de 
qualquer n�mero. O usu�rio deve informar de qual n�mero 
deseja ver a tabuada.
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
    // vari�veis
    int numero, cont;
    char opcao;
    do{
        system("cls");
        // Entrada de dados
        printf("Digite um numero: ");
        scanf("%i",&numero);
        fflush(stdin);
        // Sa�da de dados
        for(cont=1;cont<=10;cont++){
            printf("%i x %i = %i\n",cont,numero,cont*numero);
        }
        printf("\nDeseja outra tabuada (s/n): ");
        scanf("%c",&opcao);
        fflush(stdin);
    }while (opcao=='s');
    return 0;
}

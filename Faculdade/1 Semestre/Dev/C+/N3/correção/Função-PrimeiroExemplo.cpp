#include <stdio.h>
#include <stdlib.h>
// prototipo de função
void funcao1 (void);
int funcao2(int a, int b);
int main (void){
    // variáveis
    int n1, n2;
    funcao1();
    // entrada 
    printf("Digite n1: ");
    scanf("%i",&n1);
    fflush(stdin);
    printf("Digite n2: ");
    scanf("%i",&n2);
    fflush(stdin);
    // saida 
    printf("O valor e %i\n",funcao2(n1,n2));
    return 0;
}
// função 1
void funcao1(void){
    system("cls");
    system("color 70");
}
// funcao 2
int funcao2(int a, int b){
    // variável local
    int r;
    // processsamento
    r=a+b;
    // saida
    return r;
}

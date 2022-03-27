/*
8. Construa um programa que contém duas variáveis inteiras, e cada uma destas
variáveis deverá ter um valor atribuído nelas, através de uma entrada de dado
do usuário. Também elaborem no mesmo programa três funções, que deveram usar
o conceito de ponteiro para manipular a passagem dos dados para as funções.
As funções deverão ter as seguintes funcionalidades: a soma das duas variáveis,
a diferença entre as duas variáveis e a multiplicação das duas variáveis.
*/

#include <stdio.h>
#include <stdlib.h>



// protoripo da função
void soma_funcao(int *a, int *b, int *soma);

void subtracao_funcao(int *a, int *b, int *subtracao);

void multiplicacao_funcao(int *a, int *b, int *multiplicacao);

int main(void){
// variáves
int n1, n2, r1, r2, r3;

// entrada de dados

printf("Digite o valor N1: ");
scanf("%i",&n1);

//ele funciona apenas para corrigir erro de caracter, nesse caso é inteiro, n precisa.
fflush(stdin);

printf("Digite o valor N2: ");
scanf("%i",&n2);
fflush(stdin);

// processamento
soma_funcao(&n1,&n2,&r1);
subtracao_funcao(&n1,&n2,&r2);
multiplicacao_funcao(&n1,&n2,&r3);

// saída de dados
printf("A soma e %i\n",r1);
printf("A subtracao e %i\n",r2);
printf("A multiplicacao e %i\n",r3);
return 0;
}
// função soma
void soma_funcao(int *a, int *b, int *soma){
*soma=*a+*b;
}

// função subtracao
void subtracao_funcao(int *a, int *b, int *subtracao){
*subtracao=*a-*b;
}

// função multiplicacao
void multiplicacao_funcao(int *a, int *b, int *multiplicacao){
*multiplicacao=(*a)*(*b);

}

/*
8. Construa um programa que cont�m duas vari�veis inteiras, e cada uma destas
vari�veis dever� ter um valor atribu�do nelas, atrav�s de uma entrada de dado
do usu�rio. Tamb�m elaborem no mesmo programa tr�s fun��es, que deveram usar
o conceito de ponteiro para manipular a passagem dos dados para as fun��es.
As fun��es dever�o ter as seguintes funcionalidades: a soma das duas vari�veis,
a diferen�a entre as duas vari�veis e a multiplica��o das duas vari�veis.
*/

#include <stdio.h>
#include <stdlib.h>



// protoripo da fun��o
void soma_funcao(int *a, int *b, int *soma);

void subtracao_funcao(int *a, int *b, int *subtracao);

void multiplicacao_funcao(int *a, int *b, int *multiplicacao);

int main(void){
// vari�ves
int n1, n2, r1, r2, r3;

// entrada de dados

printf("Digite o valor N1: ");
scanf("%i",&n1);

//ele funciona apenas para corrigir erro de caracter, nesse caso � inteiro, n precisa.
fflush(stdin);

printf("Digite o valor N2: ");
scanf("%i",&n2);
fflush(stdin);

// processamento
soma_funcao(&n1,&n2,&r1);
subtracao_funcao(&n1,&n2,&r2);
multiplicacao_funcao(&n1,&n2,&r3);

// sa�da de dados
printf("A soma e %i\n",r1);
printf("A subtracao e %i\n",r2);
printf("A multiplicacao e %i\n",r3);
return 0;
}
// fun��o soma
void soma_funcao(int *a, int *b, int *soma){
*soma=*a+*b;
}

// fun��o subtracao
void subtracao_funcao(int *a, int *b, int *subtracao){
*subtracao=*a-*b;
}

// fun��o multiplicacao
void multiplicacao_funcao(int *a, int *b, int *multiplicacao){
*multiplicacao=(*a)*(*b);

}

/* Construa um algoritmo que selecione duas op��es m ou f e imprima em tela masculino ou feminino */
#include <stdio.h>
#include <stdlib.h>



int main(void){
// vari�veis
char opcao;

// entrada de dados
printf("Digite uma opcao (m/f): ");
scanf("%c",&opcao);
fflush(stdin);

// processamento e sa�da de dados
switch(opcao){
case 'm':
printf("masculino");
break;
case 'f':
printf("feminino");
break;
default:
printf("Erro, opcao invalida!");
break;
}

return 0;
}

/* Construa um algoritmo que selecione duas opções m ou f e imprima em tela masculino ou feminino */
#include <stdio.h>
#include <stdlib.h>



int main(void){
// variáveis
char opcao;

// entrada de dados
printf("Digite uma opcao (m/f): ");
scanf("%c",&opcao);
fflush(stdin);

// processamento e saída de dados
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

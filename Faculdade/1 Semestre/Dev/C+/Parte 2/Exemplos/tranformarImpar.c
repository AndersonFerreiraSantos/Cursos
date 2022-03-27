4) Faça um programa que peça um número e se este número for par, transforme-o em ímpar e vice-versa.
R.:
*/



#include <stdio.h>
#include <stdlib.h>



int main(void){
// variaveis
int numero;

// entrada de dados
printf("Digite um numero:");
scanf("%i",&numero);
fflush(stdin);

// processo e saída de dados
if(numero % 2 == 0){
printf("Numero e par e o novo numero e %i\n",numero+1);
}else{
printf("Numero e impar e o novo numero e %i\n",numero+1);
}

return 0;
}

4) Fa�a um programa que pe�a um n�mero e se este n�mero for par, transforme-o em �mpar e vice-versa.
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

// processo e sa�da de dados
if(numero % 2 == 0){
printf("Numero e par e o novo numero e %i\n",numero+1);
}else{
printf("Numero e impar e o novo numero e %i\n",numero+1);
}

return 0;
}

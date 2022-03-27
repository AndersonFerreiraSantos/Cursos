/*
12) Faça um programa que leia um número e exiba o dia correspondente da semana.
(1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.
R.:
*/
#include <stdio.h>
#include <stdlib.h>



int main (void){
// variáveis
int n;

// entrada de dados
printf("Digite o numero: ");
scanf("%i",&n);
fflush(stdin);

// processo // saída de dados
if(n==1){
printf("1 - domingo\n");
}else if(n==2){
printf("2 - segunda\n");
}else if(n==3){
printf("3 - terca\n");
}else if(n==4){
printf("4 - quarta\n");
}else if(n==5){
printf("5 - quinta\n");
}else if(n==6){
printf("6 - sexta\n");
}else if(n==7){
printf("7 - sabado\n");
}else{
printf("valor invalido.\n");
}

return 0;
}

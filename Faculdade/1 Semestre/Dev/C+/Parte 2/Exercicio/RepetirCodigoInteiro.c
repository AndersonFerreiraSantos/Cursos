/*
1. Fa�a um programa que pe�a dois n�meros inteiros e gere os n�meros
inteiros que est�o no intervalo entre eles.
*/
#include <stdio.h>
#include <stdlib.h>



int main (void){
// vari�veis?
int n1, n2, n;
char opcao;

do{
system("cls");
// entradas de dados?
printf("Digite o 1 numero: ");
scanf("%i",&n1);
fflush(stdin);
printf("Digite o 2 numero: ");
scanf("%i",&n2);
fflush(stdin);

// sa�da de dados?
if(n1<n2){
for(n=n1+1;n<n2;n++){
printf("%i, ",n);
}
}else{
for(n=n1-1;n>n2;n--){
printf("%i, ",n);
}
}
printf("\n\nDeseja sair(s/n): ");
scanf("%c",&opcao);
fflush(stdin);
}while(opcao!='s');


return 0;
}

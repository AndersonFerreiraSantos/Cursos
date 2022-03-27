/*
10) Faça um programa que implemente uma calculadora simples. O programa deve
solicitar os operandos e o operador e mostrar a entrada e o resultado. Inclua
verificadores de erro para operadores inválidos e tentativa de divisão por zero.
O menu será como segue:
[ 1 ] – Adição
[ 2 ] – Subtração
[ 3 ] – Multiplicação
[ 4 ] – Divisão
[ 5 ] – Fim
*/
#include <stdio.h>
#include <stdlib.h>



int main (void){
// variáveis
float n1, n2;
int op;
int i=1;
// entrada de dados
printf("[ 1 ] - Adicao\n");
printf("[ 2 ] - Subtracao\n");
printf("[ 3 ] - Multiplicacao\n");
printf("[ 4 ] - Divisao\n");
printf("[ 5 ] - Fim\n");
printf("Digite uma opcao: ");
scanf("%i",&op);
fflush(stdin);

// processamento

do{
i++;
if (op==5){
printf("Saindo...\n");
}else{
printf("Digite o 1 numero: ");
scanf("%f",&n1);
fflush(stdin);
printf("Digite o 2 numero: ");
scanf("%f",&n2);
fflush(stdin);
switch(op){
case 1:
printf("%f + %f = %f\n",n1,n2,n1+n2);
break;
case 2:
printf("%f - %f = %f\n",n1,n2,n1-n2);
break;
case 3:
printf("%f x %f = %f\n",n1,n2,n1*n2);
break;
case 4:
if(n2 != 0){
printf("%f \xF6 %f = %f\n",n1,n2,n1/n2);
}else{
printf("ERRO, divisao por zero.\n");
}
break;
default:
printf("ERRO, operador invalido.\n");
}
}

return 0;
}while(i!=10);

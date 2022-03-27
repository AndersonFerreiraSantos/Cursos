/*
6. Faça um programa que calcule o valor total investido e o custo médio
por CD. O usuário deverá informar a quantidade de CDs e o valor para em
cada um.
*/
#include <stdio.h>
#include <stdlib.h>



int main (void){
// variáveis?
int qtd_cd, i;
float total_cd=0, valor_cd, valor_medio;

// entrada de dados?
printf("Digite a quantidade de CDs vendidos: ");
scanf("%i",&qtd_cd);
fflush(stdin);
for(i=1;i<=qtd_cd;i++){
printf("Valor do CD(%i): ",i);
scanf("%f",&valor_cd);
fflush(stdin);
total_cd+=valor_cd;
}

// processamento
valor_medio=total_cd/qtd_cd;

printf("Valor total dos CDs R$ %.2f\n",total_cd);
printf("Valor medio dos CDs R$ %.2f\n",valor_medio);

return 0;
}

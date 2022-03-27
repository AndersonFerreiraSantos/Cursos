/*
2. Faça um programa que peça dois números inteiros e gere os números
pares que estão no intervalo entre eles.
*/



#include <stdio.h>
#include <stdlib.h>



int main (void){
// variáveis?
int numero1, numero2, i;

// entrada de dados
printf("Digite 1 numero: ");
scanf("%i",&numero1);
fflush(stdin);
printf("Digite 2 numero: ");
scanf("%i",&numero2);
fflush(stdin);



// saída de dados
if(numero1 < numero2){
for(i=numero1+1;i<numero2;i++){
if(i%2 == 0){
printf("%i, ",i);
}
}
}else{
for(i=numero2+1;i<numero1;i++){
if(i%2 == 0){
printf("%i, ",i);
}
}
}

return 0;
}

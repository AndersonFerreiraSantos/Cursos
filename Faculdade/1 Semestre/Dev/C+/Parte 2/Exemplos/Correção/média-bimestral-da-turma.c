#include <stdio.h>
#include <stdlib.h>



int main (void){

float nota, soma=0, media;
int quantidade = 4, i;


printf("Digite a quantidade de notas: ");
scanf("%i",&quantidade);
fflush(stdin);

for(i=1;i<=quantidade;i++){
printf("Digite a %i nota: ",i);
scanf("%f",&nota);
fflush(stdin);
soma=soma+nota;
}


media=soma/quantidade;


printf("A media e %.2f",media);

return 0;
}

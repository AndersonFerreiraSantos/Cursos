/*
7) Fa�a um programa que verifique se uma letra digitada � vogal ou consoante.
R.:
*/
#include <stdio.h>
#include <stdlib.h>



int main(void){
// vari�veis?
char letra;

// entrada de dados?
printf("Digite um letra: ");
scanf("%c",&letra);
fflush(stdin);
letra++;

// processamento
if((letra>='a' && letra<='z') || (letra>='A' && letra<='Z')){
if(letra>='A' && letra<='Z'){
letra=letra+('a'-'A');
}
if(letra=='a' || letra=='e' ||letra=='i' ||letra=='o' || letra=='u'){
printf("vogal\n");
}else{
printf("consoante\n");
}
}else{
printf("ERRO, nao foi digitado uma letra.\n");
}

return 0;
}

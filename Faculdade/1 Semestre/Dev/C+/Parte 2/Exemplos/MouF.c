/*
6) Fa�a um programa que verifique se a letra digitada for: F ou M e imprima uma mensagem:
masculino, feminino ou sexo inv�lido.
*/



#include <stdio.h>
#include <stdlib.h>



int main(void){
// vari�veis?
char sexo;

// entrada de dados?
printf("Digite uma letra (f/m): ");
scanf("%c",&sexo);
fflush(stdin);

// conveter maiusculo para minusculo
if(sexo >= 'A' && sexo <= 'Z'){
sexo=sexo+('a'-'A');
printf("\n\nsexo = %c\n\n",sexo);
}

// processamento? sa�da de dados?
switch(sexo){
case 'f':
printf("feminino\n");
break;
case 'm':
printf("masculino\n");
break;
default:
printf("sexo invalido");
}

return 0;
}

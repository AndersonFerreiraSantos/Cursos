/*
11) Fa�a um programa que pergunte em que turno voc� estuda.
Pe�a para digitar Mmatutino ou V-Vespertino ou N-Noturno.
Imprima a mensagem Bom Dia!, Boa Tarde! ou Boa Noite! ou Valor Inv�lido!,
conforme o caso.
R.:
*/
#include <stdio.h>
#include <stdlib.h>



int main (void){
// vari�veis
char turno;

// entrada de dados
printf("Digite o turno que voce estuda (M-Matutino \\ V-Vespertino \\ N-Noturno): ");
scanf("%c",&turno);
fflush(stdin);

// saida de dados
switch(turno){
case 'm':
case 'M':
printf("Bom dia\n");
break;
case 'v':
case 'V':
printf("Boa tarde\n");
break;
case 'n':
case 'N':
printf("Boa noite\n");
break;
default:
printf("Valor invalido\n");
}

return 0;
}

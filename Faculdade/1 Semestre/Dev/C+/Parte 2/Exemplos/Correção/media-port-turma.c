/*
5. Fa�a um programa que calcule o n�mero m�dio de alunos por turma.
Para isto, pe�a a quantidade de turmas e a quantidade de alunos para cada turma.
As turmas n�o podem ter mais de 40 alunos.
*/
#include <stdio.h>
#include <stdlib.h>



int main (void){
// vari�veis
int qtd_turmas, qtd_alunos, soma=0, i=1;
float media;

// entrada de dados
printf("Digite a quantidade de turmas: ");
scanf("%i",&qtd_turmas);
fflush(stdin);
while(i<=qtd_turmas){
printf("Digite a quantidade de alunos da turma %i: ",i);
scanf("%i",&qtd_alunos);
fflush(stdin);
if(qtd_alunos<=40){
soma=soma+qtd_alunos;
i++;
}else{
printf("Erro, nao pode ter turmas maior que 40 alunos!\n");
}
}

// processamento
media=(float)soma/qtd_turmas;

// sa�da de dados
printf("A media e %f\n",media);
return 0;
}

/*
13) Faça um programa que leia a idade de quatro alunos e apresente a mensagem
conforme instruções:
a) Se a média de idade dos alunos é inferior de 25, apresentar a mensagem "Turma
Jovem";
b) Se a média de idade dos alunos é entre 25 e 40, apresentar a mensagem "Turma
Adulta";
c) Se a média de idade dos alunos é acima de 40 anos, apresentar a mensagem
"Turma Idosa".
*/
#include <stdio.h>
#include <stdlib.h>



int main (void){
// variáveis?
int idade1, idade2, idade3, idade4;
float media;

// entrada de dados?
printf("Digite a idade do 1 aluno: ");
scanf("%i",&idade1);
fflush(stdin);
printf("Digite a idade do 2 aluno: ");
scanf("%i",&idade2);
fflush(stdin);
printf("Digite a idade do 3 aluno: ");
scanf("%i",&idade3);
fflush(stdin);
printf("Digite a idade do 4 aluno: ");
scanf("%i",&idade4);
fflush(stdin);

// processamento
media=(float)(idade1+idade2+idade3+idade4)/4;

// saída de dados
if (media<25){
printf("Turma Jovem\n");
}else if(media>=25 && media <=40){
printf("Turma Adulta\n");
}else{
printf("Turma Idosa\n");
}



return 0;
}

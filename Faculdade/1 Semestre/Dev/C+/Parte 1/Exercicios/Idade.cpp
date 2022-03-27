#include <stdio.h>
#include <stdlib.h>
int main (void){
char nome[50];
int idade, ano;

	printf("Qual seu nome?:  ");
	gets(nome);
	fflush(stdin);
	
	printf("sua idade?:  ");
	scanf("%i",&idade);
	fflush(stdin);
	
	
	ano=2021 - idade;
	
	printf("seu nome %s nasceu %i", nome, ano);
}


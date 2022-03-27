#include <stdio.h>
#include <stdlib.h>
int main (void){

int idade, nome, ano;

	printf("Qual seu nome?:  ");
	scanf("%s",&nome);
	fflush(stdin);
	
	printf("Qual sua idade?:  ");
	scanf("%i",&idade);
	fflush(stdin);
	
	
	ano=2021 - idade;
	
	printf("%i",ano, nome);
}


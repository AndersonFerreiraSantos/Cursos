/*
Como entrada de dados: pergunte o nome e o ano que nasceu. 
Como sa�da de dados: informar o nome e a idade
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	// Quais s�o as vari�veis?
	char nome[50];
	int ano, idade;
	
	// Quais s�o as entrada de dados?
	printf("Qual e seu nome? ");
	gets(nome);
	fflush(stdin);
	printf("Qual e o ano que voce nasceu? ");
	scanf("%i",&ano);
	fflush(stdin);
	
	// Qual � o processamento dos dados?
	idade = 2021 - ano;
	
	// Quais s�o as sa�da de dados?
	printf("%s, no ano 2021 voce tera %i anos",nome, idade);
	
	return 0;
}

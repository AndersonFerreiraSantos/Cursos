// Estrutura de sele��o, fun��o switch()
/*
	switch([opcao]){
		case [opcao1]:
			// codifica��o verdadeira da opc�o
			break;
		case [opcao2]:
			// codifica��o verdadeira da opc�o
			break;
		case [opcao3]:
			// codifica��o verdadeira da opc�o
			break;
		default:
			// codifica��o falsa das opc�es
		 	break;
	}
				
*/
// PROBLEMA: escreva n�meros por extenso de 0 at� 9
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Vari�veis
	int n;
	
	// Entrada de dados
	printf("Digite um numero de 0 ate 9: ");
	scanf("%i",&n);
	fflush(stdin);
	
	switch(n){
		case 0:
			printf("zero");
			break;
		case 1:
			printf("um");
			break;
		case 2:
			printf("dois");
			break;
		case 3:
			printf("tres");
			break;
		case 4:
			printf("quatro");
			break;
		case 5:
			printf("cinco");
			break;
		case 6:
			printf("seis");
			break;
		case 7:
			printf("sete");
			break;
		case 8:
			printf("oito");
			break;
		case 9:
			printf("nove");
			break;
		default:
			printf("Erro, fora do intervalo!");
			break;
	}
	
	return 0;
}

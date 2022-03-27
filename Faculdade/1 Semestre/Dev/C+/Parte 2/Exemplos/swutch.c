// Estrutura de seleção, função switch()
/*
	switch([opcao]){
		case [opcao1]:
			// codificação verdadeira da opcão
			break;
		case [opcao2]:
			// codificação verdadeira da opcão
			break;
		case [opcao3]:
			// codificação verdadeira da opcão
			break;
		default:
			// codificação falsa das opcões
		 	break;
	}
				
*/
// PROBLEMA: escreva números por extenso de 0 até 9
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Variáveis
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

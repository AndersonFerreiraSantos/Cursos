// Estrutura condicional (if else)
// PROBLEMA: Dado dois números qual é o maior.
#include <stdio.h>
#include <stdlib.h>

int main (void){
	// Variáveis
	int n1, n2;
	
	// Entrada de dados
	printf("Digite o 1 numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	
	printf("Digite o 2 numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	// Processamento dos dados e saída de dados
	
	/* Exemplo da estrura da função if()
	if ([critério]){
	   // codificação verdadeira
	}else{
	   // codificação falsa
	}
	
	
	if ([critério]){
	   // codificação verdadeira
	}else if ([critério]){
	   // codificação verdadeira
	}else{
	   // codificação falsa
	}
	
	// Critérios
	> maior
	< menor
	>= maior e igual
	<= menor e igual
	== igual
	!= diferente
	*OBS.: compração sempre em par
	
	// operadores lógicos
	|| operador ou
	&& operador e
	
	*/
	// Exemplo:
	if(n1>n2){
		printf("N1 e o maior\n");
	}else if(n2>n1){
		printf("N2 e o maior\n");
	}else{
		printf("Os numero sao iguais\n");
	}
	
	return 0;
}

// Estrutura condicional (if else)
// PROBLEMA: Dado dois n�meros qual � o maior.
#include <stdio.h>
#include <stdlib.h>

int main (void){
	// Vari�veis
	int n1, n2;
	
	// Entrada de dados
	printf("Digite o 1 numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	
	printf("Digite o 2 numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	// Processamento dos dados e sa�da de dados
	
	/* Exemplo da estrura da fun��o if()
	if ([crit�rio]){
	   // codifica��o verdadeira
	}else{
	   // codifica��o falsa
	}
	
	
	if ([crit�rio]){
	   // codifica��o verdadeira
	}else if ([crit�rio]){
	   // codifica��o verdadeira
	}else{
	   // codifica��o falsa
	}
	
	// Crit�rios
	> maior
	< menor
	>= maior e igual
	<= menor e igual
	== igual
	!= diferente
	*OBS.: compra��o sempre em par
	
	// operadores l�gicos
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

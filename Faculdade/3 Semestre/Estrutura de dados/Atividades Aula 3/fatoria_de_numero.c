/* 9. Fa�a um programa que pe�a um n�mero para calcular o
 fatorial. Deve ter uma fun��o para calcular
  o fatorial (por refer�ncia). */
  

#include <stdio.h> 

#include <stdlib.h> 

int fatorial(int *n); 

int main (void){ 

	int numero; 
	 

	printf("Digite um numero do fatorial: "); 

	scanf("%i",&numero); 

	printf("Fatorial e %i",fatorial(&numero)); 

	return 0; 

} 

int fatorial(int *n){ 

	int i, fat = 1; 

	for(i=*n;i>=1;i--){ 
		fat*=i;
	}
	return fat;
} 

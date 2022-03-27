/* 9. Faça um programa que peça um número para calcular o
 fatorial. Deve ter uma função para calcular
  o fatorial (por referência). */
  

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

/*
. Construa um algoritmo que peça 2 números inteiros e um número real. 
Calcule e mostre:
a. o produto do dobro do primeiro com metade do segundo .
b. a soma do triplo do primeiro com o terceiro.
c. o terceiro elevado ao cubo.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	//Quais são as variáveis deste problema?
	int numero1, numero2;
	float numero3, a, b, c;
	
	// Quais são as entrada de dados?
	printf("Digite o numero 1: ");
	scanf("%i",&numero1);
	fflush(stdin);
	printf("Digite o numero 2: ");
	scanf("%i",&numero2);
	fflush(stdin);
	printf("Digite o numero 3: ");
	scanf("%f",&numero3);
	
	// Qual é o processamento dos dados?
	a = numero1 * 2 + numero2/2.0;
	b = numero1 * 3 + numero3;
	c = numero3 * numero3 * numero3;
	
	// Quais são as saída de dados?
	printf("A = %f\n",a);
	printf("B = %f\n",b);
	printf("C = %f\n",c);
	
	return 0;
}

/*
. Construa um algoritmo que pe�a 2 n�meros inteiros e um n�mero real. 
Calcule e mostre:
a. o produto do dobro do primeiro com metade do segundo .
b. a soma do triplo do primeiro com o terceiro.
c. o terceiro elevado ao cubo.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	//Quais s�o as vari�veis deste problema?
	int numero1, numero2;
	float numero3, a, b, c;
	
	// Quais s�o as entrada de dados?
	printf("Digite o numero 1: ");
	scanf("%i",&numero1);
	fflush(stdin);
	printf("Digite o numero 2: ");
	scanf("%i",&numero2);
	fflush(stdin);
	printf("Digite o numero 3: ");
	scanf("%f",&numero3);
	
	// Qual � o processamento dos dados?
	a = numero1 * 2 + numero2/2.0;
	b = numero1 * 3 + numero3;
	c = numero3 * numero3 * numero3;
	
	// Quais s�o as sa�da de dados?
	printf("A = %f\n",a);
	printf("B = %f\n",b);
	printf("C = %f\n",c);
	
	return 0;
}

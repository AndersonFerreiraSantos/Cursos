/*
3. Construa um algoritmo que pe�a a temperatura em graus Fahrenheit (�F),
transforme e mostre na tela a temperatura em graus Celsius (�C). C=5*(F-32)/9
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	// Quais s�o as vari�veis?
	float f, c;
	
	// Qual � a entrada de dados?
	printf("Digite o valor da temperatura em graus fahrenheit: ");
	scanf("%f",&f);
	
	// Qual � o processamento dos dados?
	c=5*(f-32)/9;
	
	// Qual � a sa�da de dados?
	printf("A temperatura em celsius e: %.1f",c);
	
	return 0;
}

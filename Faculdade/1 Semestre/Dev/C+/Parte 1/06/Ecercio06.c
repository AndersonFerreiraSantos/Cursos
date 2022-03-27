/*
3. Construa um algoritmo que peça a temperatura em graus Fahrenheit (ºF),
transforme e mostre na tela a temperatura em graus Celsius (ºC). C=5*(F-32)/9
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	// Quais são as variáveis?
	float f, c;
	
	// Qual é a entrada de dados?
	printf("Digite o valor da temperatura em graus fahrenheit: ");
	scanf("%f",&f);
	
	// Qual é o processamento dos dados?
	c=5*(f-32)/9;
	
	// Qual é a saída de dados?
	printf("A temperatura em celsius e: %.1f",c);
	
	return 0;
}

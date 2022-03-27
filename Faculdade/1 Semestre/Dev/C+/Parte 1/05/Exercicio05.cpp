#include <stdio.h>
#include <stdlib.h>

int main (void){

	float numeroF, numeroC;
	

	printf("Digite os graus Fahrenheit:   ");
	scanf("%f",&numeroF);
	
	numeroC = ((numeroF - 32)*5/9);
	

	printf("Fahrenheit em Celsius e  : %f", numeroC);
	
	return 0;
}

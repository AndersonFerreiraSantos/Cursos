#include <stdio.h>
#include <stdlib.h>

int main (void){

	float numeroC;
	float numeroF;
	
	
	printf("Digite os graus Fahrenheit: ");
	scanf("%f",&numeroF);
	
	numeroC = ((numeroF - 32)*5/9);
	
	printf("numeroC = %f", numeroC);
	
	return 0;
}

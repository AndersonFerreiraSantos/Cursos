/*9)	Escrever um programa que calcule o fatorial de um número.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int numero, i, result, temp, final;
	
	i = 1;
	numero =  6;
	temp = 6;
	
	
	for(i = 1; i <= numero; numero--){
		result = i * numero;
		final = result * temp;
		printf(" %i\n", final);
    }
}


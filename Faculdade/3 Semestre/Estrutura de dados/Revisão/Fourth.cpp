/*
Escrever um programa que incremente uma vari�vel com valor m�nimo 0 e valor m�ximo 100 e as mostre no v�deo.
*/


#include <iostream>
#include <stdlib.h>

int main() {
	int var;
	
	var = 20;
	
	for(int n = var; n <= 100; n++){
        
        printf("--> %i \n", var);
        var++;
    }
}

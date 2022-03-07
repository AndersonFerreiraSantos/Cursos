/*
Escrever um programa que incremente uma variável com valor mínimo 0 e valor máximo 100 e as mostre no vídeo.
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

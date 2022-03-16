/* 8)	Escrever um programa que mostre no vídeo a tabuada do 2, do 3 e do 5.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, numero, tabuada2, tabuada3, tabuada5, result;
	
	n = 1;
	tabuada2 = 2;
	tabuada3 = 3;
	tabuada5 = 5;
	
	for(n = 1; n <= 10; n++){
		result = n * tabuada2;
    	printf(" %i vezes %i = %i \n", n, tabuada2, result);
    			result = n * tabuada3;
    	printf(" %i vezes %i = %i \n", n, tabuada3, result);
    			result = n * tabuada5;
    	printf(" %i vezes %i = %i \n", n, tabuada5, result);
    }
}


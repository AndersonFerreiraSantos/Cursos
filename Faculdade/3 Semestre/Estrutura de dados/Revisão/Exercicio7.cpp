#include <iostream>
#include <stdlib.h>

int main() {
	int base, expoente, resultado, temp;
	
	base = 2;
	expoente = 4;
	
	for(int n = 1; n <= expoente; n++){
		if(n == 1) {
			temp = base * base;
		}else{
			temp = temp + base;
		}
       printf("--> %i \n", temp);
    }
}

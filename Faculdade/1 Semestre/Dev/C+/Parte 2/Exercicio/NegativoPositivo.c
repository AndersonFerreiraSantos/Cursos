#include <stdlib.h>
#include <stdio.h>

int main (void){
	
	int N;
	
	printf (" digite um numero:  ");
	scanf("%i",&N);
	fflush(stdin);
	
	if(N>=0){
		printf("o numero e positivo\n");
	}else{
		printf("numero e negativo\n");
	}
	
	
	return 0;
}

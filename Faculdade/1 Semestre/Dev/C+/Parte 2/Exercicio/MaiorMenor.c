#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int n1, n2;
	
	
	printf ("digite o primeiro numero:   ");
	scanf("%i",&n1);
	fflush(stdin);
	
	
	printf ("digite o primeiro numero");
	scanf("%i",&n2);
	fflush(stdin);
	
	if (n1 == n2){
		printf("Os numeros sao iguais");
	}else if (n1>n2){
		printf ("n1 e maior que n2");
	}else{
		printf ("n2 e maior que n1");
	}
	
	return 0;
}

#include <stdio.h>
#include<stdlib.h>

int main (void){
	
	int n;
	
	printf ("Digite um numero:  ");
	scanf("%i",&n);
	fflush(stdin);
	
	if(n % 2 == 0){
		n+1;
		printf("numero e par, novo numero impar e %i\n",n+1);
	}else{
		printf("numero e par, novo numero par e %i\n",n+1);
	}
	
	return 0;
}

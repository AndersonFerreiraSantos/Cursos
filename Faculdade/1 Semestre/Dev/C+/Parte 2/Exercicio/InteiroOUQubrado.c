#include <stdio.h>
#include<stdlib.h>

int main (void){
	

	
	int ni;
	
	float nf;
	
	printf ("Digite um numero:  ");
	scanf("%f",&nf);
	fflush(stdin);
	
	ni = nf;
	

	
	
	if(ni == nf){
		printf ("numero e inteiro");
	}else{
	printf("numero e quebrado");
	}
	
	
	return 0;
}

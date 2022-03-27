#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int ai, bi, ci, ni, ni1, ni2, ni3, a, b, c;
	float af, bf, cf, nf1, nf2, nf3;
	
	printf("Digite o pimeiro numero:   ");
	scanf("%f",&nf1);
	fflush(stdin);
	
	printf("Digite o segundo numero:   ");
	scanf("%f",&nf2);
	fflush(stdin);
	
	printf("Digite o terceiro numero:   ");
	scanf("%f",&nf3);
	fflush(stdin);
	
	
	ni1=nf1;
	ni2=nf2;
	ni3=nf3;
	
	if (ni1 == nf1){
		a=ni1;
	}
	if (ni2 == nf2){
		a=ni2;
	}
	if (ni3 == nf3){
		a=ni3;
	}else{
		printf("quebrado");
	}
	
	

	return 0;
}

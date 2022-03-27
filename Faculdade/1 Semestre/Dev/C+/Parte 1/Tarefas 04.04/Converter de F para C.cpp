#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float M, P, C;
	P=39.37;
	printf("Metros: ");
	scanf("%f",&M);
	
	C=M*P;
	
	printf ("%.3f", C);

	return 0;
}

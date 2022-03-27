#include <stdio.h>
#include <stdlib.h>


int main (void){
	
	float N1, N2, N3, M;
	char N[50];
	
	printf("Qual seu nome?   ");
	gets(N);
	fflush(stdin);

	printf("Qual sua primeira Nota?   ");
	scanf("%f",&N1);
	fflush(stdin);
	
	printf("Qual sua segunda nota?   ");
	scanf("%f",&N2);
	fflush(stdin);
	
	printf("Qual sua terceira nota?   ");
	scanf("%f",&N3);
	fflush(stdin);
	
	M=(N1+N2+N3)/3;
	
	printf("%s, sua media e %.1f", N, M);
	
	return 0;
}

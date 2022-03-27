#include <stdio.h>

int main(void){
	
	float B, A, C, RA, RB, RC, RD;
	

	B=5;
	A=7;
	
	B+=A;
	
	RA=B;

	A*=1-A;
	B+=B-A;
	
	RB= B;
	
	B=51;
	A=A+B;
	
	RC=B;
	
	A=25+B;
	A+=B-A;
	
	RD=A;
	
	printf("%f",RA, RB, RC, RD);
	return 0;
}

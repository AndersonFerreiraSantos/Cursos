#include <stdio.h>

int main(void){
	
	float B, A, C, RA, RB, RC, RD;
	

	B=5;
	A=7;
	
	B+=A;
	
	RA=B;

	A*=1-A;
	B+=B-A;
	
	RB=A;
	
	B=51;
	A=A+B;
	
	RC=B;
	
	A=25+B;
	A+=B-A;
	
	RD=A;
	
	printf("%f \n",RA);
	printf("%f \n",RB);
	printf("%f \n",RC);
	printf("%f \n",RD);
	return 0;
}

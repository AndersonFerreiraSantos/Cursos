#include <stdio.h>
#include <stdlib.h>

int main (void){

	float sb,sp, IR, INSS, SDT, SL;
	
	printf("Digite seu salario bruto:   ");
	scanf("%f",&sb) ;
	
	sp=sb/100;
	
	IR = sp * 15;
	INSS = sp * 11;
	SDT = sp * 3;
	
	SL = sb - (IR + INSS+ SDT);
	
	printf("IR:  %.2f$\n",IR);
	printf("INSS:  %.2f$\n",INSS);
	printf("Sindicato:  %.2f$\n",SDT);
	printf("Salario Liquido:  %.2f$",SL);
	
	return 0;
}

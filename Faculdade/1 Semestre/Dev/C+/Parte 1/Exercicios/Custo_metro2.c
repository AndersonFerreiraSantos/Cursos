#include <stdio.h>
#include <stdlib.h>


int main (void){
	
	float PA, PL, M2, CTM2, QLM2, QL;
	QLM2 = 3;

	//entrada
	
	printf("Qual altura da parede?   ");
	scanf("%f",&PA);
	fflush(stdin);
	
	printf("Qual a largura da parede?   ");
	scanf("%f",&PL);
	fflush(stdin);
	
	//Processos
	
	M2 = PA * PL;
	CTM2 = M2 * QLM2;
	QL = CTM2 / 3.6;
	
	//Saída
	printf("Utilizara  %.0f Latas",QL);
	
	return 0;
}

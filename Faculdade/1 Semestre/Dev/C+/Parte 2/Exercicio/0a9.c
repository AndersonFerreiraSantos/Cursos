#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int N;
	
	printf("digite um número de 0 a 9:  ");
	scanf("%i",&N);
	fflush(stdin);
	
	if(N == 0){
		printf("Numero zero");
	}else if (N ==1){
		printf("Numero um");
	}else if (N ==2){
		printf("Numero dois");
	}else if (N ==3){
		printf("Numero tres");
	}else if (N ==4){
		printf("Numero quatro");
	}else if (N ==5){
		printf("Numero cinco");
	}else if (N ==6){
		printf("Numero seis");
	}else if (N ==7){
		printf("Numero sete");
	}else if (N ==8){
		printf("Numero oito");
	}else if (N ==9){
		printf("Numero nove");
	}else{
		printf("este nao é um numero de 0 a 9");
	}

	
	
	return 0;
}

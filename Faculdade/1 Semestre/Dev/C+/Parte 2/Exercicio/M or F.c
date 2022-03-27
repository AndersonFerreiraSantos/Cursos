#include <stdio.h>
#include <stdlib.h>


int main (void){
	
	char mf;
	char f, m;
	
	
	printf("digite m  ou  f:  ");
	scanf("%c", mf);
	fflush(stdin);
	
	if (mf == 'm'){
		printf("Masculino");
	}else if(mf == 'f'){
		printf("Feminino");
	}else{
		printf ("Error 404");
	}
	
	
	return 0;
}

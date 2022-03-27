#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int n1, n2, x;
	char op;
	
	do{
		printf("digite o primeiro numero:  ");
		scanf("%i",&n1);
		fflush(stdin);
		
		printf("digite o primeiro numero:  ");
		scanf("%i",&n2);
		fflush(stdin);
		
		
		if (n2>n1){
			for(x=n1;x<=n2;x++){
			printf("%i\n",x);
			}
		}
		
		
	
	
	
	printf("voc3 deseja sair (s/n)?  ");
	scanf("%c",&op);
	fflush(stdin);
	
	}while(op!='s');
	return 0;
}

//if(n2>n1){
//	for(x=n1;x<=n2;x++){
//	printf("%i\n",x);
//	}

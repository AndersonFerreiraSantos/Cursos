#include <stdio.h>
#include <stdlib.h>

 

 

int main(void){
int n1, n2, x;
char op;
do{
system("cls");

printf("Digite o primeiro numero: ");
scanf("%i",&n1);
fflush(stdin);

 

printf("Digite o segundo numero: ");
scanf("%i",&n2);
fflush(stdin);

if(n2>n1){
	for(x=n1;x<=n2;x++){
	printf("%i\n",x);
	}
}
else{
	for(x=n2;x<=n1;x++){
	printf("%i\n",x);
	}
}
printf("\n\nDeseja sair(s/n): ");
scanf("%c",&op);
fflush(stdin);
}while(op!='s');


return 0;
}


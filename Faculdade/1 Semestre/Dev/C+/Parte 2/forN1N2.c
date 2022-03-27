#include <stdio.h>
#include <stdlib.h>



int main(void){
int n1, n2, i;

printf("Digite o primeiro numero: ");
scanf("%i",&n1);
fflush(stdin);

printf("Digite o segundo numero: ");
scanf("%i",&n2);
fflush(stdin);



for(i=n1;i<=n2;i++){
printf("%i\n",i);
}

return 0;
}

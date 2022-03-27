#include <stdio.h>
#include <stdlib.h>
 
int main(void){
int n1, n2, contador;
 
printf("Digite o primeiro numero: ");
scanf("%i",&n1);
fflush(stdin);
 
printf("Digite o segundo numero: ");
scanf("%i",&n2);
fflush(stdin);
 
//for(i=n1;i<=n2;i++)
if(n2 > n1){
 for( contador = n1; contador <= n2; contador ++){
 printf("%i\n",contador);
 }else ( contador = n2; contador <= n1; contador ++);
}
return 0;
}

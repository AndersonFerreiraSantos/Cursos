#include <stdio.h>
#include <stdlib.h>



int main (void){

float n, t=0, m;
int i;



for(i=1;i<=4;i++){
printf("Digite a %i nota: ",i);
scanf("%f",&n);
fflush(stdin);
t+=n;

}


m=t/4;


printf("A media e %.2f",m);

return 0;
}

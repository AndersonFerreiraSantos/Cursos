#include <stdio.h>
#include <stdlib.h>



int main (void){

int r1, r2, r3;


printf("Digite 1 real: ");
scanf("%i",&r1);
fflush(stdin);
printf("Digite 2 real: ");
scanf("%i",&r2);
fflush(stdin);
printf("Digite 3 real: ");
scanf("%i",&r3);
fflush(stdin);


if(r1<r2 && r1<r3){
if(r2<r3){
printf("%i, %i, %i\n",r1,r2,r3);
}else{
printf("%i, %i, %i\n",r1,r3,r2);
}
}else if(r2<r1 && r2<r3){
if(r1<r3){
printf("%i, %i, %i\n",r2,r1,r3);
}else{
printf("%i, %i, %i\n",r2,r3,r1);
}
}else{
if(r1<r2){
printf("%i, %i, %i\n",r3,r1,r2);
}else{
printf("%i, %i, %i\n",r3,r2,r1);
}
}

return 0;
}

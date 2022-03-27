#include <stdio.h>
#include <stdlib.h>



int main (void){

	int v1 = 0, v2 = 1, r, cont = 1;
	while(cont<=7){
		r= v1+ v2;
		printf("%i", r);
		if(v1<v2){
			v1=r;
		}else{
			v2=r;
		}
	}
	cont++;


return 0;
}

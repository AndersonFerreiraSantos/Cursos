#include <stdio.h>
#include <stdlib.h>

 

int main(void){

 

    char mf;
    

    printf("m ou f?  ");
    scanf("%c",&mf);
    fflush(stdin);
    
    switch(mf){
        case 'm':
            printf("masculino");
            break;
        case 'f':
            printf("feminino");
            break;    
        default:
            printf("error44");
			break;
	}
   	return 0;
}
    
    

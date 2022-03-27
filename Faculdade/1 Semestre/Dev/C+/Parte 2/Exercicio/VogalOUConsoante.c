#include <stdio.h>
#include <stdlib.h>

 

int main(void){

    char v;
    

    printf("Digite uma letra:  ");
    scanf("%c",&v);
    fflush(stdin);
    
    switch(v){
        case 'a':
            printf("Vogal");
            break;
        case 'e':
            printf("Vogal");
            break; 
		case 'i':
            printf("Vogal");
            break;  
		case 'o':
            printf("Vogal");
            break;  
		case 'u':
            printf("Vogal");
            break;   
        default:
            printf("Consoante");
			break;
	}
   	return 0;
}
    
    

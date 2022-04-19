/* Contrua um algoritimo que use recursividade para resolver o
problema matematico da serie de pitagoras
sabendo que a serie é 1,3, 6, 10, 15 e 21

*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);
int main(void){
    // variáveis    
	int n;
    // entrada    
	printf("Digite um numero: ");
    scanf("%i",&n);
    // saída    
	printf("Fatorial do numero %i! = %i\n",n,pitagoras(n));
    return 0;
}
int pitagoras(int n){
    if(n == 1){
        return 1;
    }else{
    	printf("%i\n",n);
        return n+pitagoras(n -1);
    }
}

/*
#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);
int main(void){
    // variáveis    
	int n;
    // entrada    
	printf("Digite um numero: ");
    scanf("%i",&n);
    // saída    
	printf("Fatorial do numero %i! = %i\n",n,fatorial(n));
    return 0;
}

int fatorial(int n){
    if(n == 1){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}

*/

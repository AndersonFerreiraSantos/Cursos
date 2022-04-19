// Programa do fatorial v1

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
	printf("Fatorial do numero %i! = %i\n",n,fatorial(x));
    return 0;
}
int fatorial(int n){
    if(n == 1){
        return 1;
    }else{
    	int x;
    	x = n*fatorial(n-1);
        return x;
    }
}

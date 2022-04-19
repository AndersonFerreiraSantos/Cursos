#include <stdio.h>
#include <stdlib.h>

int fibo(int n);
int main(void){
    // variáveis    
	int n, x;
    // entrada    
	printf("Digite um numero: ");
    scanf("%i",&n);
    // saída    
	printf("Fibonacci do numero %i! = %i\n",n,fibo(n));
    return 0;
}
int fibo(int n){
    if(n == 1 || n == 0){
        return 1;
    }else{
        return n+fibo(n -1) + fibo(n -2);
    }
}



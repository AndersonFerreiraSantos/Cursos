#include <stdio.h>#include <stdlib.h>void converta(char *n);
int main (void){
    // variáveis    
	char nome[50];
    // entrada    
	printf("Digite seu nome: ");
    gets(nome);
    // processamento    
	converta(nome);
    // saida    
	printf("Seu nome e %s",nome);
    return 0;
}
void converta(char *n){
    if(n[0]>= 'a' && n[0] <='z'){
        n[0]=n[0]-('a'-'A');
    }
}

#include <stdio.h>
#include <stdlib.h>


void converta(char *n);
int main (void){
    // variáveis    
	char nome[50];
    // entrada    
	printf("Digite seu nome: ");
    gets(nome);
    // processamento    
	converta(nome);
    // saida    
    
	printf("Seu nome e %c", nome);
    return 0;
}




/*void maiuscula(char s1[], char s2[]){
    int i = 0;
    
    while(char[i] != '\0'){
    	
        s2[i] = toupper(s1[i]);
        i++;
    }
    s2[i] = '\0'; *
    */
    
    
 void converta(char *n){
	int n[i] = 0;
    while(n[i] != '\0'){
        n[i] -=32;
        i++;
    }
} 

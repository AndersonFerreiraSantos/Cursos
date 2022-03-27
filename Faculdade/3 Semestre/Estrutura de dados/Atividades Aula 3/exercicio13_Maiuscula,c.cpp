/*13. Faça uma função que leia um texto e converta este texto para maiúscula. O texto deve ser passado para função por referência. */#include <stdio.h>#include <stdlib.h>void converta(char *t);
int main (void){
    // variáveis    
	char texto[50];
    // entrada    
	printf("Digite um texto: ");
    gets(texto);
    // processamento    
	converta(texto);
    // saida    
	printf("O texto e %s \n",texto);
    return 0;
}
void converta(char *t){
    int i=0;
    while(t[i]!='\0'){
        if(t[i]>='a' && t[i]<='z'){
            t[i]-=32;
        }
        i++;
    }
}

/* #include <stdio.h>
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
    
    
    
 void converta(char *n){
	int i= 0;
    while(n[i] != '\0'){
        n[i] -=32;
        i++;
    }
} 

*/

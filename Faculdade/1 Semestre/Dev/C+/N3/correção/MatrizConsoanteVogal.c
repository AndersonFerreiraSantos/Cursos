#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    char c[10];
    int i, qtd=0;
    // entrada
    for(i=0;i<10;i++){
        printf("Digite %i caracter: ",i+1);
        scanf("%c",&c[i]);
        fflush(stdin);
    }
    // processamento
    printf("As consoantes sao: ");
    for(i=0;i<10;i++){
        if((c[i]>='a' && c[i]<='z') || (c[i]>='A' && c[i]<='Z')){
            if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' ||
               c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U'){
            }else{
                qtd++;
                // saida 
                printf("%c, ", c[i]);
            }
        }
    }
    printf("\nA quantidade de consoantes e %i\n",qtd);
    return 0;
}

/*14) Escreve um programa que contenha duas strings. O programa devera mostrar no vídeo a quantidade de caracteres de cada uma.*/#include <stdio.h>#include <stdlib.h>int contador(char *texto);
int main(void){
    // variáveis    char texto1[250], texto2[250];
    // entrada    printf("Digite o 1 texto: ");
    gets(texto1);
    fflush(stdin);
    printf("Digite o 2 texto: ");
    gets(texto2);
    fflush(stdin);
    printf("Texto 1 tem %i caracteres\n",contador(texto1));
    printf("Texto 2 tem %i caracteres\n",contador(texto2));
    return 0;
}
int contador(char *texto){
    int i=0, cont=0;
    while(texto[i]!='\0'){
        if(texto[i]!=' '){
            cont++;
        }
        i++;
    }
    return cont;
}

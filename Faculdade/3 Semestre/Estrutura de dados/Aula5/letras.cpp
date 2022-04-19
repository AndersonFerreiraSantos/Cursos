#include <stdio.h>
#include <stdlib.h>
void imprimir(char *m, int *l, int *c);
int main(void){
    // variáveis    
	char mensagem[50];
    int linha, coluna;
    // entrada    
	printf("Digite a mensagem: ");
    gets(mensagem);
    fflush(stdin);
    printf("Digite a linha: ");
    scanf("%i",&linha);
    printf("Digite a coluna: ");
    scanf("%i",&coluna);
    imprimir(mensagem, &linha, &coluna);
    return 0;
}
void imprimir(char *m, int *l, int *c){
    int i;
    system("cls");
    for(i=1;i<*l;i++){
        printf("\n%i");
    }
    for(i=1;i<=*c;i++){
        printf(" ");
    }
    printf("%s",m);
}

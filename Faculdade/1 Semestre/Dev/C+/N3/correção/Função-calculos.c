/*
3. Fazer um programa que possibilite v�rias op��es de c�lculos a partir de um menu. 
O programa chamar� a fun��o correspondente a cada c�lculo.
[a] S = 1/1 + 3/2 + 5/3 +........+ 99/50
[b] S = 1/1 - 2/2 + 3/3 -........- 10/10
[c] S = 1000/1 - 997/2 + 994/3..........
[d] S = 480/10 - 475/11 + 470/12 -......
[f] FIM
Obs.: Nas op��es [c] e [d] fazer os c�lculos para os 20 primeiros termos.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
// prototipo de fun��o
void fA(void);
void fB(void);
void fC(void);
void fD(void);
int main (void){
    // vari�veis locais
    char opcao;
    // sa�da de dados
    do{
        system("cls");
        printf("[a] S = 1/1 + 3/2 + 5/3 +........+ 99/50\n");
        printf("[b] S = 1/1 - 2/2 + 3/3 -........- 10/10\n");
        printf("[c] S = 1000/1 - 997/2 + 994/3..........\n");
        printf("[d] S = 480/10 - 475/11 + 470/12 -......\n");
        printf("[f] FIM\n");
        printf("\nDigite uma opcao: ");
        scanf("%c",&opcao);
        fflush(stdin);
        // processamento
        switch(opcao){
            case 'a': case 'A': 
                fA();
                getch();
                break;
            case 'b': case 'B': 
                fB();
                getch();
                break;
            case 'c': case 'C': 
                fC();
                getch();
                break;
            case 'd': case 'D': 
                fD();
                getch();
                break;
            case 'f': case 'F': 
                printf("Saindo...\n");
                sleep(1);
                break;      
            default:
                printf("Erro, opcao invalida.\n");
                sleep(2);
        }
    }while(opcao != 'f' && opcao != 'F');
    return 0;
}
// Fun��o A
void fA(void){
    // S = 1/1 + 3/2 + 5/3 +........+ 99/50
    // vari�veis locais
    int a, b;
    float s = 0;
    // processamento
    for(a=1,b=1; a<=99,b<=50; a+=2,b++){
        s+=(float)a/b;
    }
    // sa�da
    printf("S = 1/1 + 3/2 + 5/3 +........+ 99/50 = %f",s);
}
// Fun��o B
void fB(void){
    // [b] S = 1/1 - 2/2 + 3/3 -........- 10/10
    // vari�veis locais
    int a;
    float s = 0;
    // processamento
    for(a=1; a<=10; a++){
        if(a%2 != 0){
            s+=(float)a/a;
        }else{
            s-=(float)a/a;
        }
    }
    // sa�da
    printf("S = 1/1 - 2/2 + 3/3 -........- 10/10 = %f",s);
}
// Fun��o C
void fC(void){
    // S = 1000/1 - 997/2 + 994/3..........
    // vari�veis locais
    int a, b;
    float s = 0;
    // processamento
    for(a=1000,b=1; b<=20; a-=3,b++){
        if(b%2 != 0){
            s+=(float)a/b;
        }else{
            s-=(float)a/b;
        }
    }
    // sa�da
    printf("S = 1000/1 - 997/2 + 994/3.......... = %f",s);
}
// Fun��o D
void fD(void){
    // S = 480/10 - 475/11 + 470/12 -......
    // vari�veis locais
    int a, b;
    float s = 0;
    // processamento
    for(a=480,b=10; b<=29; a-=5,b++){
        if(b%2 == 0){
            s+=(float)a/b;
        }else{
            s-=(float)a/b;
        }
    }
    // sa�da
    printf("S = 480/10 - 475/11 + 470/12 -...... = %f",s);
}

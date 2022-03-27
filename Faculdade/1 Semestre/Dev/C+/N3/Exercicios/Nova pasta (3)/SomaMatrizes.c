#include <stdio.h>
#include <stdlib.h>
int main (void){
    // variáveis
    int matriz1[3][3],matriz2[3][3], matrizs[3][3], a, linha, coluna;
    // entrada
    for (linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            printf("Digite o valor da primeira matriz (%i,%i): ",linha, coluna);
            scanf("%i",&matriz1[linha][coluna]);
            fflush(stdin);
        }
    }
    for (linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            printf("Digite o valor da segunda matriz (%i,%i): ",linha, coluna);
            scanf("%i",&matriz2[linha][coluna]);
            fflush(stdin);
        }
    }
    for (linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            matrizs[linha][coluna]=matriz1[linha][coluna]+matriz2[linha][coluna];
            
			}
		}

    printf("O valor da matriz e: \n");
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            printf("%i\t",matrizs[linha][coluna]);
        }
        printf("\n");
    }

	
    
    return 0;
}

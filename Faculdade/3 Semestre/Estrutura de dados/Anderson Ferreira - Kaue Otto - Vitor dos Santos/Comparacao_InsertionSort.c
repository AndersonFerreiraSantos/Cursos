#include <stdio.h>
#include <time.h>

#define TAMANHO 10000

void geraNumero(int *vet, int op);
void insertionSort(int *vet);
void imprimirVetor(int *vet);

int qtd_comparacoes, qtd_trocas;

int main(void) {
	int vet1[TAMANHO];
	float tempo_inicial, tempo_final;
		
	printf("Ordenado:\n");
	geraNumero(vet1,1);
	tempo_inicial = clock();
	insertionSort(vet1);
	tempo_final = clock() - tempo_inicial;
	
	printf("\nQuantidade de comparacoes: %i\n",qtd_comparacoes);
    printf("Quantidade de trocas: %i\n",qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f\n",tempo_final/1000);
	
	printf("\nInvertido:\n");
	geraNumero(vet1,2);
	tempo_inicial = clock();
	insertionSort(vet1);
	tempo_final = clock() - tempo_inicial;
	
	printf("\nQuantidade de comparacoes: %i\n",qtd_comparacoes);
    printf("Quantidade de trocas: %i\n",qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f\n",tempo_final/1000);
	
	printf("\nAleatorio:\n");
	geraNumero(vet1,3);
	tempo_inicial = clock();
	insertionSort(vet1);
	tempo_final = clock() - tempo_inicial;
	
	printf("\nQuantidade de comparacoes: %i\n",qtd_comparacoes);
    printf("Quantidade de trocas: %i\n",qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f\n",tempo_final/1000);
	
	return 0;
}

void geraNumero(int *vet, int op) {
    int i, j;

    switch (op) {
        case 1: 
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = i + 1;
            }
            break;
        case 2:
            for (i = 0; i < TAMANHO; i++) {
               vet[i] = TAMANHO-i;
            }
            break;
        case 3:
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = (int) (rand() % TAMANHO);
            }
            break;
    }

}

void insertionSort(int *vet){
	int i, j, eleito;
	
	qtd_trocas = 0; qtd_comparacoes = 0;

	for (i = 1; i < TAMANHO; i++) {
		qtd_comparacoes++;
        eleito = vet[i];
        j = i - 1;
        while (j >= 0 && vet[j] > eleito) {
        	qtd_comparacoes++;
            vet[j + 1] = vet[j];
            j = j - 1;
            qtd_trocas++;
        }
        vet[j + 1] = eleito;
        qtd_trocas+=2;
    }
}

void imprimirVetor(int *vet){
	int i;
	for(i=0;i<TAMANHO;i++){
		printf("%i, ",vet[i]);
		if ((i+1)%14 == 0){
			printf("\n");
		}
	}
}


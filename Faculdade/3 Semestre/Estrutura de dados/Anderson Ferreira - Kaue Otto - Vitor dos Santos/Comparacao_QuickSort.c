#include <stdio.h>
#include <time.h>

#define TAMANHO 10000

void geraNumero(int *vet, int op);
void imprimirVetor(int *vet);
void quickSort(int *vet, int ini, int fim);
int partition(int *vet, int ini, int fim);

int qtd_comparacoes, qtd_trocas;

int main(void) {
	int vet1[TAMANHO];
	float tempo_inicial, tempo_final;
		
	printf("Ordenado:\n");
	geraNumero(vet1,1);
	qtd_comparacoes = 0, qtd_trocas = 0;
	tempo_inicial = clock();
	quickSort(vet1, 0, TAMANHO-1);
	tempo_final = clock() - tempo_inicial;
	
	printf("\nQuantidade de comparacoes: %i\n",qtd_comparacoes);
    printf("Quantidade de trocas: %i\n",qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f\n",tempo_final/1000);
    
	
	printf("\nInvertido:\n");
	geraNumero(vet1,2);
	qtd_comparacoes = 0, qtd_trocas = 0;
	tempo_inicial = clock();
	quickSort(vet1, 0, TAMANHO-1);
	tempo_final = clock() - tempo_inicial;
	
	printf("\nQuantidade de comparacoes: %i\n",qtd_comparacoes);
    printf("Quantidade de trocas: %i\n",qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f\n",tempo_final/1000);
	
	printf("\nAleatorio:\n");
	geraNumero(vet1,3);
	qtd_comparacoes = 0, qtd_trocas = 0;
	tempo_inicial = clock();
	quickSort(vet1, 0, TAMANHO-1);
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

void imprimirVetor(int *vet){
	int i;
	for(i=0;i<TAMANHO;i++){
		printf("%i, ",vet[i]);
		if ((i+1)%14 == 0){
			printf("\n");
		}
	}
}

void quickSort(int *vet, int ini, int fim) {
    int meio;
    
    if (ini < fim) {
        meio = partition(vet, ini, fim);
        quickSort(vet, ini, meio);
        quickSort(vet, meio + 1, fim);
    }
}

int partition(int *vet, int ini, int fim) {
    int pivo, topo, i;
    pivo = vet[ini];
    topo = ini;
    for (i = ini + 1; i <= fim; i++) {
    	qtd_comparacoes++;
        if (vet[i] < pivo) {
        	qtd_trocas++;
            vet[topo] = vet[i];
            vet[i] = vet[topo + 1];
            topo++;
        }
    }
    vet[topo] = pivo;
    return topo;
}

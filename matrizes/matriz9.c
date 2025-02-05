/*9. Defina uma matriz com 3 linhas e 4 colunas. Crie um vetor com 3
posições que contenha a soma dos valores de cada uma das linhas da matriz.
Crie um vetor com 4 posições que contenha a multiplicação dos valores de
cada uma das colunas da matriz. Ao final do processamento, imprima esses
vetore*/

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 4

int main() {
    // Definindo a matriz 3x4
    int matriz[LINHAS][COLUNAS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int i,j;
    
    // Vetores para armazenar resultados
    int soma_linhas[LINHAS] = {0}; // Inicializa com zeros
    int mult_colunas[COLUNAS] = {1, 1, 1, 1}; // Inicializa com uns
    
    // Calculando a soma das linhas
    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            soma_linhas[i] += matriz[i][j];
        }
    }
    
    // Calculando a multiplicação das colunas
    for(j = 0; j < COLUNAS; j++) {
        for(i = 0; i < LINHAS; i++) {
            mult_colunas[j] *= matriz[i][j];
        }
    }
    
    // Imprimindo a matriz original
    printf("Matriz original:\n");
    for(i = 0; i < LINHAS; i++) {
        for( j = 0; j < COLUNAS; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Imprimindo o vetor com a soma das linhas
    printf("\nVetor com a soma das linhas:\n");
    for(i = 0; i < LINHAS; i++) {
        printf("%d ", soma_linhas[i]);
    }
    printf("\n");
    
    // Imprimindo o vetor com a multiplicação das colunas
    printf("\nVetor com a multiplicacao das colunas:\n");
    for(j = 0; j < COLUNAS; j++) {
        printf("%d ", mult_colunas[j]);
    }
    printf("\n");
    
    return 0;
}
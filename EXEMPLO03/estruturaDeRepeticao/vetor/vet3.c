/*Escreva um programa que apresente os dados de um vetor na ordem inversa em que eles foram
inseridos.
26*/

#include <stdio.h>
#define TAM 5  // Define o tamanho do vetor

int main() {
    int vetor[TAM];
    int i;
    
    // Leitura dos dados
    printf("Digite %d numeros:\n", TAM);
    for(i = 0; i < TAM; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    // Apresentação dos dados na ordem inversa
    printf("\nElementos na ordem inversa:\n");
    for(i = TAM-1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
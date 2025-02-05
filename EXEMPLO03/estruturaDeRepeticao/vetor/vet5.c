/*Escreva um programa que contenha um vetor de 8 valores lidos do teclado. Você deve garantir que
os valores lidos sejam inteiros positivos. Em seguida, o programa deverá solicitar um número do
teclado e verificar se esse número está contido ou não no vetor.*/

#include <stdio.h>

int main() {
    int vetor[8];
    int numero, i;
    int encontrado = 0;  // Flag para indicar se o número foi encontrado
    
    // Leitura dos valores com validação
    for(i = 0; i < 8; i++) {
        do {
            printf("Digite o %dº numero (deve ser positivo): ", i+1);
            scanf("%d", &numero);
            
            if(numero <= 0) {
                printf("Numero invalido! Digite um numero positivo.\n");
            }
        } while(numero <= 0);
        
        vetor[i] = numero;
    }
    
    // Mostra os números armazenados
    printf("\nNumeros armazenados: ");
    for(i = 0; i < 8; i++) {
        printf("%d ", vetor[i]);
    }
    
    // Solicita o número para busca
    printf("\n\nDigite um numero para verificar se esta no vetor: ");
    scanf("%d", &numero);
    
    // Verifica se o número está no vetor
    for(i = 0; i < 8; i++) {
        if(vetor[i] == numero) {
            printf("O numero %d foi encontrado na posicao %d do vetor!\n", numero, i);
            encontrado = 1;
        }
    }
    
    // Se o número não foi encontrado
    if(!encontrado) {
        printf("O numero %d nao foi encontrado no vetor.\n", numero);
    }
    
    return 0;
}
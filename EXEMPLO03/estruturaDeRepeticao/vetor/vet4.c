/*Escreva um programa que crie um vetor de números inteiros de 6 posições e povoe esse vetor com
valores lidos do teclado. O programa deverá aceitar somente números pares entre 1 e 20. Ao final,
imprima todos os valores salvos no vetor, além da média dos valores, o menor e o maior valor*/

#include <stdio.h>

int main() {
    int vetor[6];
    int numero, i;
    float media = 0;
    int menor, maior;
    
    // Leitura dos dados com validação
    for(i = 0; i < 6; i++) {
        do {
            printf("Digite o %dº numero par (entre 1 e 20): ", i+1);
            scanf("%d", &numero);
            
            // Verifica se o número é par e está no intervalo correto
            if(numero <= 1 || numero > 20 || numero % 2 != 0) {
                printf("Numero invalido! Digite um numero par entre 1 e 20.\n");
            }
        } while(numero <= 1 || numero > 20 || numero % 2 != 0);
        
        vetor[i] = numero;
    }
    
    // Inicializa menor e maior com o primeiro valor
    menor = vetor[0];
    maior = vetor[0];
    
    // Calcula soma para média e encontra menor e maior
    printf("\nNumeros digitados: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
        media += vetor[i];
        
        if(vetor[i] < menor) menor = vetor[i];
        if(vetor[i] > maior) maior = vetor[i];
    }
    
    // Calcula a média
    media = media / 6;
    
    // Imprime os resultados
    printf("\nMedia dos valores: %.2f", media);
    printf("\nMenor valor: %d", menor);
    printf("\nMaior valor: %d\n", maior);
    
    return 0;
}
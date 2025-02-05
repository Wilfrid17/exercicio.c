/*Escreva um programa que leia do teclado valores para dois vetores de 4 posições de ponto
flutuante, depois subtraia os dois vetores. Ao final da execução deverá ser impresso o resultado na
tela.*/

#include <stdio.h>
int main() {
    float vet1[4],vet2[4], resultado[4];
    int i;

    printf("Digite os valores do primeiro vetor:\n ");
    for(i = 0; i < 4; i++){
      printf("Digite o valor [%d]: ", i+1);
      scanf("%f", &vet1[i]);
    }

    printf("Digite os valores de segunda vetor:\n");
    for(i = 0; i<4; i++) {
        printf("Digite o valor[%d]: ",i+1);
        scanf("%f", &vet2[i]);
    }

    for(i = 0; i<4; i++){
        resultado[i] = vet1[i] - vet2[i];
    }

    printf("Resultado Subtracao:\n");
    for(i = 0; i<4; i++){
        printf("%.1f", resultado[i]);
    }
    printf("\n");


   return 0;
}
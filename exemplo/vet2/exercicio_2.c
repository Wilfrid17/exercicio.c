/*. Escreva um programa que leia do teclado valores para dois vetores de 4 posições de ponto
flutuante, depois subtraia os dois vetores. Ao final da execução deverá ser impresso o resultado na
tela*/
#include <stdio.h>

int main() {
    float vetorA [4], vetorB [4], subtracao;

    int i;

    for (i = 0; i < 4; i++) {
        printf("Preenchendo vetor A indice %d: ",i);
        scanf("%f", &vetorA[i]);

    }

    for (i = 0; i < 4; i++) {
        printf("Preenchendo vetor B indice %d: ",i);
        scanf("%f ",&vetorB[i]);
    }

    for(i = 0; i < 4; i++){
        subtracao =  vetorA[i] - vetorB[i];
        printf("Subtracao indices %d: %.1f: \n",i, subtracao);
    }


   return 0;

}   
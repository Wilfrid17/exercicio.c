/*Leia do teclado valores para um vetor de 10 elementos inteiros,
pares e positivos. Crie um segundo vetor da seguinte forma: os elementos de
índices pares receberão os respectivos elementos divididos por 2; os
elementos de índices ímpares receberão os respectivos elementos
multiplicados por 3. Imprima os dois vetore*/
#include <stdio.h>

int main () {
    int vetor[10], novo_vetor[10];
    int i;

    for(i = 0; i < 10; i++){
        do{
            printf("Digite o numro pare positivo: %d ",i);
            scanf("%d",&vetor[i]);   
        }while (vetor[i] <= 0 || vetor[i] % 2 != 0);
 
    }

    for(i = 0; i < 10; i++) {
        if(i % 2 == 0) {
            novo_vetor[i] = vetor[i] / 2;
        }
        else {
            novo_vetor[i] = vetor[i] * 3;
        }
    }

    //Imprimir os dois vetores
    printf("\nVetor Original: ");
    for(i = 0; i < 10; i++) {
        printf("%d", vetor[i]);
    }

    printf("\nNovo vetor: ");
    for(i = 0; i < 10; i++) {
        printf("%d", novo_vetor[i]);
    }
    printf("\n");


    return 0;
}
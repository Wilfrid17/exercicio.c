/*Escreva um programa que contenha um vetor de 8 valores lidos do teclado. Você deve garantir que
os valores lidos sejam inteiros positivos. Em seguida, o programa deverá solicitar um número do
teclado e verificar se esse número está contido ou não no vetor*/

#include <stdio.h>

int main() {
    int vetor[8],valor=0;
    int i;
    //lendo valor inteiro no vetor
    for(i=0; i<8; i++) {
        printf("Digite um valor positivo: ");
        scanf("%d ",&valor);
        //verifica se valor negativo ou zero, solicitar um outro valor
        if(valor <=0) {
            printf("Porfavor Digite um numero positivo: ");
            scanf("%d ", &valor);
        }
        vetor[i] = valor;//armazenar valor no vetor
    }
    //aqui vai exibir valor do vetor
    printf("\nValor no vetor: ");
    for(i=0; i<8; i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");
    return 0;
}
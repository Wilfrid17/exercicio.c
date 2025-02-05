/*Escreva um programa que sorteie aleatoriamente 1000 números
e armazene-os em um vetor. Em seguida, o usuário deve digitar um número e
seu programa deve informar se o número digitado está contido no vetor ou
não. Se estiver, diga em que posições do vetor ele é encontrado */

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define tamanho 1000
int main () {
    int vetor [tamanho];
    int numero, encontrado = 0;
    int i;
    int rand();
    
    printf("Gerando 1000 numeros aleatorios...\n");
    for(i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 101;//Gera número de 0 a 100
    }
    printf("\nDigite um numero para busca: ");
    scanf("%d", &numero);

    // Busca o número no vetor
    printf("\nBuscando o numero %d no vetor...\n", numero);
    for(i = 0; i < tamanho; i++) {
       if(vetor[i] == numero) {
        if(encontrado == 0) {
            printf("\nNumero e encontrado na posicoes: ");
        }
        printf("Posicoes:%d\n",i);
        encontrado = 1;
       }
    }

    // Se o número não foi encontrado
    if(!encontrado) {
        printf("\nO numero %d nao foi encontrado no vetor.\n", numero);
    }


    return 0;
}
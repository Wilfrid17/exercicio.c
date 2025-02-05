/*Implemente um programa que exiba os conteúdos dos itens de índice par de um veto*/

#include <stdio.h>

int main (){
    int vet[] = {10,20,30,40,50,60,70,80,90,100};
    int tamanho = sizeof(vet) / sizeof(vet[0]);
    int i;

    printf("Elemento do indice par do vetor: \n");
    for(i = 0; i< tamanho; i+=2) {
        printf("Indice%d: %d\n", i , vet[i]);
    }

    return 0;
}
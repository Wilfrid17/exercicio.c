/*Escreva um programa que apresente os dados de um vetor na ordem inversa em que eles foram
inseridos*/
#include <stdio.h> 

int main () {
    int dados [8];
    int indice;

    for(indice = 0; indice <= 7; indice++){
        printf("Digite o dados do vetor %d: ",indice);
        scanf("%d", &dados[indice]);
    }

    for(indice = 7; indice >= 0; indice--) {
        printf("Dados [%d] = [%d]\n",indice, dados[indice]);
    }
}
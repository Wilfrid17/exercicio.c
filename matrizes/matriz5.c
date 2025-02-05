/*Escreva um programa que construa uma matriz de 5 linhas por 5
colunas de números reais e coloque o conteúdo de sua diagonal principal
dentro de um vetor e o imprima*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int tam = 5;
    int matriz[tam][tam];
    int i, j;

    srand(time(NULL));
    //preenche matriz
    for(i = 0; i < tam; i++) {
        for(j = 0; j < tam; j++){
            matriz[i][j] = rand() % 100;
        }
    }
    //mostra a matriz completa
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    //mostra apenas diagonal principal
    printf("\nDiagonal Pricipal:\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            if(i == j)
                printf("%d" ,matriz[i][j]);
            else
                printf("  ");
        }
        printf("\n");
        }
    return 0;
}
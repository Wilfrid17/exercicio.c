/*Escreva um programa que gere uma matriz de inteiros de 4 linhas
por 4 colunas e crie sua transposta (matriz transposta é toda a matriz onde são
trocadas as linhas pelas colunas ou vice-versa*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int tam = 4;
    int matriz[tam][tam],trans[tam][tam];
    int l,c;
    srand(time(NULL));

    //preenche matriz
    for(l = 0; l < tam; l++) {
        for(c = 0; c < tam; c++){
            matriz[l][c] = rand() % 100;

        }
    }

    printf("\nMatriz original:\n");
    for(l = 0; l < tam; l++) {
        for(c = 0; c < tam; c++){
            printf("%3d",matriz[l][c]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta: \n");
    for(l = 0; l < tam; l++){
        for(c = 0; c < tam; c++){
            trans[c][l] = matriz[l][c];
        }
    }
    printf("\nMatriz Transposta: \n");
    for(l = 0; l < tam; l++){
        for(c = 0; c < tam; c++){
            printf("%3d ", trans[l][c]);
        }
        printf("\n");
    }
    return 0;
}

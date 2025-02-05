/*Defina uma matriz de 4 linhas por 4 colunas
 e imprima a multiplicação de sua
  diagonal principal.
  */

#include <stdio.h>

int main () {
    int matriz[4][4];
    int mult = 1;
    int l,c;

    for(l = 0; l < 4; l++) {
        for(c = 0; c < 4; c++){
            printf("Preenche Linha e Coluna: [%d][%d]: ",l,c);
            scanf("%d",&matriz[l][c]);
        }
    }

    printf("\n");

    for(l = 0; l < 4; l++) {
        mult*= matriz[l][l];
    }

    //printf("O Elemento diagonal\n");

    for(l = 0; l < 4; l++) {
        printf("%d" ,matriz[l][l]);
    }

    printf("Multiplicacao da diagonal: %d\n",mult);


    return 0;
}
/*FAZER UM PROGRAMA PARA LER DOIS NÚMEROS INTEIROS POSITIVOS M E N 
(MAXIMO = 5), DEPOIS LER UMA MATRIZ DE M LINHAS E N COLUNAS CONTENDO NÚMEROS
INTEIROS. EM SEGUIDA, MOSTRA NA TELA A MATRIZ LIDA CONFORME EXEMPLO.*/

#include <stdio.h>

int main () {
    int matriz[5][5];
    int i,j,M,N;

    printf("Quantas linhas vai ter a matriz? ");
    scanf("%d", &M);
    printf("Quantas colunas vai ter a matriz? ");
    scanf("%d", &N);
    /*
    if(M > 5 || N > 5) {
        printf("ERRO MAXIMO LINHA E COLUNA SAO 5X5\n");
        return 1;
    }
    */

    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nMATRIZ DIGITADO:\n");
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

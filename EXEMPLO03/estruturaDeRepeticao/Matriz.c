#include <stdio.h>
//Matriz
int main() {
    int M, N, i, j;
    printf("Qual a quantidade de linhas da matriz:? ");
    scanf("%d", &M);
    printf("Qual a quantidade de colunas da matriz:? ");
    scanf("%d", &N);

    int matriz[M][N];

    // Ler matrix dos elements
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            printf("Elemento[%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // analizando matriz negative dos elements
    printf("Elementos negativos da matriz:\n");
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            if(matriz[i][j] < 0) {
                printf("%d ", matriz[i][j]);
            }
        }
    }

    return 0;
}
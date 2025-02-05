/*Escreva um programa que leia do teclado valores inteiros para
uma matriz de 5 linhas por 5 colunas. Em seguida, leia do teclado um valor
numérico X. Conte quantos valores múltiplos de X existem na matriz e
mostre-os na tela.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int matriz[5][5];
    int i , j , valorX;
    int contador;
    srand(time(NULL));

    printf("Digite um valor X: ");
    scanf("%d", &valorX);

    if(valorX < 0) {
        printf("O Numero tem que ser maior que zero\n: ");
    }
    //preenche e mostra matriz
    printf("\nMatriz gerada: \n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
           matriz[i][j] = rand() % 100;
           printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    //conta e mostra vos multiplos de X
    printf("\nMutiplos de %d encontrados: ", valorX);
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(matriz[i][j] % valorX == 0) {
                printf("%d ", matriz[i][j]);
                contador++;
            }
        }
    }
    printf("\nTotal de multiplos encontrados: %d\n", contador);


    return 0;
}
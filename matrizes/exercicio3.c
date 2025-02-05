 /*Defina uma matriz com 3 linhas e 5 colunas e imprima o 
 somatório dos elementos de sua última
coluna*/
#include <stdio.h>

int main() {
    int mat[3][5];
    int l,c;
    int soma = 0;

    for(l = 0; l < 3; l++){
        for(c = 0; c < 5; c++){
            printf("Preenche L [%d] e C [%d] ", l,c);
            scanf("%d", &mat[l][c]);
        }
        printf("\n");
    }

    for(l = 0; l < 3; l++) {
        for(c = 0; c < 5; c++){
        soma = soma + mat[2][4];
        }
    }

    printf("Soma do valor e: %d \n",soma);
    printf("\n");


    return 0;
}
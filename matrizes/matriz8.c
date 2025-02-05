/*8. Escreva um programa que deverá permitir que o usuário entre
com os valores dos elementos de uma matriz quadrada de ordem 4 (4 linhas e
4 colunas) e possibilite ao usuário realizar as seguintes funcionalidades:
a. Imprimir todos os elementos da matriz;
b. Somar os quadrados de todos os elementos da primeira coluna;
c. Somar todos os elementos da terceira linha;
d. Somar os elementos da diagonal principal; e
e. Somar todos os elementos de índice par da segunda linha.
.*/

#include <stdio.h>

int main (){
    int matriz[4][4];
    int opcao;
    int l,c,soma = 0;

   //preenche matriz
    for(l = 0; l < 4; l++) {
        for(c = 0; c < 4; c++){
            printf("Digite o elemento [%d] [%d]: ", l, c);
        }
    printf("\n");
    }
    do {
        printf("\nEscolha uma opcao: \n");
        printf("1- Imprimir todos os elemento da matriz\n");
        printf("2-Somar os quadrados da primeira linha\n");
        printf("3-Somar elementos da terceira linha\n");
        printf("4-Somar elementos da diagonal principal\n");
        printf("5-somar elementos de indice par da segunda linha\n");
        printf("0-Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        printf("\nMatriz completa:\n");
        for(l = 0; l < 4; l++){
            for(c = 0; c <4; c++){
                printf("%d ", matriz[l][c]);
            }
            printf("\n");
        }
            break;
        case 2:
            //soma dos quadrados da primeira coluna
            soma = 0;
            for(l = 0 ; l < 4; l++){
                soma+=matriz[l][0] * matriz[l][0];
            }
            printf("\nSoma dos quadrado da primeira coluna: %d\n", soma);
            break;
        case 3:
            //soma dos elemento da terceira linha
            soma=0;
            for(c = 0; c < 4; c++){
                soma+=matriz[2][0];//indice 2 representa terceira linha
            }
            printf("\nSoma da terceira linha: %d", soma);
            break;
        case 4:
            //soma dos elementos da diagonal principal
            soma=0;
            for(l = 0; l<4; l++){
                soma+=matriz[l][l];
            }
            printf("\nSoma dos elementos da diagonal principal: %d", soma);
            break;
        case 5:
           //soma dos elemento indice par da segunda linha
           soma =0;
           for(c = 0; c<4; c++){
            if(c % 2 == 0) {//verifica se o indice e par
                soma+=matriz[1][c];//indice 1 representa a segunda linha
            }
           }
           printf("\nSoma dos elemento de indice par da seguna linha: %d", soma);
           break;
        case 0:
            printf("\nPrograma encerrado! ");
            break;
    
        default:
        printf("\nOpcao invalida!");
            break;
        }
    }while(opcao !=0);


    return 0;
}
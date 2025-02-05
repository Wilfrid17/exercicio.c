/*Implemente um programa que exiba os conteúdos dos itens de índice par de um vetor*/
#include <stdio.h> 
    int main () {
        int vetor [5];
        int i;
        
        for(i = 0; i < 5; i++) {
            printf("Digite um valor para vetor %d: ",i);
            scanf("%d", &vetor[i]);
        }

        printf("Valores de indice pares: \n");
        for(i = 0; i < 5; i++) {
            if(i %2 == 0) {
               printf("Vetor[%d] = %d" ,i,vetor[i]);
            }
        }
    

     return 0;
    }

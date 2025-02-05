/*Escreva um programa que contenha um vetor de 8 valores lidos do teclado. Você deve garantir que
os valores lidos sejam inteiros positivos. Em seguida, o programa deverá solicitar um número do
teclado e verificar se esse número está contido ou não no vetor*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); //inicializa semente aleatoria
    int vetor[1000],i,num,cont = 0;
    for(i = 0)
    /*
    int vetor[8],valor,cont = 0;
    int i;
    //lendo valor inteiro no vetor
    for(i=0; i<8; i++) {
        do {
              printf("Digite um valor positivo %d: ",i);
            scanf("%d ",&valor);
        }while (vetor[i] < 0);

        printf("Digite um nume a ser buscado no vetor");
        scanf("%d", &valor);
        
    }
    */
    //aqui vai exibir valor do vetor
    printf("\nValor no vetor: ");
    for(i=0; i<8; i++){
        if(vetor[i] == valor){
            cont++;

        }
    }
    if(cont > 0 ){
        printf("")
    }
    printf("\n");
    return 0;
}
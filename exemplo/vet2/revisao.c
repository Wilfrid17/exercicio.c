/*Escreva um programa que crie um vetor de números inteiros de 6 posições e povoe esse vetor com
valores lidos do teclado. O programa deverá aceitar somente números pares entre 1 e 20. Ao final,
imprima todos os valores salvos no vetor, além da média dos valores, o menor e o maior valor*/

#include <stdio.h>

int main(){
    int vet[6],Maior,Menor;
    int i,valor = 0;
    float soma,media;


    for(i = 0; i <6; i++) {
       do {
           printf("Digite um valor do vetor %d: ", i);
           scanf("%d", &vet[i]);
            
       } while (vet[i] < 1 || vet[i] > 20 || vet[i] % 2 != 0); 

    }

    Maior = vet[0]; 
    Menor = vet[0];

    for(i = 0; i < 6; i++){
        printf("vetor na indice %d: %d \n",i, vet[i]);
        soma = soma + vet[i];
        valor++;

        if(vet[i] < Menor) Menor = vet[i];
        if(vet[i] > Maior) Maior = vet[i];

    }

    media = soma / valor;
    printf("Media dos valor do vetor: %.1f \n",media);
    printf("Menor valor: %d\n",Menor);
    printf("Maior valor: %d ",Maior);

    

    return 0;
}
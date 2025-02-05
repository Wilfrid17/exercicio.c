/*faca um programa que leia um numero inteiro positivo N (maximo = 10) e depois N numeros inteiro e armazena-ros em um vetor. Em seguida mostra na tela todos valores negativos lidos*/
#include <stdio.h>
 int main() {
    int vetor[10],n,i;
    
    printf("Quantos numeros voce vai digitar: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
    }
    
    printf("NUMEROS NEGATIVOS:\n ");
    for(i = 0; i < n; i++){
        if(vetor[i] < 0){
            printf("%d", vetor[i]);
        }
        
    }
    

    return 0;
 }
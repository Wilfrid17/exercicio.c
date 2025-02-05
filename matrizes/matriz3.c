/*Escreva um programa que verifica se uma string é um
palíndromo, ou seja, é a mesma quando lida de trás para frente ou de frente
para trás */

#include <stdio.h>
#include <string.h> 

int main () {
    char palavras[30],novo[30];
    int i,tamanho,qtd = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavras);
    
    tamanho = strlen(palavras);
    for(i = 0; i < tamanho; i++){
        novo[i] = palavras[tamanho-1-i];
    }
    novo[i]  = '\0';

    printf("Original: %s\nNovo: %s\n", palavras, novo);


    for(i = 0; i < tamanho; i++){
        if(palavras[i]== novo[i])
            qtd++;

    }

    if(tamanho == qtd){
        printf("\nEh Palindroma...\n");    
    }
    else{
        printf("\nNao eh Palindroma...\n");
    }

    return 0;
}

